
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objectId; } ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 (TYPE_1__ const*) ;
 char const* FUNC_1 (int ) ;
 int VAR_0 ;
 char const* FUNC_2 (int ,int) ;


 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static const char *
FUNC_6(const ObjectAddress *VAR_1)
{
 switch (FUNC_5(VAR_1))
 {
  case 129:
  {
   return FUNC_2(VAR_1->objectId, 0);
  }

  case 128:
  {
   return FUNC_1(FUNC_0(VAR_1));
  }

  default:
  {
   FUNC_3(VAR_0, (FUNC_4(
        "unsupported object to construct a create statement")));
  }
 }
}
