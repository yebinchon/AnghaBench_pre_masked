
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * encoder; int dpms; } ;
struct intel_connector {TYPE_3__* encoder; TYPE_1__ base; } ;
struct TYPE_5__ {int * crtc; } ;
struct TYPE_6__ {int connectors_active; TYPE_2__ base; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct intel_connector *VAR_1)
{
 VAR_1->base.dpms = VAR_0;
 VAR_1->base.encoder = ((void*)0);
 VAR_1->encoder->connectors_active = 0;
 VAR_1->encoder->base.crtc = ((void*)0);
}
