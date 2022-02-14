
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __le32 ;
struct TYPE_9__ {int * i_data; } ;
struct TYPE_8__ {int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,struct buffer_head*,int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static Indirect *FUNC_6(struct inode *VAR_2, int VAR_3, int *VAR_4,
     Indirect VAR_5[4], int *VAR_6)
{
 struct super_block *VAR_7 = VAR_2->i_sb;
 Indirect *VAR_8 = VAR_5;
 struct buffer_head *VAR_9;

 *VAR_6 = 0;

 FUNC_1 (VAR_5, ((void*)0), FUNC_0(VAR_2)->i_data + *VAR_4);
 if (!VAR_8->key)
  goto no_block;
 while (--VAR_3) {
  VAR_9 = FUNC_4(VAR_7, FUNC_3(VAR_8->key));
  if (!VAR_9)
   goto failure;

  if (!FUNC_5(VAR_5, VAR_8))
   goto changed;
  FUNC_1(++VAR_8, VAR_9, (__le32*)VAR_9->b_data + *++VAR_4);

  if (!VAR_8->key)
   goto no_block;
 }
 return ((void*)0);

changed:
 FUNC_2(VAR_9);
 *VAR_6 = -VAR_0;
 goto no_block;
failure:
 *VAR_6 = -VAR_1;
no_block:
 return VAR_8;
}
