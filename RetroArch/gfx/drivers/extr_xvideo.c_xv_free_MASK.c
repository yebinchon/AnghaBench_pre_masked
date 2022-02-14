
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int shmid; int shmaddr; } ;
struct TYPE_6__ {scalar_t__ font; TYPE_1__* font_driver; struct TYPE_6__* vtable; struct TYPE_6__* utable; struct TYPE_6__* ytable; int image; TYPE_4__ shminfo; } ;
typedef TYPE_2__ xv_t ;
struct TYPE_5__ {int (* free ) (scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void *VAR_2)
{
   xv_t *VAR_3 = (xv_t*)VAR_2;

   if (!VAR_3)
      return;

   FUNC_8();

   FUNC_2(VAR_1, &VAR_3->shminfo);
   FUNC_5(VAR_3->shminfo.shmaddr);
   FUNC_4(VAR_3->shminfo.shmid, VAR_0, ((void*)0));
   FUNC_1(VAR_3->image);

   FUNC_9(1);
   FUNC_7();

   FUNC_0(VAR_1);

   FUNC_3(VAR_3->ytable);
   FUNC_3(VAR_3->utable);
   FUNC_3(VAR_3->vtable);

   if (VAR_3->font)
      VAR_3->font_driver->free(VAR_3->font);

   FUNC_3(VAR_3);
}
