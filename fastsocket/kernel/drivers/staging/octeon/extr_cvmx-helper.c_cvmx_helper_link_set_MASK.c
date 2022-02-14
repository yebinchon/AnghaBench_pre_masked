
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int u64; } ;
typedef TYPE_1__ cvmx_helper_link_info_t ;
struct TYPE_9__ {int u64; } ;
 int FUNC_0 (int,TYPE_1__) ;
 int FUNC_1 (int,TYPE_1__) ;
 int FUNC_2 (int,TYPE_1__) ;
 int FUNC_3 (int,TYPE_1__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 TYPE_2__* VAR_0 ;

int FUNC_8(int VAR_1, cvmx_helper_link_info_t VAR_2)
{
 int VAR_3 = -1;
 int VAR_4 = FUNC_5(VAR_1);
 int VAR_5 = FUNC_4(VAR_1);

 if (VAR_5 >= FUNC_7(VAR_4))
  return -1;

 switch (FUNC_6(VAR_4)) {
 case 137:
 case 133:
  break;
 case 128:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;




 case 131:
 case 136:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;
 case 130:
 case 132:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 case 134:
 case 135:
  break;
 }



 if (VAR_3 == 0)
  VAR_0[VAR_1].u64 = VAR_2.u64;
 return VAR_3;
}
