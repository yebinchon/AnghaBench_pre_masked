
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2( const char *VAR_0, const char *VAR_1)
{
  register char VAR_2, VAR_3;
  register size_t VAR_4;

  if ((VAR_2 = *VAR_1++) != 0)
  {
    if (VAR_2 >= 'a' && VAR_2 <= 'z')
    {
      VAR_2 -= ('a' - 'A');
    }
    VAR_4 = FUNC_1(VAR_1);
    do
    {
      do
      {
        if ((VAR_3 = *VAR_0++) == 0)
          return ((void*)0);
        if (VAR_3 >= 'a' && VAR_3 <= 'z')
        {
          VAR_3 -= ('a' - 'A');
        }
      } while (VAR_3 != VAR_2);
    } while (FUNC_0(VAR_0, VAR_1, VAR_4) != 0);
    VAR_0--;
  }
  return VAR_0;
}
