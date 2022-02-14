
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
struct TYPE_19__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_18__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_17__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_16__ {int max; int min; } ;
struct TYPE_15__ {int dot_limit; int p2_fast; int p2_slow; } ;
struct TYPE_20__ {TYPE_5__ p1; TYPE_4__ m2; TYPE_3__ m1; TYPE_2__ n; TYPE_1__ p2; } ;
typedef TYPE_6__ intel_limit_t ;
struct TYPE_21__ {int n; scalar_t__ m1; scalar_t__ m2; scalar_t__ p1; scalar_t__ p; scalar_t__ dot; int p2; } ;
typedef TYPE_7__ intel_clock_t ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_device*,TYPE_6__ const*,TYPE_7__*) ;
 int FUNC_3 (struct drm_device*,int,TYPE_7__*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_crtc*,int ) ;
 int FUNC_6 (TYPE_7__*,int ,int) ;

__attribute__((used)) static bool
FUNC_7(const intel_limit_t *VAR_3, struct drm_crtc *VAR_4,
   int VAR_5, int VAR_6, intel_clock_t *VAR_7,
   intel_clock_t *VAR_8)
{
 struct drm_device *VAR_9 = VAR_4->dev;
 intel_clock_t VAR_10;
 int VAR_11;
 bool VAR_12;

 int VAR_13 = (VAR_5 >> 8) + (VAR_5 >> 9);
 VAR_12 = 0;

 if (FUNC_5(VAR_4, VAR_0)) {
  int VAR_14;

  if (FUNC_0(VAR_9))
   VAR_14 = VAR_2;
  else
   VAR_14 = VAR_1;
  if (FUNC_4(VAR_9))
   VAR_10.p2 = VAR_3->p2.p2_fast;
  else
   VAR_10.p2 = VAR_3->p2.p2_slow;
 } else {
  if (VAR_5 < VAR_3->p2.dot_limit)
   VAR_10.p2 = VAR_3->p2.p2_slow;
  else
   VAR_10.p2 = VAR_3->p2.p2_fast;
 }

 FUNC_6(VAR_8, 0, sizeof(*VAR_8));
 VAR_11 = VAR_3->n.max;

 for (VAR_10.n = VAR_3->n.min; VAR_10.n <= VAR_11; VAR_10.n++) {

  for (VAR_10.m1 = VAR_3->m1.max;
       VAR_10.m1 >= VAR_3->m1.min; VAR_10.m1--) {
   for (VAR_10.m2 = VAR_3->m2.max;
        VAR_10.m2 >= VAR_3->m2.min; VAR_10.m2--) {
    for (VAR_10.p1 = VAR_3->p1.max;
         VAR_10.p1 >= VAR_3->p1.min; VAR_10.p1--) {
     int VAR_15;

     FUNC_3(VAR_9, VAR_6, &VAR_10);
     if (!FUNC_2(VAR_9, VAR_3,
        &VAR_10))
      continue;
     if (VAR_7 &&
         VAR_10.p != VAR_7->p)
      continue;

     VAR_15 = FUNC_1(VAR_10.dot - VAR_5);
     if (VAR_15 < VAR_13) {
      *VAR_8 = VAR_10;
      VAR_13 = VAR_15;
      VAR_11 = VAR_10.n;
      VAR_12 = 1;
     }
    }
   }
  }
 }
 return VAR_12;
}
