
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double speed; int* queue_serial; scalar_t__ paused; } ;
typedef TYPE_1__ Clock ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(Clock *VAR_1, int *VAR_2)
{
    VAR_1->speed = 1.0;
    VAR_1->paused = 0;
    VAR_1->queue_serial = VAR_2;
    FUNC_0(VAR_1, VAR_0, -1);
}
