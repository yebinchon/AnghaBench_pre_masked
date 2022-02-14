
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpcdata {int counterc; int running; int configv; scalar_t__ configc; int counterv; int curcpu; } ;


 int FUNC_0 (int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 () ;

void
FUNC_5(struct kpcdata *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2 | VAR_1, VAR_4);

 VAR_3->running = FUNC_4();
 VAR_3->counterc = FUNC_3(0, VAR_3->running,
                                       &VAR_3->curcpu,
                                       VAR_3->counterv);
 if (!VAR_4) {
  VAR_3->configc = 0;
 } else {
  VAR_3->configc = FUNC_2(VAR_3->running);
  FUNC_1(VAR_3->running, VAR_3->configv);
 }

 FUNC_0(VAR_2 | VAR_0, VAR_3->running, VAR_3->counterc);
}
