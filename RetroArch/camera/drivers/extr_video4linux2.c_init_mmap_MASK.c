
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int n_buffers; struct buffer* buffers; int fd; int dev_name; } ;
typedef TYPE_2__ video4linux_t ;
struct TYPE_3__ {int offset; } ;
struct v4l2_requestbuffers {int count; int index; TYPE_1__ m; int length; void* memory; void* type; int member_0; } ;
struct v4l2_buffer {int count; int index; TYPE_1__ m; int length; void* memory; void* type; int member_0; } ;
struct buffer {int start; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,int ,int,int ,int ,int ) ;
 int FUNC_3 (int ,int ,struct v4l2_requestbuffers*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_10)
{
   struct v4l2_requestbuffers VAR_11 = {0};
   video4linux_t *VAR_12 = (video4linux_t*)VAR_10;

   VAR_11.count = 4;
   VAR_11.type = VAR_5;
   VAR_11.memory = VAR_6;

   if (FUNC_3(VAR_12->fd, VAR_8, &VAR_11) == -1)
   {
      if (VAR_9 == VAR_0)
         FUNC_0("[V4L2]: %s does not support memory mapping.\n", VAR_12->dev_name);
      else
         FUNC_0("[V4L2]: xioctl of VIDIOC_REQBUFS failed.\n");
      return 0;
   }

   if (VAR_11.count < 2)
   {
      FUNC_0("[V4L2]: Insufficient buffer memory on %s.\n", VAR_12->dev_name);
      return 0;
   }

   VAR_12->buffers = (struct buffer*)FUNC_1(VAR_11.count, sizeof(*VAR_12->buffers));

   if (!VAR_12->buffers)
   {
      FUNC_0("[V4L2]: Out of memory allocating V4L2 buffers.\n");
      return 0;
   }

   for (VAR_12->n_buffers = 0; VAR_12->n_buffers < VAR_11.count; VAR_12->n_buffers++)
   {
      struct v4l2_buffer VAR_13 = {0};

      VAR_13.type = VAR_5;
      VAR_13.memory = VAR_6;
      VAR_13.index = VAR_12->n_buffers;

      if (FUNC_3(VAR_12->fd, VAR_7, &VAR_13) == -1)
      {
         FUNC_0("[V4L2]: Error - xioctl VIDIOC_QUERYBUF.\n");
         return 0;
      }

      VAR_12->buffers[VAR_12->n_buffers].length = VAR_13.length;
      VAR_12->buffers[VAR_12->n_buffers].start = FUNC_2(((void*)0),
            VAR_13.length, VAR_3 | VAR_4,
            VAR_2,
            VAR_12->fd, VAR_13.m.offset);

      if (VAR_12->buffers[VAR_12->n_buffers].start == VAR_1)
      {
         FUNC_0("[V4L2]: Error - mmap.\n");
         return 0;
      }
   }

   return 1;
}
