
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {scalar_t__ usb_err; } ;
struct sd {size_t* sensor_reg_cache; int bridge; TYPE_1__ gspca_dev; } ;
 int FUNC_0 (size_t*,int,int) ;
 int FUNC_1 (struct sd*,size_t,size_t) ;
 int FUNC_2 (struct sd*,size_t,size_t) ;
 int FUNC_3 (struct sd*,size_t,size_t) ;
 int FUNC_4 (struct sd*,size_t,size_t) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_0, u8 VAR_1, u8 VAR_2)
{
 if (VAR_0->sensor_reg_cache[VAR_1] == VAR_2)
  return;

 switch (VAR_0->bridge) {
 case 134:
 case 133:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 132:
 case 131:
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  break;
 }

 if (VAR_0->gspca_dev.usb_err >= 0) {

  if (VAR_1 == 0x12 && (VAR_2 & 0x80))
   FUNC_0(VAR_0->sensor_reg_cache, -1,
    sizeof(VAR_0->sensor_reg_cache));
  else
   VAR_0->sensor_reg_cache[VAR_1] = VAR_2;
 }
}
