
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* event_rep; TYPE_1__* event_list; int event_sema; } ;
struct TYPE_8__ {int eEvent; struct TYPE_8__* next; } ;
typedef TYPE_2__ ILCLIENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__* FUNC_6 (int,char*) ;
 int FUNC_7 (int *,char*,int) ;

ILCLIENT_T *FUNC_8()
{
   ILCLIENT_T *VAR_4 = FUNC_6(sizeof(ILCLIENT_T), "ilclient");
   int VAR_5;

   if (!VAR_4)
      return ((void*)0);

   FUNC_5(VAR_1, VAR_2);
   FUNC_4("ilclient", VAR_1);

   FUNC_2(VAR_4, 0, sizeof(ILCLIENT_T));

   VAR_5 = FUNC_7(&VAR_4->event_sema, "il:event", 1);
   FUNC_3(VAR_5 == VAR_3);

   FUNC_0(VAR_4);
   VAR_4->event_list = ((void*)0);
   for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
   {
      VAR_4->event_rep[VAR_5].eEvent = -1;
      VAR_4->event_rep[VAR_5].next = VAR_4->event_list;
      VAR_4->event_list = VAR_4->event_rep+VAR_5;
   }
   FUNC_1(VAR_4);
   return VAR_4;
}
