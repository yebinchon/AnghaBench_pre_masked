
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct intel_sdvo_enhancements_reply {scalar_t__ dot_crawl; scalar_t__ overscan_v; scalar_t__ overscan_h; } ;
struct drm_connector {int base; } ;
struct TYPE_6__ {struct drm_connector base; } ;
struct intel_sdvo_connector {int max_hscan; int left_margin; int right_margin; int max_vscan; int top_margin; int bottom_margin; int max_dot_crawl; int cur_dot_crawl; void* dot_crawl; void* bottom; void* top; void* right; void* left; TYPE_3__ base; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int *,void*,int) ;
 void* FUNC_3 (struct drm_device*,int ,char*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct intel_sdvo*,int ,...) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static bool
FUNC_5(struct intel_sdvo *VAR_29,
          struct intel_sdvo_connector *VAR_30,
          struct intel_sdvo_enhancements_reply VAR_31)
{
 struct drm_device *VAR_32 = VAR_29->base.base.dev;
 struct drm_connector *VAR_33 = &VAR_30->base.base;
 uint16_t VAR_34, VAR_35[2];


 if (VAR_31.overscan_h) {
  if (!FUNC_4(VAR_29,
       VAR_9,
       &VAR_35, 4))
   return 0;

  if (!FUNC_4(VAR_29,
       VAR_11,
       &VAR_34, 2))
   return 0;

  VAR_30->max_hscan = VAR_35[0];
  VAR_30->left_margin = VAR_35[0] - VAR_34;
  VAR_30->right_margin = VAR_30->left_margin;
  VAR_30->left =
   FUNC_3(VAR_32, 0, "left_margin", 0, VAR_35[0]);
  if (!VAR_30->left)
   return 0;

  FUNC_2(&VAR_33->base,
           VAR_30->left,
           VAR_30->left_margin);

  VAR_30->right =
   FUNC_3(VAR_32, 0, "right_margin", 0, VAR_35[0]);
  if (!VAR_30->right)
   return 0;

  FUNC_2(&VAR_33->base,
           VAR_30->right,
           VAR_30->right_margin);
  FUNC_0("h_overscan: max %d, "
         "default %d, current %d\n",
         VAR_35[0], VAR_35[1], VAR_34);
 }

 if (VAR_31.overscan_v) {
  if (!FUNC_4(VAR_29,
       VAR_10,
       &VAR_35, 4))
   return 0;

  if (!FUNC_4(VAR_29,
       VAR_12,
       &VAR_34, 2))
   return 0;

  VAR_30->max_vscan = VAR_35[0];
  VAR_30->top_margin = VAR_35[0] - VAR_34;
  VAR_30->bottom_margin = VAR_30->top_margin;
  VAR_30->top =
   FUNC_3(VAR_32, 0,
         "top_margin", 0, VAR_35[0]);
  if (!VAR_30->top)
   return 0;

  FUNC_2(&VAR_33->base,
           VAR_30->top,
           VAR_30->top_margin);

  VAR_30->bottom =
   FUNC_3(VAR_32, 0,
         "bottom_margin", 0, VAR_35[0]);
  if (!VAR_30->bottom)
   return 0;

  FUNC_2(&VAR_33->base,
           VAR_30->bottom,
           VAR_30->bottom_margin);
  FUNC_0("v_overscan: max %d, "
         "default %d, current %d\n",
         VAR_35[0], VAR_35[1], VAR_34);
 }

 FUNC_1(VAR_22, VAR_5);
 FUNC_1(VAR_28, VAR_16);
 FUNC_1(VAR_24, VAR_7);
 FUNC_1(VAR_18, VAR_1);
 FUNC_1(VAR_23, VAR_6);
 FUNC_1(VAR_25, VAR_13);
 FUNC_1(VAR_17, VAR_0);
 FUNC_1(VAR_19, VAR_2);
 FUNC_1(VAR_21, VAR_4);
 FUNC_1(VAR_20, VAR_3);
 FUNC_1(VAR_26, VAR_14);
 FUNC_1(VAR_27, VAR_15);

 if (VAR_31.dot_crawl) {
  if (!FUNC_4(VAR_29, VAR_8, &VAR_34, 2))
   return 0;

  VAR_30->max_dot_crawl = 1;
  VAR_30->cur_dot_crawl = VAR_34 & 0x1;
  VAR_30->dot_crawl =
   FUNC_3(VAR_32, 0, "dot_crawl", 0, 1);
  if (!VAR_30->dot_crawl)
   return 0;

  FUNC_2(&VAR_33->base,
           VAR_30->dot_crawl,
           VAR_30->cur_dot_crawl);
  FUNC_0("dot crawl: current %d\n", VAR_34);
 }

 return 1;
}
