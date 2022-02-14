
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {int dummy; } ;
struct TYPE_5__ {TYPE_3__* prev; } ;
struct TYPE_6__ {int* status_ptr; unsigned int event_wrap; int event_counter; TYPE_1__ tail; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_8__ {int wrap; int event; } ;
struct TYPE_7__ {struct drm_buf* buf; struct TYPE_7__* prev; struct TYPE_7__* next; TYPE_4__ age; } ;
typedef TYPE_3__ drm_savage_buf_priv_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,unsigned int) ;
 int FUNC_3 () ;

__attribute__((used)) static struct drm_buf *FUNC_4(struct drm_device * VAR_1)
{
 drm_savage_private_t *VAR_2 = VAR_1->dev_private;
 drm_savage_buf_priv_t *VAR_3 = VAR_2->tail.prev;
 uint16_t VAR_4;
 unsigned int VAR_5;
 FUNC_0("\n");

 FUNC_3();
 if (VAR_2->status_ptr)
  VAR_4 = VAR_2->status_ptr[1] & 0xffff;
 else
  VAR_4 = FUNC_1(VAR_0) & 0xffff;
 VAR_5 = VAR_2->event_wrap;
 if (VAR_4 > VAR_2->event_counter)
  VAR_5--;

 FUNC_0("   tail=0x%04x %d\n", VAR_3->age.event, VAR_3->age.wrap);
 FUNC_0("   head=0x%04x %d\n", VAR_4, VAR_5);

 if (VAR_3->buf && (FUNC_2(&VAR_3->age, VAR_4, VAR_5) || VAR_4 == 0)) {
  drm_savage_buf_priv_t *VAR_6 = VAR_3->next;
  drm_savage_buf_priv_t *VAR_7 = VAR_3->prev;
  VAR_7->next = VAR_6;
  VAR_6->prev = VAR_7;
  VAR_3->next = VAR_3->prev = ((void*)0);
  return VAR_3->buf;
 }

 FUNC_0("returning NULL, tail->buf=%p!\n", VAR_3->buf);
 return ((void*)0);
}
