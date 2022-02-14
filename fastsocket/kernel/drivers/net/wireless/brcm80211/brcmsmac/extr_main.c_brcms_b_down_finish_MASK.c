
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
struct brcms_hardware {int up; int sbclk; int clk; int sih; int noreset; TYPE_2__* wlc; int d11core; TYPE_1__* band; } ;
struct TYPE_6__ {int wl; } ;
struct TYPE_5__ {int pi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct brcms_hardware*,int ) ;
 int FUNC_5 (struct brcms_hardware*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct brcms_hardware *VAR_3)
{
 uint VAR_4 = 0;
 bool VAR_5;

 if (!VAR_3->up)
  return VAR_4;

 VAR_3->up = 0;
 FUNC_11(VAR_3->band->pi, 0);

 VAR_5 = FUNC_8(VAR_3->wlc);

 if (VAR_5) {
  VAR_3->sbclk = 0;
  VAR_3->clk = 0;
  FUNC_10(VAR_3->band->pi, 0);


  FUNC_6(VAR_3->wlc);
 } else {


  if (FUNC_2(VAR_3->d11core)) {
   if (FUNC_3(VAR_3->d11core,
     FUNC_0(VAR_2)) & VAR_0)
    FUNC_7(VAR_3->wlc);
   VAR_4 += FUNC_9(VAR_3->wlc->wl);
   FUNC_5(VAR_3);
  }


  if (!VAR_3->noreset) {
   FUNC_1(VAR_3->sih);
   FUNC_4(VAR_3, VAR_1);
  }
 }

 return VAR_4;
}
