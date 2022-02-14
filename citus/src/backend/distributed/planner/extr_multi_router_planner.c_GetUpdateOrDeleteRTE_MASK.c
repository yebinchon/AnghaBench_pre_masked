
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resultRelation; int rtable; } ;
typedef int RangeTblEntry ;
typedef TYPE_1__ Query ;


 int * FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static RangeTblEntry *
FUNC_1(Query *VAR_0)
{
 if (VAR_0->resultRelation > 0)
 {
  return FUNC_0(VAR_0->resultRelation, VAR_0->rtable);
 }

 return ((void*)0);
}
