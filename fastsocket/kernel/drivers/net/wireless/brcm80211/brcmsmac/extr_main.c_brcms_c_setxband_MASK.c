
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u32 ;
struct brcms_hardware {int noreset; scalar_t__ sbclk; TYPE_1__* wlc; int * bandstate; int band; int unit; int d11core; } ;
struct TYPE_2__ {int * bandstate; int band; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_hardware*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_1, uint VAR_2)
{
 FUNC_1(VAR_1->d11core, "wl%d: bandunit %d\n", VAR_1->unit,
      VAR_2);

 VAR_1->band = VAR_1->bandstate[VAR_2];





 VAR_1->wlc->band = VAR_1->wlc->bandstate[VAR_2];


 if (VAR_1->sbclk && !VAR_1->noreset) {
  u32 VAR_3 = 0;

  if (VAR_2 == 0)
   VAR_3 = VAR_0;

  FUNC_0(VAR_1, VAR_0, VAR_3);
 }
}
