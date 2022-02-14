
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;

int FUNC_4(void)
{
 char *VAR_5;

 VAR_5 = FUNC_1("weaponconfig", "weapons.c");
 VAR_4 = FUNC_2(VAR_5);
 if (!VAR_4)
 {
  VAR_3.Print(VAR_2, "couldn't load the weapon config\n");
  return VAR_0;
 }





 return VAR_1;
}
