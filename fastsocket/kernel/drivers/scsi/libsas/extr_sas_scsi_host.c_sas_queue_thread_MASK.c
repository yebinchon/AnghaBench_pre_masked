
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct sas_ha_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct sas_ha_struct *VAR_2 = VAR_1;

 while (1) {
  FUNC_3(VAR_0);
  FUNC_2();
  FUNC_1(VAR_2);
  if (FUNC_0())
   break;
 }

 return 0;
}
