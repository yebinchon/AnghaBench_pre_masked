
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int renameType; } ;
typedef TYPE_1__ RenameStmt ;
typedef int ObjectAddress ;


 int VAR_0 ;





 int const* FUNC_0 (TYPE_1__*,int) ;
 int const* FUNC_1 (TYPE_1__*,int) ;
 int const* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const ObjectAddress *
FUNC_5(RenameStmt *VAR_1, bool VAR_2)
{
 switch (VAR_1->renameType)
 {
  case 128:
  {
   return FUNC_2(VAR_1, VAR_2);
  }

  case 131:
  {
   return FUNC_0(VAR_1, VAR_2);
  }

  case 129:
  case 132:
  case 130:
  {
   return FUNC_1(VAR_1, VAR_2);
  }

  default:
  {
   FUNC_3(VAR_0, (FUNC_4("unsupported rename statement to get object address "
           "for")));
  }
 }
}
