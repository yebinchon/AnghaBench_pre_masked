
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {scalar_t__ open_count; scalar_t__ state; int lock; int name; scalar_t__ rpc_client; int * driver_data; int * ops; scalar_t__ clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct msm_adsp_module*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct msm_adsp_module *VAR_4)
{
 unsigned long VAR_5;

 FUNC_5(&VAR_4->lock);
 if (--VAR_4->open_count == 0 && VAR_4->clk)
  FUNC_1(VAR_4->clk);
 if (VAR_4->ops) {
  FUNC_7("adsp: closing module %s\n", VAR_4->name);




  FUNC_8(&VAR_2, VAR_5);
  VAR_4->ops = ((void*)0);
  VAR_4->driver_data = ((void*)0);
  FUNC_9(&VAR_2, VAR_5);

  if (VAR_4->state != VAR_0) {
   FUNC_7("adsp: disabling module %s\n", VAR_4->name);
   FUNC_3(VAR_4);
  }

  FUNC_4(VAR_4->rpc_client);
  VAR_4->rpc_client = 0;
  if (--VAR_3 == 0) {
   FUNC_2(VAR_1);
   FUNC_0();
   FUNC_7("adsp: disable interrupt\n");
  }
 } else {
  FUNC_7("adsp: module %s is already closed\n", VAR_4->name);
 }
 FUNC_6(&VAR_4->lock);
}
