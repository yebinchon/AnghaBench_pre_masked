
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* read_devdata ) (int ) ;int charge_acin_high; int charge_acin_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_3, VAR_4, VAR_5[5];

 for (VAR_4=0; VAR_4<5; VAR_4++) {
  VAR_5[VAR_4] = VAR_2.machinfo->read_devdata(VAR_0);
  FUNC_3(VAR_1);
 }

 VAR_3 = FUNC_2(VAR_5);
 FUNC_0(VAR_2.dev, "AC Voltage: %d\n",VAR_3);

 if ((VAR_3 > VAR_2.machinfo->charge_acin_high) || (VAR_3 < VAR_2.machinfo->charge_acin_low)) {
  FUNC_1(VAR_2.dev, "Error: AC check failed.\n");
  return -1;
 }

 return 0;
}
