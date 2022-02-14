
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bright_16levels; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 > ((VAR_5.bright_16levels)? 15 : 7) ||
     VAR_6 < 0)
  return -VAR_0;

 FUNC_4(VAR_2,
   "set backlight level to %d\n", VAR_6);

 VAR_7 = FUNC_0(&VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_3) {
 case 130:
 case 129:
  VAR_7 = FUNC_2(VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_6);
  break;
 default:
  VAR_7 = -VAR_1;
 }

 FUNC_1(&VAR_4);
 return VAR_7;
}
