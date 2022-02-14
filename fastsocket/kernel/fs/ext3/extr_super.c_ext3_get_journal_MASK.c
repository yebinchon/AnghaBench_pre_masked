
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; int i_size; int i_nlink; } ;
struct TYPE_5__ {struct super_block* j_private; } ;
typedef TYPE_1__ journal_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct super_block*,unsigned int) ;
 int FUNC_3 (struct super_block*,TYPE_1__*) ;
 int FUNC_4 (struct super_block*,int ,char*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int,char*,struct inode*,int ) ;
 TYPE_1__* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static journal_t *FUNC_9(struct super_block *VAR_1,
       unsigned int VAR_2)
{
 struct inode *VAR_3;
 journal_t *VAR_4;





 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_4(VAR_1, VAR_0, "error: no journal found");
  return ((void*)0);
 }
 if (!VAR_3->i_nlink) {
  FUNC_8(VAR_3);
  FUNC_5(VAR_3);
  FUNC_4(VAR_1, VAR_0, "error: journal inode is deleted");
  return ((void*)0);
 }

 FUNC_6(2, "Journal inode found at %p: %Ld bytes\n",
    VAR_3, VAR_3->i_size);
 if (!FUNC_1(VAR_3->i_mode)) {
  FUNC_4(VAR_1, VAR_0, "error: invalid journal inode");
  FUNC_5(VAR_3);
  return ((void*)0);
 }

 VAR_4 = FUNC_7(VAR_3);
 if (!VAR_4) {
  FUNC_4(VAR_1, VAR_0, "error: could not load journal inode");
  FUNC_5(VAR_3);
  return ((void*)0);
 }
 VAR_4->j_private = VAR_1;
 FUNC_3(VAR_1, VAR_4);
 return VAR_4;
}
