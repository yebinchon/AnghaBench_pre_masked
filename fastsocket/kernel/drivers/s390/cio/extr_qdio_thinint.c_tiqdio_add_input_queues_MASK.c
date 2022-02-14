
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sync; } ;
struct qdio_irq {int nr_input_qs; int dsci; TYPE_2__** input_qs; TYPE_1__ siga_flag; } ;
struct TYPE_4__ {int entry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct qdio_irq *VAR_3)
{

 if (!VAR_0 && VAR_3->siga_flag.sync)
  VAR_0 = 1;

 FUNC_2(&VAR_2);
 FUNC_0(VAR_3->nr_input_qs < 1);
 FUNC_1(&VAR_3->input_qs[0]->entry, &VAR_1);
 FUNC_3(&VAR_2);
 FUNC_4(VAR_3->dsci, 1);
}
