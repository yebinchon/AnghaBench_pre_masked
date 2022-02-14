
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {scalar_t__ state; TYPE_1__* spu; } ;
struct TYPE_4__ {int list_mutex; } ;
struct TYPE_3__ {int node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spu_context*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct spu_context *VAR_2)
{
 int VAR_3;

 if (VAR_2->state == VAR_0) {
  VAR_3 = VAR_2->spu->node;




  FUNC_1(&VAR_1[VAR_3].list_mutex);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_1[VAR_3].list_mutex);
 } else {
  FUNC_0(VAR_2);
 }
}
