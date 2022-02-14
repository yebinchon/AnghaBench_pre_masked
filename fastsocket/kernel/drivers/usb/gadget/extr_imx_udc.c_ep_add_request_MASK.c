
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_request {int in_use; int queue; } ;
struct imx_ep_struct {int queue; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct imx_ep_struct *VAR_0,
       struct imx_request *VAR_1)
{
 if (FUNC_1(!VAR_1))
  return;

 VAR_1->in_use = 1;
 FUNC_0(&VAR_1->queue, &VAR_0->queue);
}
