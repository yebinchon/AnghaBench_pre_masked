
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtekind; char relkind; } ;
typedef TYPE_1__ RangeTblEntry ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_0(RangeTblEntry *VAR_5)
{
 char VAR_6 = '\0';

 if (VAR_5->rtekind != VAR_4)
 {

  return 0;
 }

 VAR_6 = VAR_5->relkind;
 if (VAR_6 == VAR_3 || VAR_6 == VAR_2 ||
  VAR_6 == VAR_0 || VAR_6 == VAR_1)
 {






  return 1;
 }

 return 0;
}
