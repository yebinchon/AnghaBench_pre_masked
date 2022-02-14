
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* style_start; scalar_t__ style_flag; void* style_end; } ;
struct TYPE_6__ {scalar_t__ style_flag; } ;
struct TYPE_5__ {int box_flags; int count; int text_pos; TYPE_4__* style_attributes_temp; TYPE_3__** style_attributes; int buffer; int avctx; } ;
typedef TYPE_1__ MovTextContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__***,int*,TYPE_4__*) ;
 int FUNC_3 (int ,int ,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_5, const char VAR_6, int VAR_7)
{
    MovTextContext *VAR_8 = VAR_5;
    if (!VAR_7) {
        if (!(VAR_8->box_flags & VAR_4)) {

            VAR_8->style_attributes_temp = FUNC_4(sizeof(*VAR_8->style_attributes_temp));

            if (!VAR_8->style_attributes_temp) {
                FUNC_1(&VAR_8->buffer);
                VAR_8->box_flags &= ~VAR_4;
                return;
            }

            VAR_8->style_attributes_temp->style_flag = 0;
            VAR_8->style_attributes_temp->style_start = FUNC_0(&VAR_8->text_pos);
        } else {
            if (VAR_8->style_attributes_temp->style_flag) {
                VAR_8->style_attributes_temp->style_end = FUNC_0(&VAR_8->text_pos);
                FUNC_2(&VAR_8->style_attributes, &VAR_8->count, VAR_8->style_attributes_temp);
                VAR_8->style_attributes_temp = FUNC_4(sizeof(*VAR_8->style_attributes_temp));
                if (!VAR_8->style_attributes_temp) {
                    FUNC_5(VAR_8);
                    FUNC_1(&VAR_8->buffer);
                    VAR_8->box_flags &= ~VAR_4;
                    return;
                }

                VAR_8->style_attributes_temp->style_flag = VAR_8->style_attributes[VAR_8->count - 1]->style_flag;
                VAR_8->style_attributes_temp->style_start = FUNC_0(&VAR_8->text_pos);
            } else {
                VAR_8->style_attributes_temp->style_flag = 0;
                VAR_8->style_attributes_temp->style_start = FUNC_0(&VAR_8->text_pos);
            }
        }
        switch (VAR_6){
        case 'b':
            VAR_8->style_attributes_temp->style_flag |= VAR_1;
            break;
        case 'i':
            VAR_8->style_attributes_temp->style_flag |= VAR_2;
            break;
        case 'u':
            VAR_8->style_attributes_temp->style_flag |= VAR_3;
            break;
        }
    } else if (!VAR_8->style_attributes_temp) {
        FUNC_3(VAR_8->avctx, VAR_0, "Ignoring unmatched close tag\n");
        return;
    } else {
        VAR_8->style_attributes_temp->style_end = FUNC_0(&VAR_8->text_pos);
        FUNC_2(&VAR_8->style_attributes, &VAR_8->count, VAR_8->style_attributes_temp);

        VAR_8->style_attributes_temp = FUNC_4(sizeof(*VAR_8->style_attributes_temp));

        if (!VAR_8->style_attributes_temp) {
            FUNC_5(VAR_8);
            FUNC_1(&VAR_8->buffer);
            VAR_8->box_flags &= ~VAR_4;
            return;
        }

        VAR_8->style_attributes_temp->style_flag = VAR_8->style_attributes[VAR_8->count - 1]->style_flag;
        switch (VAR_6){
        case 'b':
            VAR_8->style_attributes_temp->style_flag &= ~VAR_1;
            break;
        case 'i':
            VAR_8->style_attributes_temp->style_flag &= ~VAR_2;
            break;
        case 'u':
            VAR_8->style_attributes_temp->style_flag &= ~VAR_3;
            break;
        }
        if (VAR_8->style_attributes_temp->style_flag) {
            VAR_8->style_attributes_temp->style_start = FUNC_0(&VAR_8->text_pos);
        }
    }
    VAR_8->box_flags |= VAR_4;
}
