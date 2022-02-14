
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pmf; } ;
struct bnx2x {int stats_started; int stats_sema; TYPE_1__ port; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_7(&VAR_1->stats_sema, VAR_0/10))
  FUNC_0("Unable to acquire stats lock\n");

 VAR_1->stats_started = 0;

 FUNC_5(VAR_1);

 if (VAR_1->port.pmf)
  VAR_2 = (FUNC_2(VAR_1) == 0);

 VAR_2 |= (FUNC_6(VAR_1) == 0);

 if (VAR_2) {
  FUNC_3(VAR_1);

  if (VAR_1->port.pmf)
   FUNC_4(VAR_1);

  FUNC_1(VAR_1);
  FUNC_5(VAR_1);
 }

 FUNC_8(&VAR_1->stats_sema);
}
