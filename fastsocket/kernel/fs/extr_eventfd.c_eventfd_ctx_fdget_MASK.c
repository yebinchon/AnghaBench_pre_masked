
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int private_data; } ;
struct eventfd_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 struct eventfd_ctx* FUNC_1 (int ) ;
 struct file* FUNC_2 (int) ;
 int FUNC_3 (struct file*) ;

struct eventfd_ctx *FUNC_4(int VAR_0)
{
 struct file *VAR_1;
 struct eventfd_ctx *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return (struct eventfd_ctx *) VAR_1;
 VAR_2 = FUNC_1(VAR_1->private_data);
 FUNC_3(VAR_1);

 return VAR_2;
}
