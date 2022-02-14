
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int fw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct carlu*) ;
 int FUNC_4 (struct carlu*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct carlu *VAR_1)
{
 int VAR_2 = 0;

 FUNC_5("loading firmware...\n");

 VAR_1->fw = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1->fw))
  return FUNC_1(VAR_1->fw);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
