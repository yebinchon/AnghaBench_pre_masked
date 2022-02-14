
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ match_f ;
struct TYPE_2__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_6, match_f VAR_7)
{
 int VAR_8 = FUNC_1(FUNC_0(VAR_3));
 int VAR_9;

 if (VAR_7 == VAR_0)
  ++VAR_8;
 else if (VAR_7 == VAR_1)
  --VAR_8;

 VAR_9 = VAR_8;
 VAR_9 = (VAR_9 + VAR_4) % VAR_4;
 while (1) {
  char *VAR_10 = VAR_5[VAR_9].str;
  if (FUNC_2(VAR_10, VAR_6) != 0)
   return VAR_9;
  if (VAR_7 == VAR_1 ||
      VAR_7 == VAR_2)
   --VAR_9;
  else
   ++VAR_9;
  VAR_9 = (VAR_9 + VAR_4) % VAR_4;
  if (VAR_9 == VAR_8)
   return -1;
 }
}
