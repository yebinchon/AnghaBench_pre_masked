
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; } ;
struct ext4_group_desc {int dummy; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int i_block_group; int i_last_alloc_group; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_4 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_5 (struct super_block*,int,int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,struct inode*,int*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_0, struct inode *VAR_1,
       ext4_group_t *VAR_2, int VAR_3)
{
 ext4_group_t VAR_4 = FUNC_0(VAR_1)->i_block_group;
 ext4_group_t VAR_5, VAR_6, VAR_7 = FUNC_6(VAR_0);
 struct ext4_group_desc *VAR_8;
 int VAR_9 = FUNC_2(FUNC_1(VAR_0));
 if (VAR_9 > 1) {
  int VAR_10 = 0;

 try_again:
  VAR_4 &= ~(VAR_9-1);
  VAR_6 = VAR_4 + VAR_9;
  if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;
  for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++) {
   VAR_8 = FUNC_5(VAR_0, VAR_5, ((void*)0));
   if (VAR_8 && FUNC_4(VAR_0, VAR_8)) {
    *VAR_2 = VAR_5;
    return 0;
   }
  }
  if (!VAR_10 && FUNC_0(VAR_1)->i_last_alloc_group != ~0) {
   VAR_10 = 1;
   VAR_4 = FUNC_0(VAR_1)->i_last_alloc_group;
   goto try_again;
  }





  *VAR_2 = VAR_4 + VAR_9;
  if (*VAR_2 > VAR_7)
   *VAR_2 = 0;
  return FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 }




 *VAR_2 = VAR_4;
 VAR_8 = FUNC_5(VAR_0, *VAR_2, ((void*)0));
 if (VAR_8 && FUNC_4(VAR_0, VAR_8) &&
   FUNC_3(VAR_0, VAR_8))
  return 0;
 *VAR_2 = (*VAR_2 + VAR_1->i_ino) % VAR_7;





 for (VAR_5 = 1; VAR_5 < VAR_7; VAR_5 <<= 1) {
  *VAR_2 += VAR_5;
  if (*VAR_2 >= VAR_7)
   *VAR_2 -= VAR_7;
  VAR_8 = FUNC_5(VAR_0, *VAR_2, ((void*)0));
  if (VAR_8 && FUNC_4(VAR_0, VAR_8) &&
    FUNC_3(VAR_0, VAR_8))
   return 0;
 }





 *VAR_2 = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (++*VAR_2 >= VAR_7)
   *VAR_2 = 0;
  VAR_8 = FUNC_5(VAR_0, *VAR_2, ((void*)0));
  if (VAR_8 && FUNC_4(VAR_0, VAR_8))
   return 0;
 }

 return -1;
}
