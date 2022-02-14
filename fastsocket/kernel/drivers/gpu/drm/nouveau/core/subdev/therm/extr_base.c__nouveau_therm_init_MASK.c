
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* program_alarms ) (struct nouveau_therm*) ;} ;
struct nouveau_therm_priv {scalar_t__ suspend; TYPE_1__ sensor; int mode; } ;
struct nouveau_therm {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_therm*,int ) ;
 int FUNC_2 (struct nouveau_therm*) ;

int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nouveau_therm *VAR_1 = (void *)VAR_0;
 struct nouveau_therm_priv *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->base);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->suspend >= 0)
  FUNC_1(VAR_1, VAR_2->mode);
 VAR_2->sensor.program_alarms(VAR_1);
 return 0;
}
