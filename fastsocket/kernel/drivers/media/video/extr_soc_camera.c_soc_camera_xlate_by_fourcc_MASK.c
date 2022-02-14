
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_format_xlate {TYPE_1__* host_fmt; } ;
struct soc_camera_device {unsigned int num_user_formats; struct soc_camera_format_xlate const* user_formats; } ;
struct TYPE_2__ {unsigned int fourcc; } ;



const struct soc_camera_format_xlate *FUNC_0(
 struct soc_camera_device *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_user_formats; VAR_2++)
  if (VAR_0->user_formats[VAR_2].host_fmt->fourcc == VAR_1)
   return VAR_0->user_formats + VAR_2;
 return ((void*)0);
}
