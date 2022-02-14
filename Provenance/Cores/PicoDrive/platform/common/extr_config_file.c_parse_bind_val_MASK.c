
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int mask; } ;
struct TYPE_3__ {char const* name; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, int *VAR_6)
{
 int VAR_7;

 *VAR_6 = VAR_1;
 if (VAR_5[0] == 0)
  return 0;

 if (FUNC_2(VAR_5, "player", 6) == 0)
 {
  int VAR_8, VAR_9 = 0;
  VAR_8 = FUNC_0(VAR_5 + 6) - 1;

  if (VAR_8 > 1)
   return -1;
  if (VAR_8 == 1)
   VAR_9 = 16;

  *VAR_6 = VAR_2;
  for (VAR_7 = 0; VAR_4[VAR_7].name != ((void*)0); VAR_7++) {
   if (FUNC_2(VAR_4[VAR_7].name, VAR_5 + 8, FUNC_1(VAR_5 + 8)) == 0)
    return VAR_4[VAR_7].mask << VAR_9;
  }
 }
 for (VAR_7 = 0; VAR_3[VAR_7].name != ((void*)0); VAR_7++) {
  if (FUNC_2(VAR_3[VAR_7].name, VAR_5, FUNC_1(VAR_5)) == 0) {
   *VAR_6 = VAR_0;
   return VAR_3[VAR_7].mask;
  }
 }

 return -1;
}
