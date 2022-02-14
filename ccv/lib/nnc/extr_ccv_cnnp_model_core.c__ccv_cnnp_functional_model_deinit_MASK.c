
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* io; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
typedef TYPE_2__* ccv_cnnp_model_io_t ;
struct TYPE_10__ {int sequence_size; TYPE_2__** sequence; } ;
typedef TYPE_3__ ccv_cnnp_functional_model_t ;
struct TYPE_11__ {int rnum; } ;
struct TYPE_9__ {TYPE_1__* model; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(ccv_cnnp_model_t* const VAR_0)
{
 ccv_cnnp_functional_model_t* const VAR_1 = (ccv_cnnp_functional_model_t*)VAR_0;
 int VAR_2, VAR_3 = 0, VAR_4;
 for (VAR_2 = 0; VAR_2 < VAR_1->sequence_size; VAR_2++)
 {
  ccv_cnnp_model_t* const VAR_5 = VAR_1->sequence[VAR_2]->model;
  if (!VAR_5)
   continue;
  VAR_1->sequence[VAR_3++] = (ccv_cnnp_model_io_t)VAR_5;

  FUNC_0(VAR_5->io);
  for (VAR_4 = 0; VAR_4 < VAR_5->io->rnum; VAR_4++)
  {
   ccv_cnnp_model_io_t VAR_6 = *(ccv_cnnp_model_io_t*)FUNC_1(VAR_5->io, VAR_4);
   VAR_6->model = 0;
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_2((ccv_cnnp_model_t*)VAR_1->sequence[VAR_2]);
}
