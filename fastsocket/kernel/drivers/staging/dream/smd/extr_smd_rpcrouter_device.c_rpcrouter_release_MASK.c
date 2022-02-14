
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_rpc_endpoint {int dummy; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct msm_rpc_endpoint*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct msm_rpc_endpoint *VAR_2;
 VAR_2 = (struct msm_rpc_endpoint *) VAR_1->private_data;

 return FUNC_0(VAR_2);
}
