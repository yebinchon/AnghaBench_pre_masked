
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adm1031_data {int conf1; scalar_t__* pwm; int * auto_temp; int * temp; int chip_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct adm1031_data *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->conf1 & VAR_0) {
  switch (VAR_2->conf1 & 0x60) {
  case 0x00:
   VAR_4 = VAR_2->temp[VAR_3+1] >=
         FUNC_0(VAR_2->auto_temp[VAR_3+1]);
   break;
  case 0x20:
   VAR_4 =
       VAR_2->temp[1] >=
       FUNC_0(VAR_2->auto_temp[1]);
   break;
  case 0x40:
   VAR_4 =
       VAR_2->temp[2] >=
       FUNC_0(VAR_2->auto_temp[2]);
   break;
  case 0x60:
   VAR_4 =
       VAR_2->temp[0] >=
       FUNC_0(VAR_2->auto_temp[0])
       || VAR_2->temp[1] >=
       FUNC_0(VAR_2->auto_temp[1])
       || (VAR_2->chip_type == VAR_1
    && VAR_2->temp[2] >=
    FUNC_0(VAR_2->auto_temp[2]));
   break;
  }
 } else {
  VAR_4 = VAR_2->pwm[VAR_3] > 0;
 }
 return VAR_4;
}
