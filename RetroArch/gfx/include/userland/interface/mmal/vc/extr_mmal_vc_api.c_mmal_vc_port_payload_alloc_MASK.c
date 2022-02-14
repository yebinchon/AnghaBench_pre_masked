
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int buf ;
struct TYPE_9__ {scalar_t__ is_zero_copy; int opaque_allocs; } ;
struct TYPE_8__ {int name; TYPE_2__* format; TYPE_1__* priv; } ;
struct TYPE_7__ {int encoding; } ;
struct TYPE_6__ {TYPE_4__* module; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PORT_MODULE_T ;
typedef scalar_t__ MMAL_OPAQUE_IMAGE_HANDLE_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int FUNC_0 (char*,int ,void*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__) ;
 void* FUNC_7 (int,scalar_t__,char*) ;

__attribute__((used)) static uint8_t *FUNC_8(MMAL_PORT_T *VAR_3, uint32_t VAR_4)
{
   MMAL_PORT_MODULE_T *VAR_5 = VAR_3->priv->module;
   MMAL_BOOL_T VAR_6 = VAR_2;
   char VAR_7[5];
   void *VAR_8;
   (void)VAR_7;

   FUNC_2("%s: allocating %d bytes, format %s, is_zero_copy %d",
             VAR_3->name,
             VAR_4,
             FUNC_4(VAR_7, sizeof(VAR_7), VAR_3->format->encoding),
             VAR_5->is_zero_copy);

   if (VAR_3->format->encoding == VAR_0 &&
       VAR_5->is_zero_copy)
   {
      MMAL_OPAQUE_IMAGE_HANDLE_T VAR_9 = FUNC_5(VAR_3->name);
      VAR_6 = VAR_1;
      VAR_8 = (void*)VAR_9;
      if (!VAR_8)
      {
         FUNC_1("%s: failed to allocate %d bytes opaque memory",
                   VAR_3->name, VAR_4);
         return ((void*)0);
      }
      VAR_5->opaque_allocs++;
   }

   else if (VAR_5->is_zero_copy)
   {
      VAR_8 = FUNC_6(VAR_4);
      if (!VAR_8)
      {
         FUNC_1("%s: failed to allocate %d bytes of shared memory",
                   VAR_3->name, VAR_4);
         return ((void*)0);
      }
   }

   else
   {

      VAR_8 = FUNC_7(1, VAR_4, "mmal_vc_port payload");
      if (!VAR_8)
      {
         FUNC_1("could not allocate %i bytes", (int)VAR_4);
         return ((void*)0);
      }
   }




   if (VAR_6 && VAR_3->format->encoding == VAR_0)
      FUNC_3(VAR_8, 0, VAR_4);

   FUNC_0("%s: allocated at %p", VAR_3->name, VAR_8);
   return VAR_8;
}
