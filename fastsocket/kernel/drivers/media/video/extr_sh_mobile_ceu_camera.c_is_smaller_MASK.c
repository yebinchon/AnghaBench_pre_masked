
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {scalar_t__ width; scalar_t__ height; } ;



__attribute__((used)) static bool FUNC_0(struct v4l2_rect *VAR_0, struct v4l2_rect *VAR_1)
{
 return VAR_0->width < VAR_1->width || VAR_0->height < VAR_1->height;
}
