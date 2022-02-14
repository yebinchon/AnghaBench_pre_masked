
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence_priv {scalar_t__ uevent; } ;
struct nouveau_fence {scalar_t__ timeout; struct nouveau_channel* channel; } ;
struct nouveau_channel {TYPE_1__* drm; } ;
typedef int ktime_t ;
struct TYPE_2__ {struct nouveau_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct nouveau_fence*) ;
 int FUNC_3 (struct nouveau_fence*,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;

int
FUNC_7(struct nouveau_fence *VAR_9, bool VAR_10, bool VAR_11)
{
 struct nouveau_channel *VAR_12 = VAR_9->channel;
 struct nouveau_fence_priv *VAR_13 = VAR_12 ? VAR_12->drm->fence : ((void*)0);
 unsigned long VAR_14 = VAR_3 / 1000;
 ktime_t VAR_15;
 int VAR_16 = 0;

 while (VAR_13 && VAR_13->uevent && VAR_10 && !FUNC_2(VAR_9)) {
  VAR_16 = FUNC_3(VAR_9, VAR_11);
  if (VAR_16 < 0)
   return VAR_16;
 }

 while (!FUNC_2(VAR_9)) {
  if (VAR_9->timeout && FUNC_6(VAR_8, VAR_9->timeout)) {
   VAR_16 = -VAR_0;
   break;
  }

  FUNC_0(VAR_11 ? VAR_4 :
        VAR_6);
  if (VAR_10) {
   VAR_15 = FUNC_1(0, VAR_14);
   FUNC_4(&VAR_15, VAR_2);
   VAR_14 *= 2;
   if (VAR_14 > VAR_3)
    VAR_14 = VAR_3;
  }

  if (VAR_11 && FUNC_5(VAR_7)) {
   VAR_16 = -VAR_1;
   break;
  }
 }

 FUNC_0(VAR_5);
 return VAR_16;
}
