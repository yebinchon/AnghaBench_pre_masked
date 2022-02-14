
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {int used; scalar_t__ pending; struct drm_file* file_priv; TYPE_2__* dev_private; } ;
struct TYPE_3__ {size_t idx; scalar_t__ prim; int discard; int count; } ;
typedef TYPE_1__ drm_r128_vertex_t ;
typedef int drm_r128_private_t ;
struct TYPE_4__ {size_t prim; int discard; } ;
typedef TYPE_2__ drm_r128_buf_priv_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,size_t,int ,int ) ;
 int FUNC_3 (char*,size_t,...) ;
 int VAR_1 ;
 int FUNC_4 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,struct drm_buf*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_r128_private_t *VAR_6 = VAR_3->dev_private;
 struct drm_device_dma *VAR_7 = VAR_3->dma;
 struct drm_buf *VAR_8;
 drm_r128_buf_priv_t *VAR_9;
 drm_r128_vertex_t *VAR_10 = VAR_4;

 FUNC_4(VAR_3, VAR_5);

 FUNC_1(VAR_6);

 FUNC_2("pid=%d index=%d count=%d discard=%d\n",
    VAR_0, VAR_10->idx, VAR_10->count, VAR_10->discard);

 if (VAR_10->idx < 0 || VAR_10->idx >= VAR_7->buf_count) {
  FUNC_3("buffer index %d (of %d max)\n",
     VAR_10->idx, VAR_7->buf_count - 1);
  return -VAR_1;
 }
 if (VAR_10->prim < 0 ||
     VAR_10->prim > VAR_2) {
  FUNC_3("buffer prim %d\n", VAR_10->prim);
  return -VAR_1;
 }

 FUNC_5(VAR_6);
 FUNC_6(VAR_6);

 VAR_8 = VAR_7->buflist[VAR_10->idx];
 VAR_9 = VAR_8->dev_private;

 if (VAR_8->file_priv != VAR_5) {
  FUNC_3("process %d using buffer owned by %p\n",
     VAR_0, VAR_8->file_priv);
  return -VAR_1;
 }
 if (VAR_8->pending) {
  FUNC_3("sending pending buffer %d\n", VAR_10->idx);
  return -VAR_1;
 }

 VAR_8->used = VAR_10->count;
 VAR_9->prim = VAR_10->prim;
 VAR_9->discard = VAR_10->discard;

 FUNC_7(VAR_3, VAR_8);

 FUNC_0();
 return 0;
}
