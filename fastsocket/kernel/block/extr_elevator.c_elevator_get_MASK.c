
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_type {int elevator_owner; } ;


 int VAR_0 ;
 struct elevator_type* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct elevator_type *FUNC_8(const char *VAR_2)
{
 struct elevator_type *VAR_3;

 FUNC_2(&VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  char VAR_4[VAR_0 + FUNC_6("-iosched")];

  FUNC_3(&VAR_1);

  if (!FUNC_5(VAR_2, "anticipatory"))
   FUNC_4(VAR_4, "as-iosched");
  else
   FUNC_4(VAR_4, "%s-iosched", VAR_2);

  FUNC_1("%s", VAR_4);
  FUNC_2(&VAR_1);
  VAR_3 = FUNC_0(VAR_2);
 }

 if (VAR_3 && !FUNC_7(VAR_3->elevator_owner))
  VAR_3 = ((void*)0);

 FUNC_3(&VAR_1);

 return VAR_3;
}
