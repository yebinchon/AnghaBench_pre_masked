
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numOfMetrics; TYPE_1__* pMetric; } ;
struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SDbObj ;



int FUNC_0(SDbObj *VAR_0, STabObj *VAR_1) {
  VAR_1->next = VAR_0->pMetric;
  VAR_1->prev = ((void*)0);

  if (VAR_0->pMetric) VAR_0->pMetric->prev = VAR_1;

  VAR_0->pMetric = VAR_1;
  VAR_0->numOfMetrics++;

  return 0;
}
