
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ refcount; } ;
struct TYPE_6__ {int name; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_CONNECTION_T ;
typedef TYPE_2__ MMAL_CONNECTION_PRIVATE_T ;


 int FUNC_0 (char*,int ,TYPE_1__*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_2(MMAL_CONNECTION_T *VAR_1)
{
   MMAL_CONNECTION_PRIVATE_T *VAR_2 = (MMAL_CONNECTION_PRIVATE_T *)VAR_1;
   FUNC_0("connection %s(%p), refcount %i", VAR_1->name, VAR_1,
             VAR_2->refcount);

   if (--VAR_2->refcount)
      return VAR_0;

   FUNC_0("destroying connection %s(%p)", VAR_1->name, VAR_1);
   return FUNC_1(VAR_1);
}
