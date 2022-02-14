
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PushDownStatus ;
typedef scalar_t__ PullUpStatus ;
typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef int MultiBinaryNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PullUpStatus
FUNC_6(MultiUnaryNode *VAR_5)
{
 PullUpStatus VAR_6 = VAR_0;
 MultiNode *VAR_7 = FUNC_4((MultiNode *) VAR_5);
 bool VAR_8 = FUNC_5(VAR_7);
 bool VAR_9 = FUNC_1(VAR_7);

 if (VAR_8)
 {




  PushDownStatus VAR_10 = VAR_3;
  VAR_10 = FUNC_2((MultiUnaryNode *) VAR_7, VAR_5);

  if (VAR_10 == VAR_4)
  {
   VAR_6 = VAR_2;
  }
  else
  {
   VAR_6 = VAR_1;
  }
 }
 else if (VAR_9)
 {
  VAR_6 = FUNC_3((MultiBinaryNode *) VAR_7, VAR_5);
 }

 FUNC_0(VAR_6 != VAR_0);
 return VAR_6;
}
