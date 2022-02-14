
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int therm_poll_alarm; } ;
struct nouveau_therm_priv {int bios_sensor; TYPE_1__ sensor; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct nouveau_bios* FUNC_1 (struct nouveau_therm*) ;
 int FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*) ;
 int FUNC_4 (struct nouveau_therm*,char*) ;
 scalar_t__ FUNC_5 (struct nouveau_bios*,int ,int *) ;

int
FUNC_6(struct nouveau_therm *VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_2;
 struct nouveau_bios *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->sensor.therm_poll_alarm, VAR_1);

 FUNC_3(VAR_2);
 if (FUNC_5(VAR_4, VAR_0,
          &VAR_3->bios_sensor))
  FUNC_4(VAR_2, "nvbios_therm_sensor_parse failed\n");
 FUNC_2(VAR_2);

 return 0;
}
