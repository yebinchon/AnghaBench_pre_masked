
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_2__* priv; scalar_t__ index; scalar_t__ type; TYPE_1__* component; } ;
struct TYPE_11__ {int (* pf_payload_free ) (TYPE_3__*,int *) ;int pf_payload_alloc; } ;
struct TYPE_10__ {int name; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MEM_HANDLE_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,int,int,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(MMAL_PORT_T *VAR_0, uint8_t *VAR_1)
{
   if (!VAR_0 || !VAR_0->priv)
      return;

   FUNC_1("%s(%i:%i) port %p, payload %p", VAR_0->component->name,
             (int)VAR_0->type, (int)VAR_0->index, VAR_0, VAR_1);

   if (!VAR_0->priv->pf_payload_alloc)
   {




      FUNC_6(VAR_1);

      FUNC_4(VAR_0);
      return;
   }

   FUNC_0(VAR_0);
   VAR_0->priv->pf_payload_free(VAR_0, VAR_1);
   FUNC_2(VAR_0);
   FUNC_4(VAR_0);
}
