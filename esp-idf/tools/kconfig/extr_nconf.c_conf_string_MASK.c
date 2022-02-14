
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int sym; } ;






 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char const*,int ,int *,int *) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (struct menu*) ;
 int FUNC_4 (struct menu*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct menu *VAR_6)
{
 const char *VAR_7 = FUNC_3(VAR_6);

 while (1) {
  int VAR_8;
  const char *VAR_9;

  switch (FUNC_6(VAR_6->sym)) {
  case 129:
   VAR_9 = FUNC_0(VAR_3);
   break;
  case 130:
   VAR_9 = FUNC_0(VAR_2);
   break;
  case 128:
   VAR_9 = FUNC_0(VAR_4);
   break;
  default:
   VAR_9 = FUNC_0("Internal nconf error!");
  }
  VAR_8 = FUNC_2(VAR_5,
    VAR_7 ? FUNC_0(VAR_7) : FUNC_0("Main Menu"),
    VAR_9,
    FUNC_5(VAR_6->sym),
    &VAR_0,
    &VAR_1);
  switch (VAR_8) {
  case 0:
   if (FUNC_7(VAR_6->sym,
      VAR_0))
    return;
   FUNC_1(VAR_5,
    FUNC_0("You have made an invalid entry."), 0);
   break;
  case 1:
   FUNC_4(VAR_6);
   break;
  case 131:
   return;
  }
 }
}
