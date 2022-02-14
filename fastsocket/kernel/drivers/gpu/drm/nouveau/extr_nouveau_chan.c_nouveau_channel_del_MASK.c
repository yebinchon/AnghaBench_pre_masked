
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_7__ {TYPE_3__* buffer; int vma; int handle; } ;
struct nouveau_channel {TYPE_1__ push; int handle; int drm; scalar_t__ fence; int cli; } ;
struct TYPE_9__ {scalar_t__ pin_refcnt; } ;
struct TYPE_8__ {int (* context_del ) (struct nouveau_channel*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_channel*) ;
 int FUNC_1 (int *,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (struct nouveau_channel*) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (struct nouveau_object*,int ,int ) ;
 struct nouveau_object* FUNC_8 (int ) ;
 int FUNC_9 (struct nouveau_channel*) ;

void
FUNC_10(struct nouveau_channel **VAR_1)
{
 struct nouveau_channel *VAR_2 = *VAR_1;
 if (VAR_2) {
  struct nouveau_object *VAR_3 = FUNC_8(VAR_2->cli);
  if (VAR_2->fence) {
   FUNC_5(VAR_2);
   FUNC_6(VAR_2->drm)->context_del(VAR_2);
  }
  FUNC_7(VAR_3, VAR_0, VAR_2->handle);
  FUNC_7(VAR_3, VAR_0, VAR_2->push.handle);
  FUNC_4(VAR_2->push.buffer, &VAR_2->push.vma);
  FUNC_2(VAR_2->push.buffer);
  if (VAR_2->push.buffer && VAR_2->push.buffer->pin_refcnt)
   FUNC_3(VAR_2->push.buffer);
  FUNC_1(((void*)0), &VAR_2->push.buffer);
  FUNC_0(VAR_2);
 }
 *VAR_1 = ((void*)0);
}
