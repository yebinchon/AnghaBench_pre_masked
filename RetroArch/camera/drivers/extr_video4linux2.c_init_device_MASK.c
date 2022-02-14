
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; int pitch; int fd; int dev_name; } ;
typedef TYPE_3__ video4linux_t ;
struct TYPE_5__ {int width; scalar_t__ pixelformat; scalar_t__ field; int bytesperline; int height; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {int capabilities; TYPE_2__ fmt; void* type; int defrect; int c; int member_0; } ;
struct v4l2_cropcap {int capabilities; TYPE_2__ fmt; void* type; int defrect; int c; int member_0; } ;
struct v4l2_crop {int capabilities; TYPE_2__ fmt; void* type; int defrect; int c; int member_0; } ;
struct v4l2_capability {int capabilities; TYPE_2__ fmt; void* type; int defrect; int c; int member_0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,struct v4l2_format*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_12)
{
   struct v4l2_crop VAR_13;
   struct v4l2_capability VAR_14;
   struct v4l2_format VAR_15 = {0};
   struct v4l2_cropcap VAR_16 = {0};
   video4linux_t *VAR_17 = (video4linux_t*)VAR_12;

   if (FUNC_4(VAR_17->fd, VAR_8, &VAR_14) < 0)
   {
      if (VAR_11 == VAR_0)
         FUNC_1("[V4L2]: %s is no V4L2 device.\n", VAR_17->dev_name);
      else
         FUNC_1("[V4L2]: Error - VIDIOC_QUERYCAP.\n");
      return 0;
   }

   if (!(VAR_14.capabilities & VAR_3))
   {
      FUNC_1("[V4L2]: %s is no video capture device.\n", VAR_17->dev_name);
      return 0;
   }

   if (!(VAR_14.capabilities & VAR_2))
   {
      FUNC_1("[V4L2]: %s does not support streaming I/O (V4L2_CAP_STREAMING).\n",
            VAR_17->dev_name);
      return 0;
   }

   VAR_16.type = VAR_1;

   if (FUNC_4(VAR_17->fd, VAR_7, &VAR_16) == 0)
   {
      VAR_13.type = VAR_1;
      VAR_13.c = VAR_16.defrect;

      FUNC_4(VAR_17->fd, VAR_9, &VAR_13);
   }

   VAR_15.type = VAR_1;
   VAR_15.fmt.pix.width = VAR_17->width;
   VAR_15.fmt.pix.height = VAR_17->height;
   VAR_15.fmt.pix.pixelformat = VAR_6;
   VAR_15.fmt.pix.field = VAR_5;

   if (FUNC_4(VAR_17->fd, VAR_10, &VAR_15) < 0)
   {
      FUNC_1("[V4L2]: Error - VIDIOC_S_FMT\n");
      return 0;
   }


   VAR_17->width = VAR_15.fmt.pix.width;
   VAR_17->height = VAR_15.fmt.pix.height;
   VAR_17->pitch = FUNC_0(VAR_15.fmt.pix.bytesperline, VAR_17->width * 2);





   if (VAR_15.fmt.pix.pixelformat != VAR_6)
   {
      FUNC_1("[V4L2]: The V4L2 device doesn't support YUYV.\n");
      return 0;
   }

   if (VAR_15.fmt.pix.field != VAR_5
         && VAR_15.fmt.pix.field != VAR_4)
   {
      FUNC_1("[V4L2]: The V4L2 device doesn't support progressive nor interlaced video.\n");
      return 0;
   }

   FUNC_2("[V4L2]: device: %u x %u.\n", VAR_17->width, VAR_17->height);

   return FUNC_3(VAR_17);
}
