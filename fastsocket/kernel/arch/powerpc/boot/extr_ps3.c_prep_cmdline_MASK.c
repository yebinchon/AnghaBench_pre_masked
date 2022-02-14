
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (void*,char*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (void*,char*,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 if (VAR_1[0] == '\0')
  FUNC_0(VAR_2, "bootargs", VAR_1, VAR_0-1);
 else
  FUNC_2(VAR_2, "bootargs", VAR_1);

 FUNC_1("cmdline: '%s'\n", VAR_1);
}
