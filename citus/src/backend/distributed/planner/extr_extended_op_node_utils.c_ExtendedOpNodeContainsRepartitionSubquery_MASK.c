
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef int MultiExtendedOp ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(MultiExtendedOp *VAR_2)
{
 MultiNode *VAR_3 = FUNC_2((MultiNode *) VAR_2);
 MultiNode *VAR_4 = FUNC_0((MultiUnaryNode *) VAR_2);

 if (FUNC_1(VAR_3, VAR_1) && FUNC_1(VAR_4, VAR_0))
 {
  return 1;
 }

 return 0;
}
