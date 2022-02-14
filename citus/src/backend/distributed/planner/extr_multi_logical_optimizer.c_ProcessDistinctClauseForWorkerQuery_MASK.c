
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int workerHasDistinctOn; int * workerDistinctClause; } ;
typedef TYPE_1__ QueryDistinctClause ;
typedef int List ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(List *VAR_1, bool VAR_2,
         List *VAR_3,
         bool VAR_4,
         QueryDistinctClause *VAR_5,
         bool *VAR_6)
{
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 if (VAR_1 == VAR_0)
 {
  return;
 }

 *VAR_6 = 0;

 if (VAR_3 == VAR_0 ||
  FUNC_0(VAR_3, VAR_1))
 {
  VAR_7 = 1;
 }
 else
 {
  VAR_7 = 0;







  *VAR_6 = 1;
 }
 VAR_8 = !VAR_4 &&
        VAR_7;
 if (VAR_8)
 {
  VAR_5->workerDistinctClause = VAR_1;
  VAR_5->workerHasDistinctOn = VAR_2;
 }
}
