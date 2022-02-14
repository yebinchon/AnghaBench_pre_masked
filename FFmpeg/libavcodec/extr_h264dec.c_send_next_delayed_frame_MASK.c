
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** delayed_pic; scalar_t__ first_field; int * cur_pic_ptr; } ;
struct TYPE_8__ {scalar_t__ poc; int reference; int mmco_reset; TYPE_1__* f; } ;
struct TYPE_7__ {int key_frame; } ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ H264Context ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,TYPE_2__*,int*) ;

__attribute__((used)) static int FUNC_1(H264Context *VAR_1, AVFrame *VAR_2,
                                   int *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    H264Picture *VAR_8 = VAR_1->delayed_pic[0];

    VAR_1->cur_pic_ptr = ((void*)0);
    VAR_1->first_field = 0;

    VAR_7 = 0;
    for (VAR_6 = 1;
         VAR_1->delayed_pic[VAR_6] &&
         !VAR_1->delayed_pic[VAR_6]->f->key_frame &&
         !VAR_1->delayed_pic[VAR_6]->mmco_reset;
         VAR_6++)
        if (VAR_1->delayed_pic[VAR_6]->poc < VAR_8->poc) {
            VAR_8 = VAR_1->delayed_pic[VAR_6];
            VAR_7 = VAR_6;
        }

    for (VAR_6 = VAR_7; VAR_1->delayed_pic[VAR_6]; VAR_6++)
        VAR_1->delayed_pic[VAR_6] = VAR_1->delayed_pic[VAR_6 + 1];

    if (VAR_8) {
        VAR_8->reference &= ~VAR_0;
        VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_8, VAR_3);
        if (VAR_5 < 0)
            return VAR_5;
    }

    return VAR_4;
}
