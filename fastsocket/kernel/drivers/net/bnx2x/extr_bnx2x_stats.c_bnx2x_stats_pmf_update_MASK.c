
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int stats_sema; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_1)
{
 if (FUNC_2(&VAR_1->stats_sema, VAR_0/10))
  FUNC_0("Unable to acquire stats lock\n");
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->stats_sema);
}
