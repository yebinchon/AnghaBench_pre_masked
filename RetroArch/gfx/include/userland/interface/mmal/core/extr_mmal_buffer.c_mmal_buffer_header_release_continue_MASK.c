
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int (* pf_release ) (TYPE_2__*) ;scalar_t__ reference; } ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(MMAL_BUFFER_HEADER_T *VAR_0)
{
   FUNC_1(VAR_0);
   if (VAR_0->priv->reference)
      FUNC_0(VAR_0->priv->reference);
   VAR_0->priv->reference = 0;
   VAR_0->priv->pf_release(VAR_0);
}
