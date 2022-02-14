
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_encoder {int connectors_active; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct intel_encoder *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0) {
  VAR_1->connectors_active = 1;

  FUNC_0(VAR_1->base.crtc);
 } else {
  VAR_1->connectors_active = 0;

  FUNC_0(VAR_1->base.crtc);
 }
}
