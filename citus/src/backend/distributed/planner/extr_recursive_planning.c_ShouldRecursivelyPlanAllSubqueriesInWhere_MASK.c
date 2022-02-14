
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * quals; } ;
struct TYPE_4__ {int rtable; TYPE_2__* jointree; } ;
typedef TYPE_1__ Query ;
typedef int Node ;
typedef TYPE_2__ FromExpr ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(Query *VAR_1)
{
 FromExpr *VAR_2 = ((void*)0);
 Node *VAR_3 = ((void*)0);

 VAR_2 = VAR_1->jointree;
 if (VAR_2 == ((void*)0))
 {

  return 0;
 }

 VAR_3 = VAR_2->quals;
 if (VAR_3 == ((void*)0))
 {

  return 0;
 }

 if (FUNC_0(VAR_1->rtable, VAR_0))
 {

  return 0;
 }

 return 1;
}
