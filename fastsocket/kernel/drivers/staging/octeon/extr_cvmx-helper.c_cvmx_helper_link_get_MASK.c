
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int full_duplex; int link_up; int speed; } ;
struct TYPE_9__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;
 TYPE_2__ FUNC_0 (int) ;
 TYPE_2__ FUNC_1 (int) ;
 TYPE_2__ FUNC_2 (int) ;
 TYPE_2__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

cvmx_helper_link_info_t FUNC_8(int VAR_0)
{
 cvmx_helper_link_info_t VAR_1;
 int VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = FUNC_4(VAR_0);



 VAR_1.u64 = 0;

 if (VAR_3 >= FUNC_7(VAR_2))
  return VAR_1;

 switch (FUNC_6(VAR_2)) {
 case 137:
 case 133:

  break;
 case 128:
  VAR_1 = FUNC_3(VAR_0);
  break;
 case 136:
  if (VAR_3 == 0)
   VAR_1 = FUNC_0(VAR_0);
  else {
   VAR_1.s.full_duplex = 1;
   VAR_1.s.link_up = 1;
   VAR_1.s.speed = 1000;
  }
  break;
 case 131:
  VAR_1 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_1 = FUNC_2(VAR_0);
  break;
 case 130:
 case 132:
  VAR_1 = FUNC_1(VAR_0);
  break;
 case 134:
 case 135:

  break;
 }
 return VAR_1;
}
