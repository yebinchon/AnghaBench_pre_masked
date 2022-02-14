
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edp_power_seq {int dummy; } ;
struct edp_link_params {int lanes; int preemphasis; int vswing; scalar_t__ rate; } ;
struct TYPE_2__ {int bpp; int lanes; int vswing; int preemphasis; int rate; struct edp_power_seq pps; scalar_t__ support; } ;
struct drm_i915_private {TYPE_1__ edp; int dev; } ;
struct bdb_header {int dummy; } ;
struct bdb_edp {int color_depth; struct edp_link_params* link_params; struct edp_power_seq* power_seqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;



 scalar_t__ FUNC_1 (int ) ;
 struct bdb_edp* FUNC_2 (struct bdb_header*,int ) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_12, struct bdb_header *VAR_13)
{
 struct bdb_edp *VAR_14;
 struct edp_power_seq *VAR_15;
 struct edp_link_params *VAR_16;

 VAR_14 = FUNC_2(VAR_13, VAR_0);
 if (!VAR_14) {
  if (FUNC_1(VAR_12->dev) && VAR_12->edp.support)
   FUNC_0("No eDP BDB found but eDP panel supported.\n");
  return;
 }

 switch ((VAR_14->color_depth >> (VAR_11 * 2)) & 3) {
 case 130:
  VAR_12->edp.bpp = 18;
  break;
 case 129:
  VAR_12->edp.bpp = 24;
  break;
 case 128:
  VAR_12->edp.bpp = 30;
  break;
 }


 VAR_15 = &VAR_14->power_seqs[VAR_11];
 VAR_16 = &VAR_14->link_params[VAR_11];

 VAR_12->edp.pps = *VAR_15;

 VAR_12->edp.rate = VAR_16->rate ? VAR_2 :
  VAR_1;
 switch (VAR_16->lanes) {
 case 0:
  VAR_12->edp.lanes = 1;
  break;
 case 1:
  VAR_12->edp.lanes = 2;
  break;
 case 3:
 default:
  VAR_12->edp.lanes = 4;
  break;
 }
 switch (VAR_16->preemphasis) {
 case 0:
  VAR_12->edp.preemphasis = VAR_3;
  break;
 case 1:
  VAR_12->edp.preemphasis = VAR_4;
  break;
 case 2:
  VAR_12->edp.preemphasis = VAR_5;
  break;
 case 3:
  VAR_12->edp.preemphasis = VAR_6;
  break;
 }
 switch (VAR_16->vswing) {
 case 0:
  VAR_12->edp.vswing = VAR_8;
  break;
 case 1:
  VAR_12->edp.vswing = VAR_9;
  break;
 case 2:
  VAR_12->edp.vswing = VAR_10;
  break;
 case 3:
  VAR_12->edp.vswing = VAR_7;
  break;
 }
}
