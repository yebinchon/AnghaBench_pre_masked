
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cpu_transcoder; scalar_t__ pipe; } ;
struct drm_crtc {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (struct drm_crtc*) ;
 struct intel_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_1(VAR_0);



 VAR_1->cpu_transcoder = (enum transcoder) VAR_1->pipe;

 FUNC_0(VAR_0);
}
