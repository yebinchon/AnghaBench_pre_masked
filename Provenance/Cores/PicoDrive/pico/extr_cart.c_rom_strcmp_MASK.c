
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, const char *VAR_2)
{
  int VAR_3, VAR_4 = FUNC_0(VAR_2);
  const char *VAR_5 = (const char *)VAR_0.rom;
  if (VAR_1 + VAR_4 > VAR_0.romsize)
    return 0;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_2[VAR_3] != VAR_5[(VAR_3 + VAR_1) ^ 1])
      return 1;
  return 0;
}
