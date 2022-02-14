
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ready; int fd; } ;
typedef TYPE_1__ video4linux_t ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
   video4linux_t *VAR_3 = (video4linux_t*)VAR_2;
   enum v4l2_buf_type VAR_4 = VAR_0;

   if (FUNC_1(VAR_3->fd, VAR_1, &VAR_4) == -1)
      FUNC_0("[V4L2]: Error - VIDIOC_STREAMOFF.\n");

   VAR_3->ready = 0;
}
