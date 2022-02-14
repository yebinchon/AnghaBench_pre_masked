
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int buf ;


 char* FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(struct in6_addr *VAR_0,
      struct in6_addr *VAR_1,
      struct in6_addr *VAR_2)
{
 static char VAR_3[1024];
 FUNC_1(VAR_3, sizeof(VAR_3), "(src=%s dst=%s tgt=%s)",
  FUNC_0(VAR_0), FUNC_0(VAR_1), FUNC_0(VAR_2));
 return VAR_3;
}
