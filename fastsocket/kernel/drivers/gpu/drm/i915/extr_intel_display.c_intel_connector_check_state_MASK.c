
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct drm_crtc* crtc; } ;
struct intel_encoder {int (* get_hw_state ) (struct intel_encoder*,int*) ;TYPE_2__ base; int connectors_active; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_8__ {scalar_t__ dpms; TYPE_2__* encoder; TYPE_1__ base; } ;
struct intel_connector {TYPE_4__ base; struct intel_encoder* encoder; scalar_t__ (* get_hw_state ) (struct intel_connector*) ;} ;
struct drm_crtc {int enabled; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_7__ {int pipe; int active; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct intel_connector*) ;
 int FUNC_5 (struct intel_encoder*,int*) ;
 TYPE_3__* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct intel_connector *VAR_1)
{
 if (VAR_1->get_hw_state(VAR_1)) {
  struct intel_encoder *VAR_2 = VAR_1->encoder;
  struct drm_crtc *VAR_3;
  bool VAR_4;
  enum pipe VAR_5;

  FUNC_0("[CONNECTOR:%d:%s]\n",
         VAR_1->base.base.id,
         FUNC_3(&VAR_1->base));

  FUNC_1(VAR_1->base.dpms == VAR_0,
       "wrong connector dpms state\n");
  FUNC_1(VAR_1->base.encoder != &VAR_2->base,
       "active connector not linked to encoder\n");
  FUNC_1(!VAR_2->connectors_active,
       "encoder->connectors_active not set\n");

  VAR_4 = VAR_2->get_hw_state(VAR_2, &VAR_5);
  FUNC_1(!VAR_4, "encoder not enabled\n");
  if (FUNC_2(!VAR_2->base.crtc))
   return;

  VAR_3 = VAR_2->base.crtc;

  FUNC_1(!VAR_3->enabled, "crtc not enabled\n");
  FUNC_1(!FUNC_6(VAR_3)->active, "crtc not active\n");
  FUNC_1(VAR_5 != FUNC_6(VAR_3)->pipe,
       "encoder active on the wrong pipe\n");
 }
}
