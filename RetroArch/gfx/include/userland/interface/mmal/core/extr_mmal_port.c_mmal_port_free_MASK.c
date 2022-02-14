
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* name; scalar_t__ format; TYPE_2__* priv; } ;
struct TYPE_8__ {TYPE_1__* core; } ;
struct TYPE_7__ {scalar_t__ format_ptr_copy; int lock; int send_lock; int transit_lock; int transit_sema; int stats_lock; int connection_lock; } ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (char*,char*,TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(MMAL_PORT_T *VAR_0)
{
   FUNC_0("%s at %p", VAR_0 ? VAR_0->name : "<invalid>", VAR_0);

   if (!VAR_0)
      return;

   FUNC_2(VAR_0->format == VAR_0->priv->core->format_ptr_copy);
   FUNC_1(VAR_0->priv->core->format_ptr_copy);
   FUNC_4(&VAR_0->priv->core->connection_lock);
   FUNC_4(&VAR_0->priv->core->stats_lock);
   FUNC_5(&VAR_0->priv->core->transit_sema);
   FUNC_4(&VAR_0->priv->core->transit_lock);
   FUNC_4(&VAR_0->priv->core->send_lock);
   FUNC_4(&VAR_0->priv->core->lock);
   FUNC_3(VAR_0);
}
