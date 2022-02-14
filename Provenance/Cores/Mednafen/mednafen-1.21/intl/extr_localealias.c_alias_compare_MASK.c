
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias_map {scalar_t__ alias; } ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 unsigned char const FUNC_2 (unsigned char const) ;

__attribute__((used)) static int
FUNC_3 (const struct alias_map *VAR_0, const struct alias_map *VAR_1)
{



  const unsigned char *VAR_2 = (const unsigned char *) VAR_0->alias;
  const unsigned char *VAR_3 = (const unsigned char *) VAR_1->alias;
  unsigned char VAR_4, VAR_5;

  if (VAR_2 == VAR_3)
    return 0;

  do
    {


      VAR_4 = FUNC_0 (*VAR_2) ? FUNC_2 (*VAR_2) : *VAR_2;
      VAR_5 = FUNC_0 (*VAR_3) ? FUNC_2 (*VAR_3) : *VAR_3;
      if (VAR_4 == '\0')
 break;
      ++VAR_2;
      ++VAR_3;
    }
  while (VAR_4 == VAR_5);

  return VAR_4 - VAR_5;

}
