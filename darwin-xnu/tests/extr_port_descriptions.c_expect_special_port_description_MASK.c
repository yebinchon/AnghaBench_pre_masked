
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;


 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (char const*,char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *(*VAR_1)(mach_port_t),
  mach_port_t VAR_2, const char *VAR_3)
{
 const char *VAR_4 = VAR_1(VAR_2);
 FUNC_1(VAR_4, "%s is %s", VAR_3, VAR_4);
 if (VAR_4) {
  VAR_0; FUNC_0(FUNC_2(VAR_4), FUNC_2(""),
    "%s's description string is not empty", VAR_3);
 }
}
