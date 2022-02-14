
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_digital_port {int port; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_digital_port* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static enum port FUNC_3(struct intel_encoder *VAR_6)
{
 struct drm_encoder *VAR_7 = &VAR_6->base;
 int VAR_8 = VAR_6->type;

 if (VAR_8 == VAR_1 || VAR_8 == VAR_2 ||
     VAR_8 == VAR_3 || VAR_8 == VAR_4) {
  struct intel_digital_port *VAR_9 =
   FUNC_2(VAR_7);
  return VAR_9->port;

 } else if (VAR_8 == VAR_0) {
  return VAR_5;

 } else {
  FUNC_1("Invalid DDI encoder type %d\n", VAR_8);
  FUNC_0();
 }
}
