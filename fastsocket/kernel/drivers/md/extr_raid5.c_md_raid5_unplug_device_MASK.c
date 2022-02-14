
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* mddev; int device_lock; int seq_flush; int plug; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct r5conf *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->device_lock, VAR_1);

 if (FUNC_1(&VAR_0->plug)) {
  VAR_0->seq_flush++;
  FUNC_2(VAR_0);
 }
 FUNC_0(VAR_0->mddev->thread);

 FUNC_4(&VAR_0->device_lock, VAR_1);

 FUNC_5(VAR_0->mddev);
}
