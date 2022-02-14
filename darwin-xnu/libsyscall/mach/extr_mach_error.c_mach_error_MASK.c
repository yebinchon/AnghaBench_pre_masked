
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_error_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (char*,int,char*,int ,char*,int ) ;
 int FUNC_1 (char*,char const*,char*) ;
 char* FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(const char *VAR_0, mach_error_t VAR_1)
{
 char *VAR_2;
 char VAR_3[1024];
 boolean_t VAR_4;

 VAR_2 = FUNC_2(VAR_1, &VAR_4);

 if (VAR_4) {
  FUNC_0(VAR_3, sizeof(VAR_3), "%s %s (%x)", FUNC_3(VAR_1), VAR_2, VAR_1);
  VAR_2 = VAR_3;
 }

 FUNC_1("%s %s\n", VAR_0, VAR_2);
}
