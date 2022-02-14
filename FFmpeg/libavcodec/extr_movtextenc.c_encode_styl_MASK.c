
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int box_flags; int count; int style_entries; int style_fontID; int style_fontsize; int style_color; int buffer; TYPE_1__** style_attributes; } ;
struct TYPE_5__ {int style_start; int style_end; int style_flag; } ;
typedef TYPE_2__ MovTextContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(MovTextContext *VAR_3, uint32_t VAR_4)
{
    int VAR_5;
    uint32_t VAR_6;
    if (VAR_3->box_flags & VAR_2) {
        VAR_6 = VAR_3->count * VAR_1 + VAR_0;
        VAR_6 = FUNC_1(&VAR_6);
        VAR_3->style_entries = FUNC_0(&VAR_3->count);
        VAR_3->style_fontID = 0x00 | 0x01<<8;
        VAR_3->style_fontsize = 0x12;
        VAR_3->style_color = FUNC_2(0xFF, 0xFF, 0xFF, 0xFF);


        FUNC_3(&VAR_3->buffer, &VAR_6, 4);
        FUNC_3(&VAR_3->buffer, &VAR_4, 4);
        FUNC_3(&VAR_3->buffer, &VAR_3->style_entries, 2);
        for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
            FUNC_3(&VAR_3->buffer, &VAR_3->style_attributes[VAR_5]->style_start, 2);
            FUNC_3(&VAR_3->buffer, &VAR_3->style_attributes[VAR_5]->style_end, 2);
            FUNC_3(&VAR_3->buffer, &VAR_3->style_fontID, 2);
            FUNC_3(&VAR_3->buffer, &VAR_3->style_attributes[VAR_5]->style_flag, 1);
            FUNC_3(&VAR_3->buffer, &VAR_3->style_fontsize, 1);
            FUNC_3(&VAR_3->buffer, &VAR_3->style_color, 4);
        }
        FUNC_4(VAR_3);
    }
}
