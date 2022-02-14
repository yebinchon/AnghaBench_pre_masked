
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rtable; } ;
struct TYPE_4__ {scalar_t__ rtekind; scalar_t__ relkind; int inFromCl; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int DeferredErrorMessage ;


 int * FUNC_0 (int ,char*,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_2(Query *VAR_4)
{
 if (VAR_4->rtable != VAR_1)
 {
  RangeTblEntry *VAR_5 = (RangeTblEntry *) FUNC_1(
   VAR_4->rtable);

  if (VAR_5->rtekind == VAR_3 &&
   VAR_5->relkind == VAR_2 &&
   VAR_5->inFromCl == 0)
  {
   return FUNC_0(VAR_0,
         "cannot modify views over distributed tables", ((void*)0),
         ((void*)0));
  }
 }

 return ((void*)0);
}
