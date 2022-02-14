
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp_key_os_version_t ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

cp_key_os_version_t
FUNC_2(void)
{
 static cp_key_os_version_t VAR_1;

 if (VAR_1)
  return VAR_1;

 if (!VAR_0[0])
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  FUNC_1("cp_os_version: unable to parse osversion `%s'\n", VAR_0);
  VAR_1 = 1;
 }

 return VAR_1;
}
