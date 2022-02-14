
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; int * format; } ;
struct TYPE_7__ {TYPE_2__* in; TYPE_2__* out; int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_ES_FORMAT_T ;
typedef TYPE_1__ MMAL_CONNECTION_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_CONNECTION_T *VAR_1, MMAL_ES_FORMAT_T *VAR_2)
{
   MMAL_STATUS_T VAR_3;
   FUNC_1("%p, %s", VAR_1, VAR_1->name);

   VAR_3 = FUNC_2(VAR_1);
   if (VAR_3 != VAR_0)
   {
      FUNC_0("connection couldn't be disabled");
      return VAR_3;
   }


   VAR_3 = FUNC_4(VAR_1->out->format, VAR_2);
   if (VAR_3 == VAR_0)
      VAR_3 = FUNC_5(VAR_1->out);
   if (VAR_3 != VAR_0)
   {
      FUNC_0("commit failed on port %s(%p) (%i)",
                VAR_1->out->name, VAR_1->out, VAR_3);
      return VAR_3;
   }


   VAR_3 = FUNC_4(VAR_1->in->format, VAR_1->out->format);
   if (VAR_3 == VAR_0)
      VAR_3 = FUNC_5(VAR_1->in);
   if (VAR_3 != VAR_0)
   {
      FUNC_0("commit failed on port %s(%p) (%i)",
                VAR_1->in->name, VAR_1->in, VAR_3);
      return VAR_3;
   }


   VAR_3 = FUNC_3(VAR_1);
   if (VAR_3)
   {
      FUNC_0("connection couldn't be enabled");
      return VAR_3;
   }

   return VAR_0;
}
