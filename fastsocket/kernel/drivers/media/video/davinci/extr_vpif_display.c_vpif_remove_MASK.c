
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct channel_obj {int * video_dev; } ;
struct TYPE_2__ {struct channel_obj** dev; int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct channel_obj *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1.v4l2_dev);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  VAR_3 = VAR_1.dev[VAR_4];

  FUNC_1(VAR_3->video_dev);

  VAR_3->video_dev = ((void*)0);
 }

 return 0;
}
