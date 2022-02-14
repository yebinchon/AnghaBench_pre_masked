
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext3_iloc {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct inode*,struct ext3_iloc*) ;
 int FUNC_1 (int *,struct inode*,struct ext3_iloc*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*,int ) ;

int FUNC_4(handle_t *VAR_1, struct inode *VAR_2)
{
 struct ext3_iloc VAR_3;
 int VAR_4;

 FUNC_2();
 FUNC_3(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);
 return VAR_4;
}
