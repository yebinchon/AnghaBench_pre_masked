
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int flags; int crtc_htotal; int crtc_vtotal; int crtc_vdisplay; scalar_t__ clock; } ;
struct drm_crtc {TYPE_2__ base; TYPE_1__ hwmode; void* framedur_ns; void* linedur_ns; void* pixeldur_ns; } ;
typedef void* s64 ;


 int FUNC_0 (char*,int ,int,int,int,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;

void FUNC_3(struct drm_crtc *VAR_1)
{
 s64 VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 u64 VAR_5;


 VAR_5 = (u64) VAR_1->hwmode.clock * 1000;




 if (VAR_1->hwmode.flags & VAR_0)
  VAR_5 *= 2;


 if (VAR_5 > 0) {
  int VAR_6;




  VAR_3 = (s64) FUNC_2(1000000000, VAR_5);
  VAR_2 = (s64) FUNC_2(((u64) VAR_1->hwmode.crtc_htotal *
           1000000000), VAR_5);
  VAR_6 = VAR_1->hwmode.crtc_htotal *
    VAR_1->hwmode.crtc_vtotal;
  VAR_4 = (s64) FUNC_2((u64) VAR_6 * 1000000000,
           VAR_5);
 } else
  FUNC_1("crtc %d: Can't calculate constants, dotclock = 0!\n",
     VAR_1->base.id);

 VAR_1->pixeldur_ns = VAR_3;
 VAR_1->linedur_ns = VAR_2;
 VAR_1->framedur_ns = VAR_4;

 FUNC_0("crtc %d: hwmode: htotal %d, vtotal %d, vdisplay %d\n",
    VAR_1->base.id, VAR_1->hwmode.crtc_htotal,
    VAR_1->hwmode.crtc_vtotal, VAR_1->hwmode.crtc_vdisplay);
 FUNC_0("crtc %d: clock %d kHz framedur %d linedur %d, pixeldur %d\n",
    VAR_1->base.id, (int) VAR_5/1000, (int) VAR_4,
    (int) VAR_2, (int) VAR_3);
}
