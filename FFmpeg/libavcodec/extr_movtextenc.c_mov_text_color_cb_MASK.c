
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int color; } ;
struct TYPE_5__ {void* start; void* end; } ;
struct TYPE_6__ {int box_flags; TYPE_1__ hclr; int text_pos; TYPE_2__ hlit; } ;
typedef TYPE_3__ MovTextContext ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    MovTextContext *VAR_5 = VAR_2;
    if (VAR_4 == 2) {
        if (VAR_5->box_flags & VAR_1) {
            VAR_5->hlit.end = FUNC_0(&VAR_5->text_pos);
        } else {
            VAR_5->box_flags |= VAR_0;
            VAR_5->box_flags |= VAR_1;
            VAR_5->hlit.start = FUNC_0(&VAR_5->text_pos);
            VAR_5->hclr.color = VAR_3 | (0xFF << 24);
        }
    }




}
