
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dma_type; int list; int * cmd; int state; } ;
typedef TYPE_1__ scb_t ;
struct TYPE_6__ {int free_list; } ;
typedef TYPE_2__ adapter_t ;




 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(adapter_t *VAR_1, scb_t *VAR_2)
{
 switch( VAR_2->dma_type ) {

 case 129:
  break;

 case 128:
  FUNC_2(VAR_2->cmd);
  break;
 default:
  break;
 }




 FUNC_1(&VAR_2->list);


 VAR_2->state = VAR_0;
 VAR_2->cmd = ((void*)0);

 FUNC_0(&VAR_2->list, &VAR_1->free_list);
}
