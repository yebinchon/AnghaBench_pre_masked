
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int (* add_request ) (struct intel_ring_buffer*) ;scalar_t__ outstanding_lazy_request; int request_list; TYPE_1__* dev; } ;
struct drm_i915_gem_request {int seqno; int client_list; struct drm_i915_file_private* file_priv; int list; scalar_t__ emitted_jiffies; int tail; struct intel_ring_buffer* ring; } ;
struct TYPE_7__ {int lock; int request_list; } ;
struct drm_i915_file_private {TYPE_2__ mm; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct TYPE_9__ {int retire_work; int suspended; } ;
struct TYPE_8__ {int hangcheck_timer; } ;
struct TYPE_10__ {int dev; TYPE_4__ mm; int wq; TYPE_3__ gpu_error; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_6__ {TYPE_5__* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct drm_i915_gem_request*) ;
 struct drm_i915_gem_request* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct intel_ring_buffer*) ;
 int FUNC_15 (struct intel_ring_buffer*,int ) ;

int
FUNC_16(struct intel_ring_buffer *VAR_6,
   struct drm_file *VAR_7,
   u32 *VAR_8)
{
 drm_i915_private_t *VAR_9 = VAR_6->dev->dev_private;
 struct drm_i915_gem_request *VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;
 VAR_13 = FUNC_1(VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;







 VAR_11 = FUNC_3(VAR_6);

 VAR_13 = VAR_6->add_request(VAR_6);
 if (VAR_13) {
  FUNC_4(VAR_10);
  return VAR_13;
 }

 VAR_10->seqno = FUNC_2(VAR_6);
 VAR_10->ring = VAR_6;
 VAR_10->tail = VAR_11;
 VAR_10->emitted_jiffies = VAR_5;
 VAR_12 = FUNC_7(&VAR_6->request_list);
 FUNC_6(&VAR_10->list, &VAR_6->request_list);
 VAR_10->file_priv = ((void*)0);

 if (VAR_7) {
  struct drm_i915_file_private *VAR_14 = VAR_7->driver_priv;

  FUNC_12(&VAR_14->mm.lock);
  VAR_10->file_priv = VAR_14;
  FUNC_6(&VAR_10->client_list,
         &VAR_14->mm.request_list);
  FUNC_13(&VAR_14->mm.lock);
 }

 FUNC_15(VAR_6, VAR_10->seqno);
 VAR_6->outstanding_lazy_request = 0;

 if (!VAR_9->mm.suspended) {
  if (VAR_4) {
   FUNC_8(&VAR_9->gpu_error.hangcheck_timer,
      FUNC_10(VAR_5 + VAR_0));
  }
  if (VAR_12) {
   FUNC_9(VAR_9->wq,
        &VAR_9->mm.retire_work,
        FUNC_11(VAR_3));
   FUNC_0(VAR_9->dev);
  }
 }

 if (VAR_8)
  *VAR_8 = VAR_10->seqno;
 return 0;
}
