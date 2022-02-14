
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {struct config_group** default_groups; } ;


 int FUNC_0 (struct config_group*,struct config_group*) ;
 int FUNC_1 (struct config_group*) ;

__attribute__((used)) static int FUNC_2(struct config_group *VAR_0)
{
 struct config_group *VAR_1;
 int VAR_2 = 0;
 int VAR_3;

 if (VAR_0->default_groups) {
  for (VAR_3 = 0; VAR_0->default_groups[VAR_3]; VAR_3++) {
   VAR_1 = VAR_0->default_groups[VAR_3];

   VAR_2 = FUNC_0(VAR_0, VAR_1);
   if (VAR_2) {
    FUNC_1(VAR_0);
    break;
   }
  }
 }

 return VAR_2;
}
