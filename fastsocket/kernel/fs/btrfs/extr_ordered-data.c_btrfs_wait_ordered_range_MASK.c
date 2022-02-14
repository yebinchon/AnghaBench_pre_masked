
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct btrfs_ordered_extent {scalar_t__ file_offset; scalar_t__ len; } ;
struct TYPE_2__ {int runtime_flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct btrfs_ordered_extent* FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct btrfs_ordered_extent*) ;
 int FUNC_4 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct inode *VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 struct btrfs_ordered_extent *VAR_7;
 int VAR_8;

 if (VAR_3 + VAR_4 < VAR_3) {
  VAR_6 = FUNC_1(VAR_1);
 } else {
  VAR_6 = VAR_3 + VAR_4 - 1;
  if (VAR_6 > FUNC_1(VAR_1))
   VAR_6 = FUNC_1(VAR_1);
 }




 FUNC_6(VAR_2->i_mapping, VAR_3, VAR_6);
 if (FUNC_7(VAR_0,
       &FUNC_0(VAR_2)->runtime_flags))
  FUNC_6(VAR_2->i_mapping, VAR_3, VAR_6);

 FUNC_5(VAR_2->i_mapping, VAR_3, VAR_6);

 VAR_5 = VAR_6;
 VAR_8 = 0;
 while (1) {
  VAR_7 = FUNC_2(VAR_2, VAR_5);
  if (!VAR_7)
   break;
  if (VAR_7->file_offset > VAR_6) {
   FUNC_3(VAR_7);
   break;
  }
  if (VAR_7->file_offset + VAR_7->len < VAR_3) {
   FUNC_3(VAR_7);
   break;
  }
  VAR_8++;
  FUNC_4(VAR_2, VAR_7, 1);
  VAR_5 = VAR_7->file_offset;
  FUNC_3(VAR_7);
  if (VAR_5 == 0 || VAR_5 == VAR_3)
   break;
  VAR_5--;
 }
}
