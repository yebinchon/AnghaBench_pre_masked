
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtekind; scalar_t__ funcordinality; scalar_t__ lateral; } ;
typedef TYPE_1__ RangeTblEntry ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(RangeTblEntry *VAR_1)
{




 if (VAR_1->rtekind != VAR_0 ||
  VAR_1->lateral ||
  VAR_1->funcordinality)
 {
  return 0;
 }
 return 1;
}
