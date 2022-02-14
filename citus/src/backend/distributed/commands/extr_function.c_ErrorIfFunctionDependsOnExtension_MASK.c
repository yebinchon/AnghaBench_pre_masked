
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ const ObjectAddress ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_5(const ObjectAddress *VAR_1)
{

 ObjectAddress VAR_2 = { 0 };

 if (FUNC_0(VAR_1, &VAR_2))
 {
  char *VAR_3 = FUNC_4(VAR_1);
  char *VAR_4 = FUNC_4(&VAR_2);
  FUNC_1(VAR_0, (FUNC_3("unable to create a distributed function from functions "
          "owned by an extension"),
      FUNC_2("Function \"%s\" has a dependency on extension \"%s\". "
          "Functions depending on an extension cannot be "
          "distributed. Create the function by creating the "
          "extension on the workers.", VAR_3,
          VAR_4)));
 }
}
