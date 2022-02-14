
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_rect {int height; int width; int top; int left; } ;


 int FUNC_0 (char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct video_device *VAR_0, char *VAR_1,
       struct v4l2_rect *VAR_2)
{
 FUNC_0("%sRect start at %dx%d, size=%dx%d\n", VAR_1, VAR_2->left, VAR_2->top,
      VAR_2->width, VAR_2->height);
}
