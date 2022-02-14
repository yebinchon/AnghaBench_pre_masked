
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_fifo {int uevent; } ;
struct TYPE_5__ {int func; } ;
struct nouveau_fence_uevent {TYPE_2__ handler; struct nouveau_fence_priv* priv; } ;
struct nouveau_fence_priv {int waiting; } ;
struct nouveau_fence {int timeout; struct nouveau_channel* channel; } ;
struct nouveau_channel {TYPE_1__* drm; } ;
struct TYPE_4__ {struct nouveau_fence_priv* fence; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (struct nouveau_fence*) ;
 int VAR_2 ;
 struct nouveau_fifo* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,unsigned long) ;
 int FUNC_10 (int ,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_fence *VAR_3, bool VAR_4)

{
 struct nouveau_channel *VAR_5 = VAR_3->channel;
 struct nouveau_fifo *VAR_6 = FUNC_3(VAR_5->drm->device);
 struct nouveau_fence_priv *VAR_7 = VAR_5->drm->fence;
 struct nouveau_fence_uevent VAR_8 = {
  .handler.func = VAR_2,
  .priv = VAR_7,
 };
 int VAR_9 = 0;

 FUNC_0(VAR_6->uevent, 0, &VAR_8.handler);

 if (VAR_3->timeout) {
  unsigned long VAR_10 = VAR_3->timeout - VAR_1;

  if (FUNC_5(VAR_1, VAR_3->timeout)) {
   if (VAR_4) {
    VAR_9 = FUNC_9(
      VAR_7->waiting,
      FUNC_2(VAR_3),
      VAR_10);
   } else {
    VAR_9 = FUNC_10(VAR_7->waiting,
      FUNC_2(VAR_3),
      VAR_10);
   }
  }

  if (VAR_9 >= 0) {
   VAR_3->timeout = VAR_1 + VAR_9;
   if (FUNC_4(VAR_1, VAR_3->timeout))
    VAR_9 = -VAR_0;
  }
 } else {
  if (VAR_4) {
   VAR_9 = FUNC_8(VAR_7->waiting,
     FUNC_2(VAR_3));
  } else {
   FUNC_7(VAR_7->waiting, FUNC_2(VAR_3));
  }
 }

 FUNC_1(VAR_6->uevent, 0, &VAR_8.handler);
 if (FUNC_6(VAR_9 < 0))
  return VAR_9;

 return 0;
}
