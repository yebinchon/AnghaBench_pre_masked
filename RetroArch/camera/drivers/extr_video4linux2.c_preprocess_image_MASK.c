
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scaler_ctx {int dummy; } ;
struct TYPE_4__ {size_t n_buffers; int fd; TYPE_1__* buffers; int buffer_output; struct scaler_ctx scaler; } ;
typedef TYPE_2__ video4linux_t ;
typedef int uint8_t ;
struct v4l2_buffer {size_t index; int memory; int type; int member_0; } ;
struct TYPE_3__ {scalar_t__ start; } ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scaler_ctx*,int ,int const*) ;
 int FUNC_3 (int ,int ,struct v4l2_buffer*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_5)
{
   struct scaler_ctx *VAR_6 = ((void*)0);
   video4linux_t *VAR_7 = (video4linux_t*)VAR_5;
   struct v4l2_buffer VAR_8 = {0};

   VAR_8.type = VAR_0;
   VAR_8.memory = VAR_1;

   if (FUNC_3(VAR_7->fd, VAR_2, &VAR_8) == -1)
   {
      switch (VAR_4)
      {
         case 128:
            break;
         default:
            FUNC_0("[V4L2]: VIDIOC_DQBUF.\n");
            break;
      }

      return 0;
   }

   FUNC_1(VAR_8.index < VAR_7->n_buffers);

   VAR_6 = &VAR_7->scaler;

   FUNC_2(VAR_6, VAR_7->buffer_output, (const uint8_t*)VAR_7->buffers[VAR_8.index].start);

   if (FUNC_3(VAR_7->fd, VAR_3, &VAR_8) == -1)
      FUNC_0("[V4L2]: VIDIOC_QBUF\n");

   return 1;
}
