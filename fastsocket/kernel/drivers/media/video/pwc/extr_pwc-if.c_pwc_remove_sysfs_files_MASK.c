
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dev; } ;
struct pwc_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct pwc_device* FUNC_1 (struct video_device*) ;

__attribute__((used)) static void FUNC_2(struct video_device *VAR_3)
{
 struct pwc_device *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->features & VAR_0)
  FUNC_0(&VAR_3->dev, &VAR_2);
 FUNC_0(&VAR_3->dev, &VAR_1);
}
