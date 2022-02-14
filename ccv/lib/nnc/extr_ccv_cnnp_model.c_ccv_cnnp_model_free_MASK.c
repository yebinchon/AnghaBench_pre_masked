
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* const name; scalar_t__ compiled_data; scalar_t__ graph; struct TYPE_10__* const inputs; TYPE_6__* io; TYPE_6__* incomings; TYPE_6__* outgoings; TYPE_1__* isa; } ;
typedef TYPE_2__ ccv_cnnp_model_t ;
typedef TYPE_2__* ccv_cnnp_model_io_t ;
struct TYPE_11__ {int rnum; } ;
struct TYPE_9__ {int (* deinit ) (TYPE_2__* const) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__* const) ;

void FUNC_6(ccv_cnnp_model_t* const VAR_0)
{
 if (VAR_0->isa->deinit)
  VAR_0->isa->deinit(VAR_0);
 if (VAR_0->io)
 {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->io->rnum; VAR_1++)
  {
   ccv_cnnp_model_io_t VAR_2 = *(ccv_cnnp_model_io_t*)FUNC_3(VAR_0->io, VAR_1);
   if (VAR_2->outgoings)
    FUNC_2(VAR_2->outgoings);
   if (VAR_2->incomings)
    FUNC_2(VAR_2->incomings);
   FUNC_1(VAR_2);
  }
  FUNC_2(VAR_0->io);
 }
 if (VAR_0->inputs)
  FUNC_1(VAR_0->inputs);
 if (VAR_0->graph)
  FUNC_4(VAR_0->graph);
 if (VAR_0->compiled_data)
  FUNC_0(VAR_0->compiled_data);
 if (VAR_0->name)
  FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
