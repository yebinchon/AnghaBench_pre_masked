
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int is_enabled; scalar_t__ index; scalar_t__ type; TYPE_1__* component; int priv; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 int FUNC_0 (char*,TYPE_2__*,int *) ;
 int FUNC_1 (char*,int ,int,int,TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;

void FUNC_5(MMAL_PORT_T *VAR_0, MMAL_POOL_T *VAR_1)
{
   if (!VAR_0 || !VAR_0->priv || !VAR_1)
      return;

   FUNC_1("%s(%i:%i) port %p, pool %p", VAR_0->component->name,
             (int)VAR_0->type, (int)VAR_0->index, VAR_0, VAR_1);

   if (!FUNC_4(!VAR_0->is_enabled))
   {
      FUNC_0("port %p, pool %p destroyed while port enabled", VAR_0, VAR_1);
      FUNC_3(VAR_0);
   }

   FUNC_2(VAR_1);
}
