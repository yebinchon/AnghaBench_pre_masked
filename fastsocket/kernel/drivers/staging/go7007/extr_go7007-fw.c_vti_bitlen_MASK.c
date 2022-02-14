
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {unsigned int sensor_framerate; unsigned int fps_scale; } ;



__attribute__((used)) static int FUNC_0(struct go7007 *VAR_0)
{
 unsigned int VAR_1, VAR_2 = VAR_0->sensor_framerate / VAR_0->fps_scale;

 for (VAR_1 = 31; (VAR_2 & ((1 << VAR_1) - 1)) == VAR_2; --VAR_1);
 return VAR_1 + 1;
}
