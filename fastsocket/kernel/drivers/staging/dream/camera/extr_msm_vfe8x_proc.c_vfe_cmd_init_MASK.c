
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vfe_frame_extra {int dummy; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int name; } ;
struct msm_vfe_callback {scalar_t__ vfe_resp; } ;
struct msm_vfe8x_ctrl {int dummy; } ;
struct TYPE_4__ {int extlen; int vfebase; scalar_t__ vfeirq; void* syncdata; int tasklet_q; int tasklet_lock; int io_lock; int state_lock; int ack_lock; int extdata; struct msm_vfe_callback* resp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,int ) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ,char*,int ) ;
 struct resource* FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int *) ;
 int VAR_9 ;

int FUNC_15(struct msm_vfe_callback *VAR_10,
 struct platform_device *VAR_11, void *VAR_12)
{
 struct resource *VAR_13, *VAR_14, *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_9(VAR_11, VAR_6, 0);
 if (!VAR_13) {
  FUNC_0("no mem resource?\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_9(VAR_11, VAR_5, 0);
 if (!VAR_14) {
  FUNC_0("no irq resource?\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_12(VAR_13->start,
  FUNC_13(VAR_13), VAR_11->name);
 if (!VAR_15) {
  FUNC_0("VFE region already claimed\n");
  return -VAR_0;
 }

 VAR_8 =
 FUNC_8(sizeof(struct msm_vfe8x_ctrl), VAR_4);
 if (!VAR_8) {
  VAR_16 = -VAR_3;
  goto cmd_init_failed1;
 }

 VAR_8->vfeirq = VAR_14->start;

 VAR_8->vfebase =
  FUNC_4(VAR_13->start, (VAR_13->end - VAR_13->start) + 1);
 if (!VAR_8->vfebase) {
  VAR_16 = -VAR_3;
  goto cmd_init_failed2;
 }

 VAR_16 = FUNC_11(VAR_8->vfeirq, VAR_9,
  VAR_7, "vfe", 0);
 if (VAR_16 < 0)
  goto cmd_init_failed2;

 if (VAR_10 && VAR_10->vfe_resp)
  VAR_8->resp = VAR_10;
 else {
  VAR_16 = -VAR_1;
  goto cmd_init_failed3;
 }

 VAR_8->extdata =
  FUNC_7(sizeof(struct vfe_frame_extra), VAR_4);
 if (!VAR_8->extdata) {
  VAR_16 = -VAR_3;
  goto cmd_init_failed3;
 }

 FUNC_14(&VAR_8->ack_lock);
 FUNC_14(&VAR_8->state_lock);
 FUNC_14(&VAR_8->io_lock);

 VAR_8->extlen = sizeof(struct vfe_frame_extra);

 FUNC_14(&VAR_8->tasklet_lock);
 FUNC_1(&VAR_8->tasklet_q);

 VAR_8->syncdata = VAR_12;
 return 0;

cmd_init_failed3:
 FUNC_2(VAR_8->vfeirq);
 FUNC_3(VAR_8->vfeirq, 0);
 FUNC_5(VAR_8->vfebase);
cmd_init_failed2:
 FUNC_6(VAR_8);
cmd_init_failed1:
 FUNC_10(VAR_13->start, (VAR_13->end - VAR_13->start) + 1);
 return VAR_16;
}
