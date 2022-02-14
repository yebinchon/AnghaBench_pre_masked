
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u16 ;
struct txpwr_limits {int dummy; } ;
struct brcms_hardware {int _nbands; TYPE_2__* band; scalar_t__ clk; scalar_t__ up; TYPE_1__** bandstate; int chanspec; int unit; int d11core; } ;
struct TYPE_4__ {size_t bandunit; int pi; } ;
struct TYPE_3__ {int pi; } ;


 int FUNC_0 (struct brcms_hardware*,int) ;
 int FUNC_1 (struct brcms_hardware*,size_t,int ) ;
 int FUNC_2 (struct brcms_hardware*,size_t) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,struct txpwr_limits*,int ) ;

void
FUNC_9(struct brcms_hardware *VAR_0, u16 VAR_1,
        bool VAR_2, struct txpwr_limits *VAR_3)
{
 uint VAR_4;

 FUNC_3(VAR_0->d11core, "wl%d: 0x%x\n", VAR_0->unit,
      VAR_1);

 VAR_0->chanspec = VAR_1;


 if (VAR_0->_nbands > 1) {
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_0->band->bandunit != VAR_4) {



   if (VAR_0->up) {
    FUNC_5(VAR_0->
          bandstate[VAR_4]->
          pi, VAR_1);
    FUNC_1(VAR_0, VAR_4, VAR_1);
   } else {
    FUNC_2(VAR_0, VAR_4);
   }
  }
 }

 FUNC_7(VAR_0->band->pi, !VAR_2);

 if (!VAR_0->up) {
  if (VAR_0->clk)
   FUNC_8(VAR_0->band->pi, VAR_3,
        VAR_1);
  FUNC_5(VAR_0->band->pi, VAR_1);
 } else {
  FUNC_6(VAR_0->band->pi, VAR_1);
  FUNC_8(VAR_0->band->pi, VAR_3, VAR_1);


  FUNC_0(VAR_0, VAR_2);
 }
}
