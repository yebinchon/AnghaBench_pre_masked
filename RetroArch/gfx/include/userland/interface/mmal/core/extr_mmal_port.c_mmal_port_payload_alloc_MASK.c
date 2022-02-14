
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {TYPE_1__* priv; int name; scalar_t__ index; scalar_t__ type; TYPE_2__* component; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int * (* pf_payload_alloc ) (TYPE_3__*,scalar_t__) ;} ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,int,int,TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (TYPE_3__*,scalar_t__) ;
 int * FUNC_6 (scalar_t__,char*) ;

uint8_t *FUNC_7(MMAL_PORT_T *VAR_1, uint32_t VAR_2)
{
   uint8_t *VAR_3;

   if (!VAR_1 || !VAR_1->priv)
      return ((void*)0);

   FUNC_1("%s(%i:%i) port %p, size %i", VAR_1->component->name,
             (int)VAR_1->type, (int)VAR_1->index, VAR_1, (int)VAR_2);

   if (!VAR_2)
      return ((void*)0);



   if (!VAR_1->priv->pf_payload_alloc)
   {




      VAR_3 = FUNC_6(VAR_2, "mmal payload");

      goto end;
   }

   FUNC_0(VAR_1);
   VAR_3 = VAR_1->priv->pf_payload_alloc(VAR_1, VAR_2);
   FUNC_2(VAR_1);

 end:


   if (VAR_3)
      FUNC_4(VAR_1);
   return VAR_3;
}
