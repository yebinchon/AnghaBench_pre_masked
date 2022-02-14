
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ name_size; int name; } ;
struct TYPE_10__ {TYPE_2__* format; scalar_t__ index; int type; TYPE_1__* component; TYPE_3__* priv; } ;
struct TYPE_9__ {TYPE_5__* core; } ;
struct TYPE_8__ {scalar_t__ encoding; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_PORT_PRIVATE_CORE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ,int,char,char*) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_1)
{
   MMAL_PORT_PRIVATE_CORE_T* VAR_2 = VAR_1->priv->core;

   FUNC_1(VAR_2->name, VAR_2->name_size - 1, VAR_0,
            VAR_1->component->name, FUNC_0(VAR_1->type), (int)VAR_1->index,
            VAR_1->format && VAR_1->format->encoding ? '(' : '\0',
            VAR_1->format && VAR_1->format->encoding ? (char *)&VAR_1->format->encoding : "");
}
