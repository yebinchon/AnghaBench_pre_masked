
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int num_devices; int fd; TYPE_4__** devices; } ;
typedef TYPE_3__ udev_input_t ;
struct TYPE_8__ {int x_min; int x_max; int y_min; int y_max; } ;
struct TYPE_11__ {int fd; int type; TYPE_1__ mouse; int devnode; int handle_cb; scalar_t__ dev; } ;
typedef TYPE_4__ udev_input_device_t ;
struct stat {scalar_t__ st_dev; } ;
struct TYPE_9__ {TYPE_4__* ptr; } ;
struct kevent {TYPE_2__ data; int events; } ;
struct input_absinfo {int minimum; int maximum; } ;
struct epoll_event {int dummy; } ;
typedef enum udev_input_dev_type { ____Placeholder_udev_input_dev_type } udev_input_dev_type ;
typedef int device_handle_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct kevent*,int,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,int,struct kevent*) ;
 int VAR_11 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int,int ,struct input_absinfo*) ;
 int FUNC_8 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (TYPE_4__**,int) ;
 scalar_t__ FUNC_11 (char const*,struct stat*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char const*,int) ;

__attribute__((used)) static bool FUNC_14(udev_input_t *VAR_12,
      enum udev_input_dev_type VAR_13, const char *VAR_14, device_handle_cb VAR_15)
{
   int VAR_16;
   struct stat VAR_17;





   struct input_absinfo VAR_18;
   udev_input_device_t **VAR_19;
   udev_input_device_t *VAR_20 = ((void*)0);

   VAR_17.st_dev = 0;

   if (FUNC_11(VAR_14, &VAR_17) < 0)
      return 0;

   VAR_16 = FUNC_9(VAR_14, VAR_8 | VAR_7);
   if (VAR_16 < 0)
      return 0;

   VAR_20 = (udev_input_device_t*)FUNC_3(1, sizeof(*VAR_20));
   if (!VAR_20)
      goto error;

   VAR_20->fd = VAR_16;
   VAR_20->dev = VAR_17.st_dev;
   VAR_20->handle_cb = VAR_15;
   VAR_20->type = VAR_13;

   FUNC_13(VAR_20->devnode, VAR_14, sizeof(VAR_20->devnode));


   if (VAR_13 == VAR_9 || VAR_13 == VAR_10 )
   {
      if (FUNC_7(VAR_16, FUNC_0(VAR_0), &VAR_18) >= 0)
      {
         if (VAR_18.minimum >= VAR_18.maximum )
        {
            VAR_20->mouse.x_min = -1;
            VAR_20->mouse.x_max = -1;
         }
         else
         {
            VAR_20->mouse.x_min = VAR_18.minimum;
            VAR_20->mouse.x_max = VAR_18.maximum;
         }
      }

      if (FUNC_7(VAR_16, FUNC_0(VAR_1), &VAR_18) >= 0)
      {
         if (VAR_18.minimum >= VAR_18.maximum )
         {
            VAR_20->mouse.y_min = -1;
            VAR_20->mouse.y_max = -1;
         }
      else
         {
           VAR_20->mouse.y_min = VAR_18.minimum;
           VAR_20->mouse.y_max = VAR_18.maximum;
         }
      }
   }

   VAR_19 = ( udev_input_device_t**)FUNC_10(VAR_12->devices,
         (VAR_12->num_devices + 1) * sizeof(*VAR_12->devices));

   if (!VAR_19)
      goto error;

   VAR_19[VAR_12->num_devices++] = VAR_20;
   VAR_12->devices = VAR_19;
   return 1;

error:
   FUNC_4(VAR_16);
   if (VAR_20)
      FUNC_6(VAR_20);

   return 0;
}
