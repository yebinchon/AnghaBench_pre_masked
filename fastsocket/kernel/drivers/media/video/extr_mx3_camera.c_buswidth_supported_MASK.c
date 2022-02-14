
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct mx3_camera_dev {int platform_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct soc_camera_host *VAR_4, int VAR_5)
{
 struct mx3_camera_dev *VAR_6 = VAR_4->priv;

 switch (VAR_5) {
 case 4:
  return !!(VAR_6->platform_flags & VAR_2);
 case 8:
  return !!(VAR_6->platform_flags & VAR_3);
 case 10:
  return !!(VAR_6->platform_flags & VAR_0);
 case 15:
  return !!(VAR_6->platform_flags & VAR_1);
 }
 return 0;
}
