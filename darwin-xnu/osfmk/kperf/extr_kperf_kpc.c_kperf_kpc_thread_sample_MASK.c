
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kpcdata {int counterc; int running; int configv; scalar_t__ configc; int counterv; } ;


 int FUNC_0 (int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int) ;

void
FUNC_6(struct kpcdata *VAR_4, int VAR_5)
{
 FUNC_0(VAR_3 | VAR_1, VAR_5);

 VAR_4->running = FUNC_4();

 VAR_4->counterc = VAR_2;
 if (FUNC_3(&VAR_4->counterc,
                                VAR_4->counterv)) {

  FUNC_5(VAR_4->counterv, 0,
         sizeof(uint64_t) * VAR_4->counterc);
 }

 if (!VAR_5) {
  VAR_4->configc = 0;
 } else {
  VAR_4->configc = FUNC_2(VAR_4->running);
  FUNC_1(VAR_4->running, VAR_4->configv);
 }

 FUNC_0(VAR_3 | VAR_0, VAR_4->running, VAR_4->counterc);
}
