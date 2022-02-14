
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_rpc_endpoint {int dummy; } ;
struct inode {int i_rdev; } ;
struct file {struct msm_rpc_endpoint* private_data; } ;


 int VAR_0 ;
 struct msm_rpc_endpoint* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct msm_rpc_endpoint *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_1->i_rdev);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->private_data = VAR_4;
 return 0;
}
