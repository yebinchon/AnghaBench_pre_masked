
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; int search_key; } ;
typedef int hfs_extent_rec ;
struct TYPE_2__ {int flags; int cached_extents; int cached_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (struct hfs_find_data*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_5, struct hfs_find_data *VAR_6)
{
 int VAR_7;

 FUNC_5(VAR_6->search_key, VAR_5->i_ino, FUNC_0(VAR_5)->cached_start,
     FUNC_1(VAR_5) ? VAR_2 : VAR_1);
 VAR_7 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_5)->flags & VAR_4) {
  if (VAR_7 != -VAR_0)
   return;
  FUNC_4(VAR_6, FUNC_0(VAR_5)->cached_extents, sizeof(hfs_extent_rec));
  FUNC_0(VAR_5)->flags &= ~(VAR_3|VAR_4);
 } else {
  if (VAR_7)
   return;
  FUNC_2(VAR_6->bnode, FUNC_0(VAR_5)->cached_extents, VAR_6->entryoffset, VAR_6->entrylength);
  FUNC_0(VAR_5)->flags &= ~VAR_3;
 }
}
