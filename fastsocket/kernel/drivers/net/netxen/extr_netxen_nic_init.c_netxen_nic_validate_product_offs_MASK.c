
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint32_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct uni_table_desc {int num_entries; int entry_size; int findex; } ;
struct TYPE_4__ {scalar_t__ revision_id; } ;
struct netxen_adapter {TYPE_2__ ahw; scalar_t__ file_prd_off; TYPE_1__* fw; } ;
typedef scalar_t__ __le32 ;
struct TYPE_3__ {scalar_t__* data; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct netxen_adapter*) ;
 struct uni_table_desc* FUNC_4 (scalar_t__ const*,int ) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_4)
{
 struct uni_table_desc *VAR_5;
 const u8 *VAR_6 = VAR_4->fw->data;
 int VAR_7 = (FUNC_0(VAR_4->ahw.revision_id)) ?
   1 : FUNC_3(VAR_4);
 __le32 VAR_8;
 __le32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_5 = FUNC_4(VAR_6, VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5->num_entries);
 VAR_9 = FUNC_2(VAR_5->entry_size);
 VAR_10 = FUNC_2(VAR_5->findex) + (VAR_8 * VAR_9);

 if (VAR_4->fw->size < VAR_10)
  return -VAR_0;

nomn:
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {

  __le32 VAR_12, VAR_13, VAR_14;
  u8 VAR_15 = VAR_4->ahw.revision_id;
  uint32_t VAR_16;

  VAR_14 = FUNC_2(VAR_5->findex) +
    (VAR_11 * FUNC_2(VAR_5->entry_size));
  VAR_12 = FUNC_2(*((int *)&VAR_6[VAR_14] + VAR_3));
  VAR_13 = FUNC_2(*((int *)&VAR_6[VAR_14] +
       VAR_1));

  VAR_16 = VAR_7 ? 1 : 2;

  if ((VAR_15 == VAR_13) &&
     ((1ULL << VAR_16) & VAR_12)) {
   VAR_4->file_prd_off = VAR_14;
   return 0;
  }
 }

 if (VAR_7 && FUNC_1(VAR_4->ahw.revision_id)) {
  VAR_7 = 0;
  goto nomn;
 }

 return -VAR_0;
}
