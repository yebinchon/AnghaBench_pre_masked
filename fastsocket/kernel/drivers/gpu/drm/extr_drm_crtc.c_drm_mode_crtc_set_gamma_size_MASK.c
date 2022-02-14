
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct drm_crtc {int gamma_size; int gamma_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct drm_crtc *VAR_2,
      int VAR_3)
{
 VAR_2->gamma_size = VAR_3;

 VAR_2->gamma_store = FUNC_0(VAR_3 * sizeof(uint16_t) * 3, VAR_1);
 if (!VAR_2->gamma_store) {
  VAR_2->gamma_size = 0;
  return -VAR_0;
 }

 return 0;
}
