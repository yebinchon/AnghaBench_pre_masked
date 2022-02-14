
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int private_data; int * f_op; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 struct eventfd_ctx* FUNC_0 (int ) ;
 struct eventfd_ctx* FUNC_1 (int ) ;
 int VAR_1 ;

struct eventfd_ctx *FUNC_2(struct file *VAR_2)
{
 if (VAR_2->f_op != &VAR_1)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2->private_data);
}
