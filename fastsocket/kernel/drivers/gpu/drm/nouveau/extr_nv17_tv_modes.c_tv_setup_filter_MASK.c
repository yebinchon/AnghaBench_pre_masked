
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int hdisplay; int vdisplay; } ;
struct nv17_tv_norm_params {TYPE_3__ tv_enc_mode; } ;
struct TYPE_5__ {int* hfilter; int* vfilter; } ;
struct nv17_tv_encoder {int flicker; int overscan; TYPE_2__ state; } ;
struct filter_params {int k1; int ki; int ki2; int ki3; int kr; int kir; int ki2r; int ki3r; int kf; int kif; int ki2f; int ki3f; int krf; int kirf; int ki2rf; int ki3rf; } ;
struct drm_encoder {TYPE_1__* crtc; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {struct drm_display_mode mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 struct filter_params** VAR_0 ;
 struct nv17_tv_norm_params* FUNC_2 (struct drm_encoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;
 struct nv17_tv_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_4)
{
 struct nv17_tv_encoder *VAR_5 = FUNC_4(VAR_4);
 struct nv17_tv_norm_params *VAR_6 = FUNC_2(VAR_4);
 struct drm_display_mode *VAR_7 = &VAR_4->crtc->mode;
 uint32_t (*VAR_8[])[4][7] = {&VAR_5->state.hfilter,
           &VAR_5->state.vfilter};
 int VAR_9, VAR_10, VAR_11;
 int32_t VAR_12 = FUNC_0(VAR_5->overscan);
 int64_t VAR_13 = (VAR_5->flicker - 50) * (VAR_2 / 100);
 uint64_t VAR_14[] = {VAR_7->hdisplay * VAR_2,
    VAR_7->vdisplay * VAR_2};

 FUNC_1(VAR_14[0], VAR_12 * VAR_6->tv_enc_mode.hdisplay);
 FUNC_1(VAR_14[1], VAR_12 * VAR_6->tv_enc_mode.vdisplay);

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_14[VAR_11] = FUNC_3((int64_t)VAR_14[VAR_11], VAR_1);

  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   struct filter_params *VAR_15 = &VAR_0[VAR_11][VAR_10];

   for (VAR_9 = 0; VAR_9 < 7; VAR_9++) {
    int64_t VAR_16 = (VAR_15->k1 + VAR_15->ki*VAR_9 + VAR_15->ki2*VAR_9*VAR_9 +
          VAR_15->ki3*VAR_9*VAR_9*VAR_9)
     + (VAR_15->kr + VAR_15->kir*VAR_9 + VAR_15->ki2r*VAR_9*VAR_9 +
        VAR_15->ki3r*VAR_9*VAR_9*VAR_9) * VAR_14[VAR_11]
     + (VAR_15->kf + VAR_15->kif*VAR_9 + VAR_15->ki2f*VAR_9*VAR_9 +
        VAR_15->ki3f*VAR_9*VAR_9*VAR_9) * VAR_13
     + (VAR_15->krf + VAR_15->kirf*VAR_9 + VAR_15->ki2rf*VAR_9*VAR_9 +
        VAR_15->ki3rf*VAR_9*VAR_9*VAR_9) * VAR_13 * VAR_14[VAR_11];

    (*VAR_8[VAR_11])[VAR_10][VAR_9] = (VAR_16 + VAR_3/2) >> 39
     & (0x1 << 31 | 0x7f << 9);
   }
  }
 }
}
