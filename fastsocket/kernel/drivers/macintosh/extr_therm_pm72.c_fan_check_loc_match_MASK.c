
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loc; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2)
{
 char VAR_3[64];
 char *VAR_4, *VAR_5;

 FUNC_2(VAR_3, VAR_0[VAR_2].loc, 64);

 VAR_4 = VAR_3;
 for (;;) {
  VAR_5 = FUNC_0(VAR_4, ',');
  if (VAR_5)
   *VAR_5 = 0;
  if (FUNC_1(VAR_1, VAR_4) == 0)
   return 1;
  if (VAR_5 == ((void*)0))
   break;
  VAR_4 = VAR_5 + 1;
 }
 return 0;
}
