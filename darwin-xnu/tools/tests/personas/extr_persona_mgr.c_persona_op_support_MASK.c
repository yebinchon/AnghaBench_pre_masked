
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 uid_t VAR_2 = -1;
 int VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3 == 0 || VAR_1 != VAR_0) {
  FUNC_0("Persona subsystem is supported (id=%d)", VAR_2);
  return 0;
 }

 FUNC_0("Persona subsystem is not supported");
 return VAR_0;
}
