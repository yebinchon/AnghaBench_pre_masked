
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ tcaches_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(tsd_t *VAR_2, unsigned VAR_3)
{
 tcaches_t *VAR_4 = &VAR_0[VAR_3];
 FUNC_0(VAR_2, VAR_4);
 VAR_4->next = VAR_1;
 VAR_1 = VAR_4;
}
