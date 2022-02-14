
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u16_t ;
struct zsQueueCell {int dummy; } ;
struct zsQueue {int size; } ;


 int FUNC_0 (int *,struct zsQueue*) ;
 int FUNC_1 (int *,struct zsQueue*,int) ;

void FUNC_2(zdev_t* VAR_0, struct zsQueue* VAR_1)
{
    u16_t VAR_2 = sizeof(struct zsQueue) + (sizeof(struct zsQueueCell)*(VAR_1->size-1));

    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, VAR_1, VAR_2);

    return;
}
