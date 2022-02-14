
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int fasync; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 struct fuse_conn* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct fuse_conn *VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;


 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->fasync);
}
