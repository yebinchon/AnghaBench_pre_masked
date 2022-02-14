
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv84_fence_priv {int * suspend; int bo; } ;
struct nouveau_fifo {int max; } ;
struct nouveau_drm {struct nv84_fence_priv* fence; int device; } ;


 int FUNC_0 (int ,int,int ) ;
 struct nouveau_fifo* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_drm *VAR_0)
{
 struct nouveau_fifo *VAR_1 = FUNC_1(VAR_0->device);
 struct nv84_fence_priv *VAR_2 = VAR_0->fence;
 int VAR_3;

 if (VAR_2->suspend) {
  for (VAR_3 = 0; VAR_3 <= VAR_1->max; VAR_3++)
   FUNC_0(VAR_2->bo, VAR_3*4, VAR_2->suspend[VAR_3]);
  FUNC_2(VAR_2->suspend);
  VAR_2->suspend = ((void*)0);
 }
}
