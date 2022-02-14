
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ length; scalar_t__ offset; int data; scalar_t__ cmd; } ;
struct TYPE_18__ {TYPE_2__* priv; int name; scalar_t__ index; scalar_t__ type; TYPE_3__* component; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {TYPE_1__* core; } ;
struct TYPE_15__ {int (* buffer_header_callback ) (TYPE_4__*,TYPE_5__*) ;} ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int,int,TYPE_4__*,TYPE_5__*,int,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (int) ;

void FUNC_7(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{







   if (!FUNC_6(FUNC_0(VAR_2) >= 0))
      FUNC_2("%s: buffer headers in transit < 0 (%d)", VAR_2->name, (int)FUNC_0(VAR_2));

   if (VAR_0)
   {
      FUNC_4(VAR_2, VAR_1);
   }

   VAR_2->priv->core->buffer_header_callback(VAR_2, VAR_3);

   FUNC_1(VAR_2);
}
