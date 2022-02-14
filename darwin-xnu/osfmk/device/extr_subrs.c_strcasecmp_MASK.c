
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;


 int FUNC_0 (unsigned char const) ;

int
FUNC_1(const char *VAR_0, const char *VAR_1)
{
    const unsigned char *VAR_2 = (const u_char *)VAR_0,
                 *VAR_3 = (const u_char *)VAR_1;

    while (FUNC_0(*VAR_2) == FUNC_0(*VAR_3++))
 if (*VAR_2++ == '\0')
     return (0);
    return (FUNC_0(*VAR_2) - FUNC_0(*--VAR_3));
}
