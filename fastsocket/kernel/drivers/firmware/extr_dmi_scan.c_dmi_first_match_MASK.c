
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {int dummy; } ;


 int FUNC_0 (struct dmi_system_id const*) ;
 scalar_t__ FUNC_1 (struct dmi_system_id const*) ;

const struct dmi_system_id *FUNC_2(const struct dmi_system_id *VAR_0)
{
 const struct dmi_system_id *VAR_1;

 for (VAR_1 = VAR_0; !FUNC_0(VAR_1); VAR_1++)
  if (FUNC_1(VAR_1))
   return VAR_1;

 return ((void*)0);
}
