
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct printf_spec {int dummy; } ;


 int FUNC_0 (char*,int const*) ;
 int FUNC_1 (char*,int const*,char const*) ;
 char* FUNC_2 (char*,char*,char*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, char *VAR_1, const u8 *VAR_2,
        struct printf_spec VAR_3, const char *VAR_4)
{
 char VAR_5[sizeof("xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255")];

 if (VAR_4[0] == 'I' && VAR_4[2] == 'c')
  FUNC_0(VAR_5, VAR_2);
 else
  FUNC_1(VAR_5, VAR_2, VAR_4);

 return FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3);
}
