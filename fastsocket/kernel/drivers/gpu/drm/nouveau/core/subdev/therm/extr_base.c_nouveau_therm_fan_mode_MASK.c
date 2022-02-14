
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {int mode; } ;
struct nouveau_therm {scalar_t__ (* temp_get ) (struct nouveau_therm*) ;} ;
struct nouveau_device {scalar_t__ card_type; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nouveau_therm*,int) ;
 struct nouveau_device* FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*,char*,char const*) ;
 scalar_t__ FUNC_4 (struct nouveau_therm*) ;

int
FUNC_5(struct nouveau_therm *VAR_3, int VAR_4)
{
 struct nouveau_therm_priv *VAR_5 = (void *)VAR_3;
 struct nouveau_device *VAR_6 = FUNC_2(VAR_3);
 static const char *VAR_7[] = {
  "disabled",
  "manual",
  "automatic"
 };


 if ((VAR_4 >= FUNC_0(VAR_7)) ||
     (VAR_4 != VAR_1 && VAR_6->card_type >= VAR_2))
  return -VAR_0;



 if (VAR_5->mode == 2 && VAR_3->temp_get(VAR_3) < 0)
  return -VAR_0;

 if (VAR_5->mode == VAR_4)
  return 0;

 FUNC_3(VAR_3, "fan management: %s\n", VAR_7[VAR_4]);
 FUNC_1(VAR_3, VAR_4);
 return 0;
}
