
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv10_fence_priv {int sequence; int lock; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_channel {TYPE_2__* cli; TYPE_1__* drm; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {struct nv10_fence_priv* fence; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct nouveau_fence *VAR_3,
  struct nouveau_channel *VAR_4, struct nouveau_channel *VAR_5)
{
 struct nv10_fence_priv *VAR_6 = VAR_5->drm->fence;
 u32 VAR_7;
 int VAR_8;

 if (!FUNC_4(&VAR_4->cli->mutex))
  return -VAR_0;

 FUNC_6(&VAR_6->lock);
 VAR_7 = VAR_6->sequence;
 VAR_6->sequence += 2;
 FUNC_7(&VAR_6->lock);

 VAR_8 = FUNC_3(VAR_4, 5);
 if (!VAR_8) {
  FUNC_0(VAR_4, 0, VAR_1, 4);
  FUNC_2 (VAR_4, VAR_2);
  FUNC_2 (VAR_4, 0);
  FUNC_2 (VAR_4, VAR_7 + 0);
  FUNC_2 (VAR_4, VAR_7 + 1);
  FUNC_1 (VAR_4);
 }

 if (!VAR_8 && !(VAR_8 = FUNC_3(VAR_5, 5))) {
  FUNC_0(VAR_5, 0, VAR_1, 4);
  FUNC_2 (VAR_5, VAR_2);
  FUNC_2 (VAR_5, 0);
  FUNC_2 (VAR_5, VAR_7 + 1);
  FUNC_2 (VAR_5, VAR_7 + 2);
  FUNC_1 (VAR_5);
 }

 FUNC_5(&VAR_4->cli->mutex);
 return 0;
}
