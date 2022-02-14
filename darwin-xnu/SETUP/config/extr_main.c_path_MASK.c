
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (unsigned int) ;
 char* VAR_1 ;
 int FUNC_1 (char*,char*,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0((unsigned)(FUNC_2(VAR_0)+
          FUNC_2(VAR_2)+
          FUNC_2(VAR_1)+
          3));
 (void) FUNC_1(VAR_3, "%s/%s/%s", VAR_1, VAR_0, VAR_2);
 return (VAR_3);
}
