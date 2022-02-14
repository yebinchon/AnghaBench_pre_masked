
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device {TYPE_3__* dev_private; } ;
struct drm_buf {int dummy; } ;
struct TYPE_9__ {TYPE_4__* tail; TYPE_2__* primary; TYPE_1__* sarea_priv; } ;
typedef TYPE_3__ drm_mga_private_t ;
struct TYPE_11__ {int wrap; scalar_t__ head; } ;
struct TYPE_10__ {struct drm_buf* buf; TYPE_5__ age; int * next; struct TYPE_10__* prev; } ;
typedef TYPE_4__ drm_mga_freelist_t ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_7__ {scalar_t__ last_wrap; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct drm_buf *FUNC_4(struct drm_device * VAR_2)
{
 drm_mga_private_t *VAR_3 = VAR_2->dev_private;
 drm_mga_freelist_t *VAR_4;
 drm_mga_freelist_t *VAR_5;
 drm_mga_freelist_t *VAR_6 = VAR_3->tail;
 u32 VAR_7, VAR_8;
 FUNC_0("\n");

 VAR_7 = FUNC_1(VAR_1);
 VAR_8 = VAR_3->sarea_priv->last_wrap;

 FUNC_0("   tail=0x%06lx %d\n",
    VAR_6->age.head ?
    (unsigned long)(VAR_6->age.head - VAR_3->primary->offset) : 0,
    VAR_6->age.wrap);
 FUNC_0("   head=0x%06lx %d\n",
    (unsigned long)(VAR_7 - VAR_3->primary->offset), VAR_8);

 if (FUNC_3(&VAR_6->age, VAR_7, VAR_8)) {
  VAR_5 = VAR_3->tail->prev;
  VAR_4 = VAR_3->tail;
  VAR_5->next = ((void*)0);
  VAR_4->prev = VAR_4->next = ((void*)0);
  VAR_3->tail = VAR_5;
  FUNC_2(&VAR_4->age, VAR_0, 0);
  return VAR_4->buf;
 }

 FUNC_0("returning NULL!\n");
 return ((void*)0);
}
