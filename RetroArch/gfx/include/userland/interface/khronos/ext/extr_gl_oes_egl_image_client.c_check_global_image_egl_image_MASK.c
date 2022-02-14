
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int global_image_egl_images; scalar_t__ inited; } ;
struct TYPE_8__ {TYPE_1__* context; } ;
struct TYPE_9__ {TYPE_2__ opengl; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLeglImageOES ;
typedef TYPE_3__ CLIENT_THREAD_STATE_T ;
typedef TYPE_4__ CLIENT_PROCESS_STATE_T ;


 TYPE_4__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(GLuint VAR_5[2],
   GLeglImageOES VAR_6, CLIENT_THREAD_STATE_T *VAR_7,
   bool VAR_8)
{
   CLIENT_PROCESS_STATE_T *VAR_9 = FUNC_0();
   uint64_t VAR_10;
   uint32_t VAR_11, VAR_12, VAR_13;

   FUNC_1();
   VAR_10 = VAR_9->inited ? FUNC_3(&VAR_9->global_image_egl_images, (uint32_t)(uintptr_t)VAR_6) : 0;
   FUNC_2();
   if (!VAR_10) {
      return 0;
   }
   VAR_5[0] = (GLuint)VAR_10;
   VAR_5[1] = (GLuint)(VAR_10 >> 32);

   FUNC_4(VAR_5[0], VAR_5[1], &VAR_11, &VAR_12, &VAR_13);

   if (!(VAR_11 & ((VAR_7->opengl.context->type == VAR_4) ?
      (VAR_8 ? VAR_3 : VAR_1) :
      (VAR_8 ? VAR_2 : VAR_0))) ||
      (VAR_12 == 0) || (VAR_13 == 0)) {
      return 0;
   }



   return 1;
}
