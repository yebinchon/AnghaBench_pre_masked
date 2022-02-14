
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct mddev {TYPE_2__* thread; TYPE_1__ bitmap_info; struct bitmap* bitmap; } ;
struct bitmap {scalar_t__ sysfs_can_clear; } ;
struct TYPE_4__ {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct mddev *VAR_1)
{
 struct bitmap *VAR_2 = VAR_1->bitmap;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_1->bitmap_info.mutex);
 VAR_1->bitmap = ((void*)0);
 FUNC_2(&VAR_1->bitmap_info.mutex);
 if (VAR_1->thread)
  VAR_1->thread->timeout = VAR_0;

 if (VAR_2->sysfs_can_clear)
  FUNC_3(VAR_2->sysfs_can_clear);

 FUNC_0(VAR_2);
}
