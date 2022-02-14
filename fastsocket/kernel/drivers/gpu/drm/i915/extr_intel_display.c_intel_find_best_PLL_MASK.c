
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_19__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_18__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_17__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_16__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_15__ {int dot_limit; int p2_fast; int p2_slow; } ;
struct TYPE_20__ {TYPE_5__ p1; TYPE_4__ n; TYPE_3__ m2; TYPE_2__ m1; TYPE_1__ p2; } ;
typedef TYPE_6__ intel_limit_t ;
struct TYPE_21__ {scalar_t__ m1; scalar_t__ m2; scalar_t__ n; scalar_t__ p1; scalar_t__ p; scalar_t__ dot; int p2; } ;
typedef TYPE_7__ intel_clock_t ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_device*,TYPE_6__ const*,TYPE_7__*) ;
 int FUNC_3 (struct drm_device*,int,TYPE_7__*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_crtc*,int ) ;
 int FUNC_6 (TYPE_7__*,int ,int) ;

__attribute__((used)) static bool
FUNC_7(const intel_limit_t *VAR_1, struct drm_crtc *VAR_2,
      int VAR_3, int VAR_4, intel_clock_t *VAR_5,
      intel_clock_t *VAR_6)

{
 struct drm_device *VAR_7 = VAR_2->dev;
 intel_clock_t VAR_8;
 int VAR_9 = VAR_3;

 if (FUNC_5(VAR_2, VAR_0)) {





  if (FUNC_4(VAR_7))
   VAR_8.p2 = VAR_1->p2.p2_fast;
  else
   VAR_8.p2 = VAR_1->p2.p2_slow;
 } else {
  if (VAR_3 < VAR_1->p2.dot_limit)
   VAR_8.p2 = VAR_1->p2.p2_slow;
  else
   VAR_8.p2 = VAR_1->p2.p2_fast;
 }

 FUNC_6(VAR_6, 0, sizeof(*VAR_6));

 for (VAR_8.m1 = VAR_1->m1.min; VAR_8.m1 <= VAR_1->m1.max;
      VAR_8.m1++) {
  for (VAR_8.m2 = VAR_1->m2.min;
       VAR_8.m2 <= VAR_1->m2.max; VAR_8.m2++) {

   if (VAR_8.m2 >= VAR_8.m1 && !FUNC_0(VAR_7))
    break;
   for (VAR_8.n = VAR_1->n.min;
        VAR_8.n <= VAR_1->n.max; VAR_8.n++) {
    for (VAR_8.p1 = VAR_1->p1.min;
     VAR_8.p1 <= VAR_1->p1.max; VAR_8.p1++) {
     int VAR_10;

     FUNC_3(VAR_7, VAR_4, &VAR_8);
     if (!FUNC_2(VAR_7, VAR_1,
        &VAR_8))
      continue;
     if (VAR_5 &&
         VAR_8.p != VAR_5->p)
      continue;

     VAR_10 = FUNC_1(VAR_8.dot - VAR_3);
     if (VAR_10 < VAR_9) {
      *VAR_6 = VAR_8;
      VAR_9 = VAR_10;
     }
    }
   }
  }
 }

 return (VAR_9 != VAR_3);
}
