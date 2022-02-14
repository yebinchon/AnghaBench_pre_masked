
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_lblk_t ;
typedef int __le32 ;
struct TYPE_7__ {int i_data; } ;
struct TYPE_6__ {int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,struct buffer_head*,int) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct inode*,struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 struct buffer_head* FUNC_7 (struct super_block*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static Indirect *FUNC_9(struct inode *VAR_1, int VAR_2,
     ext4_lblk_t *VAR_3,
     Indirect VAR_4[4], int *VAR_5)
{
 struct super_block *VAR_6 = VAR_1->i_sb;
 Indirect *VAR_7 = VAR_4;
 struct buffer_head *VAR_8;

 *VAR_5 = 0;

 FUNC_1(VAR_4, ((void*)0), FUNC_0(VAR_1)->i_data + *VAR_3);
 if (!VAR_7->key)
  goto no_block;
 while (--VAR_2) {
  VAR_8 = FUNC_7(VAR_6, FUNC_5(VAR_7->key));
  if (FUNC_8(!VAR_8))
   goto failure;

  if (!FUNC_3(VAR_8)) {
   if (FUNC_2(VAR_8) < 0) {
    FUNC_6(VAR_8);
    goto failure;
   }

   if (FUNC_4(VAR_1, VAR_8)) {
    FUNC_6(VAR_8);
    goto failure;
   }
  }

  FUNC_1(++VAR_7, VAR_8, *((__le32 *)VAR_8->b_data + *++VAR_3));

  if (!VAR_7->key)
   goto no_block;
 }
 return ((void*)0);

failure:
 *VAR_5 = -VAR_0;
no_block:
 return VAR_7;
}
