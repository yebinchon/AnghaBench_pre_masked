
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paramkind; } ;
typedef int Query ;
typedef int PlanState ;
typedef TYPE_1__ Param ;
typedef int Node ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int * (*) (int *,int *),int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int * (*) (int *,int *),int *,int ) ;

Node *
FUNC_9(Node *VAR_4, PlanState *VAR_5)
{
 if (VAR_4 == ((void*)0) || FUNC_1(VAR_4, VAR_0))
 {
  return VAR_4;
 }

 switch (FUNC_7(VAR_4))
 {
  case 132:
  {
   Param *VAR_6 = (Param *) VAR_4;
   if (VAR_6->paramkind == VAR_2)
   {

    return VAR_4;
   }
  }



  case 135:
  case 133:
  case 136:
  case 134:
  case 137:
  case 139:
  case 128:
  case 129:
  case 130:
  case 138:
  {
   if (FUNC_0(VAR_4, VAR_1))
   {
    return (Node *) FUNC_6(VAR_4,
              FUNC_9,
              VAR_5);
   }

   return (Node *) FUNC_2((Expr *) VAR_4,
            FUNC_4(VAR_4),
            FUNC_5(VAR_4),
            FUNC_3(VAR_4),
            VAR_5);
  }

  case 131:
  {
   return (Node *) FUNC_8((Query *) VAR_4,
              FUNC_9,
              VAR_5, VAR_3);
  }

  default:
  {
   return (Node *) FUNC_6(VAR_4,
             FUNC_9,
             VAR_5);
  }
 }

 return VAR_4;
}
