
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct drm_crtc {int dummy; } ;
struct TYPE_15__ {int min; int max; } ;
struct TYPE_14__ {int min; int max; } ;
struct TYPE_13__ {int p2_fast; } ;
struct TYPE_12__ {int max; int min; } ;
struct TYPE_11__ {int min; } ;
struct TYPE_16__ {TYPE_5__ vco; TYPE_4__ m1; TYPE_3__ p2; TYPE_2__ p1; TYPE_1__ n; } ;
typedef TYPE_6__ intel_limit_t ;
struct TYPE_17__ {int n; int m1; int m2; int p1; int p2; } ;
typedef TYPE_7__ intel_clock_t ;



__attribute__((used)) static bool
FUNC_0(const intel_limit_t *VAR_0, struct drm_crtc *VAR_1,
   int VAR_2, int VAR_3, intel_clock_t *VAR_4,
   intel_clock_t *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;

 VAR_27 = 0;
 VAR_26 = VAR_2 * 1000;
 VAR_23 = 1000000;
 VAR_24 = VAR_25 = 0;
 VAR_18 = VAR_26 / (2*100);
 VAR_19 = 0;
 VAR_20 = 19200;
 VAR_21 = 1;
 VAR_17 = VAR_22 = VAR_6 = VAR_7 = VAR_16 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0;
 VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0;


 for (VAR_17 = VAR_0->n.min; VAR_17 <= ((VAR_3) / VAR_20); VAR_17++) {
  VAR_19 = VAR_3 / VAR_17;
  for (VAR_6 = VAR_0->p1.max; VAR_6 > VAR_0->p1.min; VAR_6--) {
   for (VAR_7 = VAR_0->p2.p2_fast+1; VAR_7 > 0; VAR_7--) {
    if (VAR_7 > 10)
     VAR_7 = VAR_7 - 1;
    VAR_22 = VAR_6 * VAR_7;

    for (VAR_8 = VAR_0->m1.min; VAR_8 <= VAR_0->m1.max; VAR_8++) {
     VAR_9 = (((2*(VAR_18 * VAR_22 * VAR_17 / VAR_8 )) +
            VAR_3) / (2*VAR_3));
     VAR_16 = VAR_8 * VAR_9;
     VAR_10 = VAR_19 * VAR_16;
     if (VAR_10 >= VAR_0->vco.min && VAR_10 < VAR_0->vco.max) {
      VAR_24 = 1000000 * ((VAR_10 / VAR_22) - VAR_18) / VAR_18;
      VAR_25 = (VAR_24 > 0) ? VAR_24 : (-VAR_24);
      if (VAR_25 < 100 && ((VAR_6 * VAR_7) > (VAR_14 * VAR_15))) {
       VAR_23 = 0;
       VAR_27 = 1;
      }
      if (VAR_25 < VAR_23 - 10) {
       VAR_23 = VAR_25;
       VAR_27 = 1;
      }
      if (VAR_27) {
       VAR_11 = VAR_17;
       VAR_12 = VAR_8;
       VAR_13 = VAR_9;
       VAR_14 = VAR_6;
       VAR_15 = VAR_7;
       VAR_27 = 0;
      }
     }
    }
   }
  }
 }
 VAR_5->n = VAR_11;
 VAR_5->m1 = VAR_12;
 VAR_5->m2 = VAR_13;
 VAR_5->p1 = VAR_14;
 VAR_5->p2 = VAR_15;

 return 1;
}
