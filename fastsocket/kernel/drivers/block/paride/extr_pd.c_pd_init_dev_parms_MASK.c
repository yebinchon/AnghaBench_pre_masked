
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {scalar_t__ heads; int sectors; } ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pd_unit*,int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct pd_unit*,int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pd_unit *VAR_1)
{
 FUNC_2(VAR_1, 0, FUNC_0("before init_dev_parms"));
 FUNC_1(VAR_1, VAR_1->sectors, 0, VAR_1->heads - 1, 0, 0,
   VAR_0);
 FUNC_3(300);
 FUNC_2(VAR_1, 0, "Initialise device parameters");
}
