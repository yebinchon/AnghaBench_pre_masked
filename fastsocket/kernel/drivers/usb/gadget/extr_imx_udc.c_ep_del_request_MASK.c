
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_request {scalar_t__ in_use; int queue; } ;
struct imx_ep_struct {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct imx_ep_struct *VAR_0,
       struct imx_request *VAR_1)
{
 if (FUNC_1(!VAR_1))
  return;

 FUNC_0(&VAR_1->queue);
 VAR_1->in_use = 0;
}
