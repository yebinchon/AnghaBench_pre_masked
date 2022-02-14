
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Exception {int msg; int obj; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct Exception* VAR_3) {

  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "\n");
  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "!!\t\n");
  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "!!\tUncaught %$\n", VAR_3->obj);
  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "!!\t\n");
  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "!!\t\t %s\n", VAR_3->msg);
  FUNC_3(FUNC_0(VAR_1, VAR_2), 0, "!!\t\n");

  FUNC_1();

  FUNC_2(VAR_0);

}
