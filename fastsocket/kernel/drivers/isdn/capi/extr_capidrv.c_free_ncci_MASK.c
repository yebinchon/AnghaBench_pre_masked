
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct capidrv_ncci {size_t chan; struct capidrv_ncci* next; TYPE_1__* plcip; } ;
struct TYPE_7__ {TYPE_2__* bchans; } ;
typedef TYPE_3__ capidrv_contr ;
struct TYPE_6__ {int * nccip; } ;
struct TYPE_5__ {struct capidrv_ncci* ncci_list; } ;


 int FUNC_0 (struct capidrv_ncci*) ;

__attribute__((used)) static void FUNC_1(capidrv_contr * VAR_0, struct capidrv_ncci *VAR_1)
{
 struct capidrv_ncci **VAR_2;

 for (VAR_2 = &(VAR_1->plcip->ncci_list); *VAR_2; VAR_2 = &(*VAR_2)->next) {
  if (*VAR_2 == VAR_1) {
   *VAR_2 = (*VAR_2)->next;
   break;
  }
 }
 VAR_0->bchans[VAR_1->chan].nccip = ((void*)0);
 FUNC_0(VAR_1);
}
