
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_page_flip_state {int head; } ;
struct nouveau_fence_chan {int flip; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_drm {int device; struct drm_device* dev; } ;
struct nouveau_channel {struct nouveau_drm* drm; struct nouveau_fence_chan* fence; } ;
struct TYPE_3__ {int sync_obj; } ;
struct nouveau_bo {TYPE_1__ bo; } ;
struct drm_device {int event_lock; } ;
struct TYPE_4__ {scalar_t__ card_type; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_2 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_3 (struct nouveau_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct nouveau_channel*,int) ;
 int FUNC_5 (struct nouveau_channel*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_9 (int ,struct nouveau_channel*) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_13(struct nouveau_channel *VAR_5,
         struct nouveau_bo *VAR_6,
         struct nouveau_bo *VAR_7,
         struct nouveau_page_flip_state *VAR_8,
         struct nouveau_fence **VAR_9)
{
 struct nouveau_fence_chan *VAR_10 = VAR_5->fence;
 struct nouveau_drm *VAR_11 = VAR_5->drm;
 struct drm_device *VAR_12 = VAR_11->dev;
 unsigned long VAR_13;
 int VAR_14;


 FUNC_11(&VAR_12->event_lock, VAR_13);
 FUNC_6(&VAR_8->head, &VAR_10->flip);
 FUNC_12(&VAR_12->event_lock, VAR_13);


 VAR_14 = FUNC_9(VAR_6->bo.sync_obj, VAR_5);
 if (VAR_14)
  goto fail;


 VAR_14 = FUNC_5(VAR_5, 3);
 if (VAR_14)
  goto fail;

 if (FUNC_10(VAR_11->device)->card_type < VAR_2) {
  FUNC_1(VAR_5, VAR_4, VAR_3, 1);
  FUNC_4 (VAR_5, 0x00000000);
  FUNC_4 (VAR_5, 0x00000000);
 } else {
  FUNC_2(VAR_5, 0, VAR_0, 1);
  FUNC_4 (VAR_5, 0);
  FUNC_0(VAR_5, 0, VAR_1, 0x0000);
 }
 FUNC_3 (VAR_5);

 VAR_14 = FUNC_8(VAR_5, 0, VAR_9);
 if (VAR_14)
  goto fail;

 return 0;
fail:
 FUNC_11(&VAR_12->event_lock, VAR_13);
 FUNC_7(&VAR_8->head);
 FUNC_12(&VAR_12->event_lock, VAR_13);
 return VAR_14;
}
