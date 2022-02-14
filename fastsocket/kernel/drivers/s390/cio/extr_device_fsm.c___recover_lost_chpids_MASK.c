
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * chpid; } ;
struct TYPE_4__ {TYPE_1__ pmcw; } ;
struct subchannel {int lpm; TYPE_2__ schib; } ;
struct chp_id {int id; } ;


 int FUNC_0 (struct chp_id*) ;
 int FUNC_1 (struct chp_id) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct subchannel *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct chp_id VAR_4;

 FUNC_0(&VAR_4);
 for (VAR_3 = 0; VAR_3<8; VAR_3++) {
  VAR_2 = 0x80 >> VAR_3;
  if (!(VAR_0->lpm & VAR_2))
   continue;
  if (VAR_1 & VAR_2)
   continue;
  VAR_4.id = VAR_0->schib.pmcw.chpid[VAR_3];
  if (!FUNC_1(VAR_4))
   FUNC_2();
 }
}
