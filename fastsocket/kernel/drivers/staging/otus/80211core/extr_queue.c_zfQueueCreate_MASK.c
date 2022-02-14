
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u16_t ;
struct zsQueueCell {int dummy; } ;
struct zsQueue {int size; int sizeMask; scalar_t__ tail; scalar_t__ head; } ;


 scalar_t__ FUNC_0 (int *,int) ;

struct zsQueue* FUNC_1(zdev_t* VAR_0, u16_t VAR_1)
{
    struct zsQueue* VAR_2;

    if ((VAR_2 = (struct zsQueue*)FUNC_0(VAR_0, sizeof(struct zsQueue)
            + (sizeof(struct zsQueueCell)*(VAR_1-1)))) != ((void*)0))
    {
        VAR_2->size = VAR_1;
        VAR_2->sizeMask = VAR_1-1;
        VAR_2->head = 0;
        VAR_2->tail = 0;
    }
    return VAR_2;
}
