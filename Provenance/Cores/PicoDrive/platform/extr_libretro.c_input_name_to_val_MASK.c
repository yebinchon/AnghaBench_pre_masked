
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum input_device { ____Placeholder_input_device } input_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum input_device FUNC_2(const char *VAR_3)
{
 if (FUNC_1(VAR_3, "3 button pad") == 0)
  return VAR_1;
 if (FUNC_1(VAR_3, "6 button pad") == 0)
  return VAR_2;
 if (FUNC_1(VAR_3, "None") == 0)
  return VAR_0;

 FUNC_0("invalid picodrive_input: '%s'\n", VAR_3);
 return VAR_1;
}
