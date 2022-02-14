
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int subtype; } ;
typedef int StringInfo ;
typedef TYPE_1__ AlterTableCmd ;





 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_1, AlterTableCmd *VAR_2)
{
 switch (VAR_2->subtype)
 {
  case 130:
  {
   FUNC_0(VAR_1, VAR_2);
   break;
  }

  case 128:
  {
   FUNC_2(VAR_1, VAR_2);
   break;
  }

  case 129:
  {
   FUNC_1(VAR_1, VAR_2);
   break;
  }

  default:
  {
   FUNC_3(VAR_0, (FUNC_5("unsupported subtype for alter table command"),
       FUNC_4("sub command type: %d", VAR_2->subtype)));
  }
 }
}
