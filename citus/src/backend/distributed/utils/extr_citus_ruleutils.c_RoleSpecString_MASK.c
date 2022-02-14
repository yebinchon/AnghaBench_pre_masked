
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int roletype; char const* rolename; } ;
typedef TYPE_1__ RoleSpec ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char const* FUNC_2 (int ,int) ;




 int FUNC_3 (int ,char*,int) ;
 char const* FUNC_4 (char const*) ;

const char *
FUNC_5(RoleSpec *VAR_1, bool VAR_2)
{
 switch (VAR_1->roletype)
 {
  case 131:
  {
   return VAR_2 ?
       FUNC_4(VAR_1->rolename) :
       VAR_1->rolename;
  }

  case 130:
  {
   return VAR_2 ?
       FUNC_4(FUNC_2(FUNC_1(), 0)) :
       FUNC_2(FUNC_1(), 0);
  }

  case 128:
  {
   return VAR_2 ?
       FUNC_4(FUNC_2(FUNC_0(), 0)) :
       FUNC_2(FUNC_0(), 0);
  }

  case 129:
  {
   return "PUBLIC";
  }

  default:
  {
   FUNC_3(VAR_0, "unexpected role type %d", VAR_1->roletype);
  }
 }
}
