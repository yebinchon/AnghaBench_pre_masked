
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bittbl {unsigned int mask; char const* name; } ;


 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(char **VAR_0, const char *VAR_1, unsigned int VAR_2, struct bittbl *VAR_3, int VAR_4)
{
 char *VAR_5 = *VAR_0;
 int VAR_6;

 VAR_5 += FUNC_0(VAR_5, "%-9s:", VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (VAR_2 & VAR_3[VAR_6].mask)
   VAR_5 += FUNC_0(VAR_5, " %s", VAR_3[VAR_6].name);
 *VAR_5++ = '\n';
 *VAR_0 = VAR_5;
}
