
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ classId; int objectId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;


 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

Node *
FUNC_7(const ObjectAddress *VAR_2)
{
 FUNC_0(VAR_2->classId == VAR_1);

 switch (FUNC_6(VAR_2->objectId))
 {
  case 128:
  {
   return (Node *) FUNC_2(VAR_2->objectId);
  }

  case 129:
  {
   return (Node *) FUNC_1(VAR_2->objectId);
  }

  default:
  {
   FUNC_3(VAR_0, (FUNC_5("unsupported type to generate create statement for"),
       FUNC_4("only enum and composite types can be recreated")));
  }
 }
}
