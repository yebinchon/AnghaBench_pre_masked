
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9300_eeprom {int templateVersion; } ;


 int VAR_0 ;
 struct ar9300_eeprom const** VAR_1 ;

__attribute__((used)) static const struct ar9300_eeprom *FUNC_0(int VAR_2)
{

 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_1) / sizeof(VAR_1[0])); VAR_3++)
  if (VAR_1[VAR_3]->templateVersion == VAR_2)
   return VAR_1[VAR_3];
 return ((void*)0);

}
