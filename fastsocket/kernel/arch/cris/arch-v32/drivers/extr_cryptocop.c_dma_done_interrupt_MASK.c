
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cryptocop_prio_job {int node; int iop; TYPE_2__* oper; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ reg_dma_rw_ack_intr ;
typedef int irqreturn_t ;
struct TYPE_5__ {int cb_data; int (* cb ) (TYPE_2__*,int ) ;scalar_t__ fast_callback; scalar_t__ operation_status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cryptocop_prio_job* VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct cryptocop_prio_job*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_12(int VAR_10, void *VAR_11)
{
 struct cryptocop_prio_job *VAR_12;
 reg_dma_rw_ack_intr VAR_13 = {
  .data = 1,
 };

 FUNC_1(VAR_7, VAR_0, VAR_9, VAR_13);

 FUNC_0(FUNC_6("cryptocop DMA done\n"));

 FUNC_7(&VAR_8);
 if (VAR_5 == ((void*)0)){
  FUNC_6("stream co-processor got interrupt when not busy\n");
  FUNC_9(&VAR_8);
  return VAR_1;
 }
 VAR_12 = VAR_5;
 VAR_5 = ((void*)0);
 FUNC_9(&VAR_8);


 if (!FUNC_8(&VAR_4)){
  FUNC_0(FUNC_6("cryptocop irq handler, not starting a job\n"));
 } else {
  FUNC_2();
  FUNC_9(&VAR_4);
 }

 VAR_12->oper->operation_status = 0;
 if (VAR_12->oper->fast_callback){

  VAR_12->oper->cb(VAR_12->oper, VAR_12->oper->cb_data);
  FUNC_3(VAR_12->iop);
  FUNC_4(VAR_12);
 } else {
  FUNC_7(&VAR_3);
  FUNC_5(&(VAR_12->node), &VAR_2);
  FUNC_9(&VAR_3);
  FUNC_11(&VAR_6);
 }

 FUNC_0(FUNC_6("cryptocop leave irq handler\n"));
 return VAR_1;
}
