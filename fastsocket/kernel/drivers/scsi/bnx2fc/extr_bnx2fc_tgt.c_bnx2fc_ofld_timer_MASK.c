
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_rport {int ofld_wait; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2fc_rport*,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{

 struct bnx2fc_rport *VAR_4 = (struct bnx2fc_rport *)VAR_3;

 FUNC_0(VAR_4, "entered bnx2fc_ofld_timer\n");
 FUNC_1(VAR_1, &VAR_4->flags);
 FUNC_1(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_2, &VAR_4->flags);
 FUNC_3(&VAR_4->ofld_wait);
}
