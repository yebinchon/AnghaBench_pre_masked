
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef int MultiExtendedOp ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(MultiExtendedOp *VAR_1, MultiExtendedOp *VAR_2,
      MultiExtendedOp *VAR_3)
{
 MultiNode *VAR_4 = FUNC_3((MultiNode *) VAR_1);
 MultiNode *VAR_5 = FUNC_1((MultiUnaryNode *) VAR_1);
 MultiNode *VAR_6 = FUNC_1((MultiUnaryNode *) VAR_5);


 FUNC_0(FUNC_2(VAR_5, VAR_0));
 FUNC_0(FUNC_5(VAR_4));


 FUNC_4((MultiUnaryNode *) VAR_4, (MultiNode *) VAR_2);
 FUNC_4((MultiUnaryNode *) VAR_2, (MultiNode *) VAR_5);


 FUNC_4((MultiUnaryNode *) VAR_5, (MultiNode *) VAR_3);
 FUNC_4((MultiUnaryNode *) VAR_3, (MultiNode *) VAR_6);


 FUNC_6(VAR_1);
}
