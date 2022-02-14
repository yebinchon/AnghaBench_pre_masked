
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ queue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(queue *VAR_1, int VAR_2, int VAR_3) {
    uint32_t VAR_4 = VAR_1->flags;

    if (VAR_3) VAR_1->flags |= VAR_2;
    else VAR_1->flags &= ~VAR_2;

    if ((VAR_4 & VAR_0) &&
        !(VAR_1->flags & VAR_0))
    {
        FUNC_0(VAR_1);
    }
}
