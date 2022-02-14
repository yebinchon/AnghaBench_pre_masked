
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int actions; } ;
struct TYPE_11__ {int request; } ;
struct TYPE_10__ {unsigned int ports_num; size_t state_transition; int state; TYPE_4__* ports; } ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 TYPE_2__* VAR_3 ;

void FUNC_5(MMALOMX_COMPONENT_T *VAR_4)
{
   uint32_t VAR_5 = 0;
   unsigned int VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_4->ports_num; VAR_6++)
      FUNC_4(VAR_4, &VAR_4->ports[VAR_6]);

   FUNC_0(VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_4->ports_num; VAR_6++)
      VAR_5 |= VAR_4->ports[VAR_6].actions;

   if (!VAR_5 && VAR_4->state_transition)
   {
      VAR_4->state = VAR_3[VAR_4->state_transition].request;
      VAR_4->state_transition = 0;
      VAR_5 = VAR_0;
   }
   FUNC_1(VAR_4);

   if (VAR_5 == VAR_0)
   {
      FUNC_2(VAR_4, VAR_2,
         VAR_1, VAR_4->state, ((void*)0));
      VAR_5 = 0;
   }



   if (!VAR_5)
      FUNC_3(VAR_4);
}
