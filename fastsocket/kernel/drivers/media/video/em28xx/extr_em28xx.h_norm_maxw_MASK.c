
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_em2800; scalar_t__ max_range_640_480; scalar_t__ is_webcam; } ;
struct em28xx {unsigned int sensor_xres; TYPE_1__ board; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct em28xx *VAR_0)
{
 if (VAR_0->board.is_webcam)
  return VAR_0->sensor_xres;

 if (VAR_0->board.max_range_640_480 || VAR_0->board.is_em2800)
  return 640;

 return 720;
}
