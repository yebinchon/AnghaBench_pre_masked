
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext3_iloc {int bh; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct inode*,struct ext3_iloc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(handle_t *VAR_0,
  struct inode *VAR_1, struct ext3_iloc *VAR_2)
{
 int VAR_3 = 0;


 FUNC_1(VAR_2->bh);


 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_2->bh);
 return VAR_3;
}
