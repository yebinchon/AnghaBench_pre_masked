
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int chan; struct TYPE_8__* next; scalar_t__ msgid; scalar_t__ plci; int state; } ;
typedef TYPE_2__ capidrv_plci ;
struct TYPE_9__ {TYPE_1__* bchans; TYPE_2__* plci_list; } ;
typedef TYPE_3__ capidrv_contr ;
struct TYPE_7__ {TYPE_2__* plcip; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int ) ;

__attribute__((used)) static capidrv_plci *FUNC_1(capidrv_contr * VAR_2, int VAR_3)
{
 capidrv_plci *VAR_4;

 VAR_4 = FUNC_0(sizeof(capidrv_plci), VAR_0);

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->state = VAR_1;
 VAR_4->plci = 0;
 VAR_4->msgid = 0;
 VAR_4->chan = VAR_3;
 VAR_4->next = VAR_2->plci_list;
 VAR_2->plci_list = VAR_4;
 VAR_2->bchans[VAR_3].plcip = VAR_4;

 return VAR_4;
}
