
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct drm_file {TYPE_1__* master; } ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {TYPE_2__* dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {struct drm_file* file_priv; TYPE_3__* dev_private; } ;
struct TYPE_8__ {int event_wrap; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_9__ {int age; int * prev; int * next; } ;
typedef TYPE_3__ drm_savage_buf_priv_t ;
struct TYPE_10__ {scalar_t__ hw_lock; } ;
struct TYPE_7__ {TYPE_5__ lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct drm_device*,struct drm_buf*) ;

void FUNC_6(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct drm_device_dma *VAR_3 = VAR_1->dma;
 drm_savage_private_t *VAR_4 = VAR_1->dev_private;
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_3)
  return;
 if (!VAR_4)
  return;
 if (!VAR_3->buflist)
  return;

 if (VAR_2->master && VAR_2->master->lock.hw_lock) {
  FUNC_3(&VAR_2->master->lock);
  VAR_5 = 1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->buf_count; VAR_6++) {
  struct drm_buf *VAR_7 = VAR_3->buflist[VAR_6];
  drm_savage_buf_priv_t *VAR_8 = VAR_7->dev_private;

  if (VAR_7->file_priv == VAR_2 && VAR_8 &&
      VAR_8->next == ((void*)0) && VAR_8->prev == ((void*)0)) {
   uint16_t VAR_9;
   FUNC_0("reclaimed from client\n");
   VAR_9 = FUNC_4(VAR_4, VAR_0);
   FUNC_1(&VAR_8->age, VAR_9, VAR_4->event_wrap);
   FUNC_5(VAR_1, VAR_7);
  }
 }

 if (VAR_5)
  FUNC_2(&VAR_2->master->lock);
}
