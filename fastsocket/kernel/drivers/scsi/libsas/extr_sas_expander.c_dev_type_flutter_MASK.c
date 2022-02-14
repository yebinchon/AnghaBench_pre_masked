
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sas_dev_type { ____Placeholder_sas_dev_type } sas_dev_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(enum sas_dev_type VAR_2, enum sas_dev_type VAR_3)
{
 if (VAR_3 == VAR_2)
  return 1;




 if ((VAR_3 == VAR_1 && VAR_2 == VAR_0) ||
     (VAR_3 == VAR_0 && VAR_2 == VAR_1))
  return 1;

 return 0;
}
