
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_pportdata {int link_width_active; int link_speed_active; int link_width_enabled; int link_speed_enabled; int vls_operational; TYPE_2__* dd; } ;
struct TYPE_4__ {TYPE_1__* cspec; } ;
struct TYPE_3__ {int ibcctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct qib_pportdata *VAR_7, int VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 137:
  VAR_9 = VAR_7->link_width_active;
  break;

 case 131:
  VAR_9 = VAR_7->link_speed_active;
  break;

 case 136:
  VAR_9 = VAR_7->link_width_enabled;
  break;

 case 130:
  VAR_9 = VAR_7->link_speed_enabled;
  break;

 case 135:
  VAR_9 = VAR_7->vls_operational;
  break;

 case 129:
  VAR_9 = 0;
  break;

 case 128:
  VAR_9 = 0;
  break;

 case 134:
  VAR_9 = FUNC_0(VAR_7->dd->cspec->ibcctrl, VAR_1,
    VAR_5);
  break;

 case 133:
  VAR_9 = FUNC_0(VAR_7->dd->cspec->ibcctrl, VAR_1,
    VAR_6);
  break;

 case 138:

  VAR_9 = (VAR_7->dd->cspec->ibcctrl &
         FUNC_1(VAR_1, VAR_4)) ?
   VAR_3 : VAR_2;
  break;

 case 139:
  VAR_9 = 0;
  break;

 case 132:
  VAR_9 = 250;
  break;

 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
