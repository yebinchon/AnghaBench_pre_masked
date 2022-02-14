
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ctime; } ;
struct ext2_block_alloc_info {long last_alloc_logical_block; void* last_alloc_physical_block; } ;
typedef void* ext2_fsblk_t ;
struct TYPE_5__ {struct ext2_block_alloc_info* i_block_alloc_info; } ;
struct TYPE_4__ {scalar_t__ bh; int key; int * p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1,
   long VAR_2, Indirect *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct ext2_block_alloc_info *VAR_7;
 ext2_fsblk_t VAR_8;

 VAR_7 = FUNC_0(VAR_1)->i_block_alloc_info;




 *VAR_3->p = VAR_3->key;





 if (VAR_4 == 0 && VAR_5 > 1) {
  VAR_8 = FUNC_2(VAR_3->key) + 1;
  for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
   *(VAR_3->p + VAR_6 ) = FUNC_1(VAR_8++);
 }






 if (VAR_7) {
  VAR_7->last_alloc_logical_block = VAR_2 + VAR_5 - 1;
  VAR_7->last_alloc_physical_block =
    FUNC_2(VAR_3[VAR_4].key) + VAR_5 - 1;
 }




 if (VAR_3->bh)
  FUNC_3(VAR_3->bh, VAR_1);

 VAR_1->i_ctime = VAR_0;
 FUNC_4(VAR_1);
}
