
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bcm3510_state {int frontend; } ;
struct TYPE_6__ {scalar_t__ CTL; } ;
struct TYPE_7__ {scalar_t__ RUN; } ;
struct TYPE_8__ {TYPE_1__ TSTCTL_2e; TYPE_2__ APSTAT1_a2; } ;
typedef TYPE_3__ bcm3510_register_value ;


 int FUNC_0 (struct bcm3510_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bcm3510_state*,int,TYPE_3__*) ;
 int FUNC_3 (struct bcm3510_state*) ;
 int FUNC_4 (struct bcm3510_state*,int,TYPE_3__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct bcm3510_state *VAR_0)
{
 int VAR_1;
 bcm3510_register_value VAR_2;


 if ((VAR_1 = FUNC_2(VAR_0,0xa2,&VAR_2)) < 0)
  return VAR_1;
 if (VAR_2.APSTAT1_a2.RUN) {
  FUNC_5("AP is already running - firmware already loaded.\n");
  return 0;
 }

 FUNC_5("reset?\n");
 if ((VAR_1 = FUNC_3(VAR_0)) < 0)
  return VAR_1;

 FUNC_5("tristate?\n");

 VAR_2.TSTCTL_2e.CTL = 0;
 if ((VAR_1 = FUNC_4(VAR_0,0x2e,VAR_2)) < 0)
  return VAR_1;

 FUNC_5("firmware?\n");
 if ((VAR_1 = FUNC_1(&VAR_0->frontend)) < 0 ||
  (VAR_1 = FUNC_0(VAR_0)) < 0)
  return VAR_1;



 return 0;
}
