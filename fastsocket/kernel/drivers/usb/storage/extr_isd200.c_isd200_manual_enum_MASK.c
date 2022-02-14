
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {int ATAConfig; } ;
struct isd200_info {int DeviceHead; TYPE_1__ ConfigData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*) ;
 int FUNC_3 (struct us_data*,int,int) ;
 int FUNC_4 (struct us_data*) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_4)
{
 struct isd200_info *VAR_5 = (struct isd200_info *)VAR_4->extra;
 int VAR_6 = VAR_3;

 FUNC_0("Entering isd200_manual_enum\n");

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 == VAR_3) {
  int VAR_7;

  VAR_6 = FUNC_3( VAR_4, VAR_2, 0);
  if (VAR_6 == VAR_3)
   VAR_6 = FUNC_3( VAR_4, VAR_1, 0);

  if (VAR_6 == VAR_3) {
   VAR_6 = FUNC_2(VAR_4);
   if (VAR_6 == VAR_3)

    VAR_6 = FUNC_3( VAR_4, VAR_2, 1);
  }

  VAR_7 = (VAR_5->DeviceHead & VAR_1) ? 1 : 0;
  if (!(VAR_5->ConfigData.ATAConfig & VAR_0)) {
   FUNC_0("   Setting Master/Slave selection to %d\n", VAR_7);
   VAR_5->ConfigData.ATAConfig &= 0x3f;
   VAR_5->ConfigData.ATAConfig |= (VAR_7<<6);
   VAR_6 = FUNC_4(VAR_4);
  }
 }

 FUNC_0("Leaving isd200_manual_enum %08X\n", VAR_6);
 return(VAR_6);
}
