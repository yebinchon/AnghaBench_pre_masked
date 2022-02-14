
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = FUNC_1(VAR_0);

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {
  *VAR_2 = FUNC_0((unsigned char) *VAR_2);
 }

 return VAR_1;
}
