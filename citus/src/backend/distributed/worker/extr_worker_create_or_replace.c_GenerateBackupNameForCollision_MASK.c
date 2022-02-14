
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ObjectAddress ;


 int VAR_0 ;
 char* FUNC_0 (int const*) ;
 char* FUNC_1 (int const*) ;


 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static char *
FUNC_6(const ObjectAddress *VAR_1)
{
 switch (FUNC_5(VAR_1))
 {
  case 129:
  {
   return FUNC_0(VAR_1);
  }

  case 128:
  {
   return FUNC_1(VAR_1);
  }

  default:
  {
   FUNC_2(VAR_0, (FUNC_4("unsupported object to construct a rename statement"),
       FUNC_3(
        "unable to generate a backup name for the old type")));
  }
 }
}
