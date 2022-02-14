
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rtable; } ;
struct TYPE_4__ {scalar_t__ rtekind; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

bool
FUNC_2(Query *VAR_2)
{
 if (VAR_2->rtable == VAR_0)
 {
  return 1;
 }
 return 0;
}
