
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_link_width_active; int ipath_link_speed_active; int ipath_link_width_enabled; int ipath_link_speed_enabled; } ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct ipath_devdata *VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 131:
  VAR_3 = VAR_1->ipath_link_width_active;
  break;
 case 129:
  VAR_3 = VAR_1->ipath_link_speed_active;
  break;
 case 130:
  VAR_3 = VAR_1->ipath_link_width_enabled;
  break;
 case 128:
  VAR_3 = VAR_1->ipath_link_speed_enabled;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
