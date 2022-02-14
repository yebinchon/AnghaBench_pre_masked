
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct uni_table_desc {int entry_size; int findex; int num_entries; } ;
struct qlcnic_adapter {scalar_t__ file_prd_off; TYPE_2__* ahw; TYPE_1__* fw; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ revision_id; } ;
struct TYPE_3__ {scalar_t__* data; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct uni_table_desc* FUNC_1 (scalar_t__ const*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_3(struct qlcnic_adapter *VAR_4)
{
 struct uni_table_desc *VAR_5;
 const u8 *VAR_6 = VAR_4->fw->data;
 int VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 __le32 VAR_12;

 VAR_5 = FUNC_1(VAR_6,
    VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5->num_entries);
 VAR_9 = FUNC_0(VAR_5->entry_size);
 VAR_10 = FUNC_0(VAR_5->findex) + (VAR_8 * VAR_9);

 if (VAR_4->fw->size < VAR_10)
  return -VAR_0;

nomn:
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {

  u32 VAR_13, VAR_14, VAR_15;
  u8 VAR_16 = VAR_4->ahw->revision_id;
  u32 VAR_17;

  VAR_15 = FUNC_0(VAR_5->findex) +
         VAR_11 * FUNC_0(VAR_5->entry_size);
  VAR_12 = *((__le32 *)&VAR_6[VAR_15] + VAR_3);
  VAR_13 = FUNC_0(VAR_12);
  VAR_12 = *((__le32 *)&VAR_6[VAR_15] + VAR_1);
  VAR_14 = FUNC_0(VAR_12);

  VAR_17 = VAR_7 ? 1 : 2;

  if ((VAR_16 == VAR_14) &&
     ((1ULL << VAR_17) & VAR_13)) {
   VAR_4->file_prd_off = VAR_15;
   return 0;
  }
 }
 if (VAR_7) {
  VAR_7 = 0;
  goto nomn;
 }
 return -VAR_0;
}
