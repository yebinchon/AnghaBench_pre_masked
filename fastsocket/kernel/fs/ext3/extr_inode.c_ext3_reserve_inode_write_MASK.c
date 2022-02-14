
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext3_iloc {int * bh; } ;
typedef int handle_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct ext3_iloc*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(handle_t *VAR_0, struct inode *VAR_1,
    struct ext3_iloc *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_0) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (!VAR_3) {
   FUNC_0(VAR_2->bh, "get_write_access");
   VAR_3 = FUNC_3(VAR_0, VAR_2->bh);
   if (VAR_3) {
    FUNC_1(VAR_2->bh);
    VAR_2->bh = ((void*)0);
   }
  }
 }
 FUNC_4(VAR_1->i_sb, VAR_3);
 return VAR_3;
}
