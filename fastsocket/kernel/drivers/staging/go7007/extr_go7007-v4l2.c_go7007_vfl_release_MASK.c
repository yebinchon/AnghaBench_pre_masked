
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct go7007 {scalar_t__ ref_count; } ;


 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct video_device*) ;
 struct go7007* FUNC_2 (struct video_device*) ;

__attribute__((used)) static void FUNC_3(struct video_device *VAR_0)
{
 struct go7007 *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);
 if (--VAR_1->ref_count == 0)
  FUNC_0(VAR_1);
}
