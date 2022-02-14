
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {TYPE_3__* dev_private; } ;
struct TYPE_4__ {int wrap; int event; } ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; TYPE_1__ age; } ;
struct TYPE_5__ {TYPE_3__ head; } ;
typedef TYPE_2__ drm_savage_private_t ;
typedef TYPE_3__ drm_savage_buf_priv_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct drm_device * VAR_0, struct drm_buf * VAR_1)
{
 drm_savage_private_t *VAR_2 = VAR_0->dev_private;
 drm_savage_buf_priv_t *VAR_3 = VAR_1->dev_private, *VAR_4, *VAR_5;

 FUNC_0("age=0x%04x wrap=%d\n", VAR_3->age.event, VAR_3->age.wrap);

 if (VAR_3->next != ((void*)0) || VAR_3->prev != ((void*)0)) {
  FUNC_1("entry already on freelist.\n");
  return;
 }

 VAR_4 = &VAR_2->head;
 VAR_5 = VAR_4->next;
 VAR_4->next = VAR_3;
 VAR_5->prev = VAR_3;
 VAR_3->prev = VAR_4;
 VAR_3->next = VAR_5;
}
