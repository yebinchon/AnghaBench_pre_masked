
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int refcount; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ MMAL_CONNECTION_T ;
typedef TYPE_2__ MMAL_CONNECTION_PRIVATE_T ;


 int FUNC_0 (char*,int ,TYPE_1__*,int ) ;

void FUNC_1(MMAL_CONNECTION_T *VAR_0)
{
   MMAL_CONNECTION_PRIVATE_T *VAR_1 = (MMAL_CONNECTION_PRIVATE_T *)VAR_0;
   FUNC_0("connection %s(%p), refcount %i", VAR_0->name, VAR_0,
             VAR_1->refcount);
   VAR_1->refcount++;
}
