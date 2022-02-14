
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, int VAR_1, char *VAR_2, size_t VAR_3)
{
  size_t VAR_4 = FUNC_2(VAR_0);
  if(VAR_4 > (VAR_3 - 7))
    VAR_4 = VAR_3 - 7;

  while(VAR_4--)
    *VAR_2++ = (char)FUNC_0(*VAR_0++);
  FUNC_1(VAR_2, 7, ":%u", VAR_1);
}
