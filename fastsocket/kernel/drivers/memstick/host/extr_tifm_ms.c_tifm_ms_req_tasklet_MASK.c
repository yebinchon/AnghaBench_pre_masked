
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_ms {TYPE_1__* req; scalar_t__ eject; struct tifm_dev* dev; } ;
struct tifm_dev {int lock; } ;
struct memstick_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct memstick_host*,TYPE_1__**) ;
 struct tifm_ms* FUNC_1 (struct memstick_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct tifm_ms*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct memstick_host *VAR_2 = (struct memstick_host *)VAR_1;
 struct tifm_ms *VAR_3 = FUNC_1(VAR_2);
 struct tifm_dev *VAR_4 = VAR_3->dev;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4->lock, VAR_5);
 if (!VAR_3->req) {
  if (VAR_3->eject) {
   do {
    VAR_6 = FUNC_0(VAR_2, &VAR_3->req);
    if (!VAR_6)
     VAR_3->req->error = -VAR_0;
   } while (!VAR_6);
   FUNC_3(&VAR_4->lock, VAR_5);
   return;
  }

  do {
   VAR_6 = FUNC_0(VAR_2, &VAR_3->req);
  } while (!VAR_6 && FUNC_4(VAR_3));
 }
 FUNC_3(&VAR_4->lock, VAR_5);
}
