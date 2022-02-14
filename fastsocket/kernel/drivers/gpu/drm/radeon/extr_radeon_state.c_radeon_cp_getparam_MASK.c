
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_3__* dev_private; } ;
struct TYPE_7__ {int last_clear_reads; int last_frame_reads; } ;
struct TYPE_9__ {int gart_buffers_offset; int flags; int gart_vm_start; int ring_rptr_offset; int gart_textures_offset; int num_gb_pipes; int num_z_pipes; int writeback_works; TYPE_2__* mmio; TYPE_1__ stats; } ;
typedef TYPE_3__ drm_radeon_private_t ;
struct TYPE_10__ {int param; int value; } ;
typedef TYPE_4__ drm_radeon_getparam_t ;
struct TYPE_8__ {int offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_12, void *VAR_13, struct drm_file *VAR_14)
{
 drm_radeon_private_t *VAR_15 = VAR_12->dev_private;
 drm_radeon_getparam_t *VAR_16 = VAR_13;
 int VAR_17;

 FUNC_1("pid=%d\n", VAR_1);

 switch (VAR_16->param) {
 case 140:
  VAR_17 = VAR_15->gart_buffers_offset;
  break;
 case 135:
  VAR_15->stats.last_frame_reads++;
  VAR_17 = FUNC_3(VAR_15, 0);
  break;
 case 136:
  VAR_17 = FUNC_3(VAR_15, 1);
  break;
 case 137:
  VAR_15->stats.last_clear_reads++;
  VAR_17 = FUNC_3(VAR_15, 2);
  break;
 case 138:
  if ((VAR_15->flags & VAR_8) >= VAR_0)
   VAR_17 = 0;
  else
   VAR_17 = FUNC_4(VAR_12);
  break;
 case 141:
  VAR_17 = VAR_15->gart_vm_start;
  break;
 case 132:
  VAR_17 = VAR_15->mmio->offset;
  break;
 case 129:
  VAR_17 = VAR_15->ring_rptr_offset;
  break;
 case 139:
  VAR_17 = VAR_15->gart_textures_offset;
  break;
 case 130:
  if (!VAR_15->writeback_works)
   return -VAR_3;
  if ((VAR_15->flags & VAR_8) >= VAR_0)
   VAR_17 = VAR_4;
  else
   VAR_17 = VAR_11;
  break;
 case 143:
  if (VAR_15->flags & VAR_10)
   VAR_17 = VAR_7;
  else if (VAR_15->flags & VAR_9)
   VAR_17 = VAR_5;
  else
   VAR_17 = VAR_6;
  break;
 case 128:
  VAR_17 = FUNC_6(VAR_12);
  break;
 case 142:
  VAR_17 = FUNC_5(VAR_15);
  break;
 case 134:
  VAR_17 = VAR_15->num_gb_pipes;
  break;
 case 133:
  VAR_17 = VAR_15->num_z_pipes;
  break;
 default:
  FUNC_1("Invalid parameter %d\n", VAR_16->param);
  return -VAR_3;
 }

 if (FUNC_0(VAR_16->value, &VAR_17, sizeof(int))) {
  FUNC_2("copy_to_user\n");
  return -VAR_2;
 }

 return 0;
}
