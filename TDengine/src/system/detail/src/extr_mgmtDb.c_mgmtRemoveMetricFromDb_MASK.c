
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int numOfMetrics; TYPE_2__* pMetric; } ;
struct TYPE_9__ {int * pSkipList; TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_1__* prev; } ;
struct TYPE_7__ {TYPE_2__* next; } ;
typedef TYPE_3__ STabObj ;
typedef TYPE_4__ SDbObj ;


 int * FUNC_0 (int *) ;

int FUNC_1(SDbObj *VAR_0, STabObj *VAR_1) {
  if (VAR_1->prev) VAR_1->prev->next = VAR_1->next;

  if (VAR_1->next) VAR_1->next->prev = VAR_1->prev;

  if (VAR_1->prev == ((void*)0)) VAR_0->pMetric = VAR_1->next;

  VAR_0->numOfMetrics--;

  if (VAR_1->pSkipList != ((void*)0)) {
    VAR_1->pSkipList = FUNC_0(VAR_1->pSkipList);
  }
  return 0;
}
