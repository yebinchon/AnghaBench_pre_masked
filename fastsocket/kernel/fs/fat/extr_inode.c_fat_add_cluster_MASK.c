
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int*,int) ;
 int FUNC_1 (struct inode*,int,int) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2, 1);
 if (VAR_1)
  return VAR_1;


 VAR_1 = FUNC_1(VAR_0, VAR_2, 1);
 if (VAR_1)
  FUNC_2(VAR_0, VAR_2);
 return VAR_1;
}
