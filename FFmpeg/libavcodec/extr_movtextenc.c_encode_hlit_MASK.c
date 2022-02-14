
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int start; int end; } ;
struct TYPE_5__ {int box_flags; TYPE_1__ hlit; int buffer; } ;
typedef TYPE_2__ MovTextContext ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,int) ;

__attribute__((used)) static void FUNC_2(MovTextContext *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;
    if (VAR_1->box_flags & VAR_0) {
        VAR_3 = 12;
        VAR_3 = FUNC_0(&VAR_3);
        FUNC_1(&VAR_1->buffer, &VAR_3, 4);
        FUNC_1(&VAR_1->buffer, &VAR_2, 4);
        FUNC_1(&VAR_1->buffer, &VAR_1->hlit.start, 2);
        FUNC_1(&VAR_1->buffer, &VAR_1->hlit.end, 2);
    }
}
