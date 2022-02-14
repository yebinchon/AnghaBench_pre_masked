
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {void* style_end; } ;
struct TYPE_12__ {void* fontsize; void* style_flag; void* style_fontID; void* style_start; void* style_end; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ tracksize; scalar_t__ size_var; int style_entries; int count_s; TYPE_8__** s; TYPE_6__* s_temp; int box_flags; } ;
typedef TYPE_1__ MovTextContext ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_8__***,int*,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__**) ;
 TYPE_6__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(const uint8_t *VAR_2, MovTextContext *VAR_3, AVPacket *VAR_4)
{
    int VAR_5;
    int VAR_6 = FUNC_1(VAR_2);
    VAR_2 += 2;

    if (VAR_3->tracksize + VAR_3->size_var + 2 + VAR_6 * 12 > VAR_4->size)
        return -1;

    VAR_3->style_entries = VAR_6;

    VAR_3->box_flags |= VAR_1;
    for(VAR_5 = 0; VAR_5 < VAR_3->style_entries; VAR_5++) {
        VAR_3->s_temp = FUNC_5(sizeof(*VAR_3->s_temp));
        if (!VAR_3->s_temp) {
            FUNC_6(VAR_3);
            return FUNC_0(VAR_0);
        }
        VAR_3->s_temp->style_start = FUNC_1(VAR_2);
        VAR_2 += 2;
        VAR_3->s_temp->style_end = FUNC_1(VAR_2);

        if ( VAR_3->s_temp->style_end < VAR_3->s_temp->style_start
            || (VAR_3->count_s && VAR_3->s_temp->style_start < VAR_3->s[VAR_3->count_s - 1]->style_end)) {
            FUNC_4(&VAR_3->s_temp);
            FUNC_6(VAR_3);
            return FUNC_0(VAR_0);
        }

        VAR_2 += 2;
        VAR_3->s_temp->style_fontID = FUNC_1(VAR_2);
        VAR_2 += 2;
        VAR_3->s_temp->style_flag = FUNC_2(VAR_2);
        VAR_2++;
        VAR_3->s_temp->fontsize = FUNC_2(VAR_2);
        FUNC_3(&VAR_3->s, &VAR_3->count_s, VAR_3->s_temp);
        if(!VAR_3->s) {
            FUNC_6(VAR_3);
            return FUNC_0(VAR_0);
        }
        VAR_2++;

        VAR_2 += 4;
    }
    return 0;
}
