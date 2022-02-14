
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {double num; double den; } ;
struct s_write {int enc_buffer_used; int height; int* crop; int width; scalar_t__* enc_buffer; int line; int clear_sub_needed; int list; TYPE_3__* data608; TYPE_1__ par; int prev_font_color; int prev_font_style; } ;
struct eia608_screen {scalar_t__ dirty; int * characters; scalar_t__* row_used; } ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {int scr_sequence; scalar_t__ stop; scalar_t__ start; int flags; void* frametype; } ;
struct TYPE_10__ {TYPE_2__ s; scalar_t__ data; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_9__ {scalar_t__ current_visible_start_ms; int ssa_counter; int current_visible_scr_sequence; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s_write*,scalar_t__*,int,struct eia608_screen*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,int,int) ;
 int FUNC_8 (scalar_t__,scalar_t__*,int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__*,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_12(struct eia608_screen *VAR_8,
                                  struct s_write *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11;
    int64_t VAR_12 = VAR_9->data608->current_visible_start_ms;


    VAR_12 += VAR_7;
    if (VAR_12<0)
        return 0;

    if (VAR_6)
    {
        char VAR_13[128];
        VAR_9->data608->ssa_counter++;
        FUNC_9 (VAR_13,"%u\r\n",VAR_9->data608->ssa_counter);

        FUNC_6 ("\n- - - SSA caption - - -\n");
        FUNC_6 ("%s", VAR_13);
    }






    int VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 15, VAR_17 = 0;
    int VAR_18 = 41, VAR_19 = 0;
    for (VAR_11 = 0; VAR_11 < 15; VAR_11++)
    {
        if (VAR_8->row_used[VAR_11])
        {
            int VAR_20, VAR_21;

            VAR_14++;
            FUNC_1(VAR_8->characters[VAR_11], &VAR_20, &VAR_21);
            if (VAR_21 - VAR_20 + 1 > VAR_15)
                VAR_15 = VAR_21 - VAR_20 + 1;
            if (VAR_18 > VAR_20)
                VAR_18 = VAR_20;
            if (VAR_16 > VAR_11)
                VAR_16 = VAR_11;
            if (VAR_19 < VAR_21)
                VAR_19 = VAR_21;
            if (VAR_17 < VAR_11)
                VAR_17 = VAR_11;
        }
    }

    VAR_9->prev_font_style = VAR_2;
    VAR_9->prev_font_color = VAR_1;
    VAR_9->enc_buffer_used = 0;

    int VAR_22, VAR_23, VAR_24;
    int VAR_25, VAR_26;
    int VAR_27, VAR_28;
    int VAR_29, VAR_30;
    double VAR_31;

    VAR_23 = VAR_9->height - VAR_9->crop[0] - VAR_9->crop[1];
    VAR_22 = VAR_9->width - VAR_9->crop[2] - VAR_9->crop[3];
    VAR_31 = (double)VAR_9->width * VAR_9->par.num /
                    (VAR_9->height * VAR_9->par.den);






    int VAR_32 = 32;
    if (VAR_31 >= 1.6)
    {


        VAR_32 = 42;
    }
    VAR_24 = VAR_9->height * .8 * .08;

    VAR_27 = 0.1 * VAR_9->width;
    VAR_28 = 0.1 * VAR_9->height;
    VAR_29 = 0.025 * VAR_22;
    VAR_30 = 0.025 * VAR_23;
    VAR_26 = (VAR_9->height - 2 * VAR_28) / 16;
    VAR_25 = (VAR_9->width - 2 * VAR_27) / VAR_32;

    char *VAR_33;
    int VAR_34, VAR_35, VAR_36;
    int VAR_37 = VAR_18;
    if (VAR_31 >= 1.6)
    {


        VAR_37 += 5;
    }
    VAR_34 = VAR_26 * (VAR_16 + 1 + VAR_14) + VAR_28 - VAR_9->crop[0];
    VAR_35 = VAR_25 * VAR_37 + VAR_27 - VAR_9->crop[2];
    VAR_36 = VAR_34 - VAR_14 * VAR_24;

    if (VAR_36 < VAR_30)
        VAR_34 = (VAR_14 * VAR_24) + VAR_30;
    if (VAR_34 > VAR_23 - VAR_30)
        VAR_34 = VAR_23 - VAR_30;
    if (VAR_35 + VAR_15 * VAR_25 > VAR_22 - VAR_29)
        VAR_35 = VAR_22 - VAR_15 * VAR_25 - VAR_29;
    if (VAR_35 < VAR_29)
        VAR_35 = VAR_29;
    VAR_33 = FUNC_7("{\\an1\\pos(%d,%d)}", VAR_35, VAR_34);

    int VAR_38 = 1;
    for (VAR_11 = 0; VAR_11 < 15; VAR_11++)
    {
        if (VAR_8->row_used[VAR_11])
        {
            int VAR_39, VAR_40;

            FUNC_1(VAR_8->characters[VAR_11], &VAR_39, &VAR_40);





            int VAR_41 = VAR_39 - VAR_18;
            if (VAR_38 == 1) {
                VAR_9->enc_buffer_used += FUNC_0(
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, (uint8_t*)VAR_33);
                VAR_9->enc_buffer_used += FUNC_11(
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, VAR_41);
                VAR_9->enc_buffer_used += FUNC_3(VAR_9,
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, VAR_11, VAR_8);
                VAR_38 = 2;
            } else {
                VAR_9->enc_buffer_used += FUNC_0(
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, (uint8_t*)"\\N");
                VAR_9->enc_buffer_used += FUNC_11(
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, VAR_41);
                VAR_9->enc_buffer_used += FUNC_3(VAR_9,
                        VAR_9->enc_buffer + VAR_9->enc_buffer_used, VAR_11, VAR_8);
            }
        }
    }
    FUNC_2(VAR_33);
    if (VAR_9->enc_buffer_used && VAR_9->enc_buffer[0] != 0 && VAR_8->dirty)
    {
        hb_buffer_t *VAR_42;
        int VAR_43;


        VAR_9->enc_buffer_used++;
        VAR_42 = FUNC_4(VAR_9->enc_buffer_used + VAR_5);
        VAR_42->s.frametype = VAR_4;
        VAR_42->s.start = VAR_12;
        VAR_42->s.stop = VAR_0;
        VAR_42->s.scr_sequence = VAR_9->data608->current_visible_scr_sequence;
        FUNC_9((char*)VAR_42->data, "%d,,Default,,0,0,0,,", ++VAR_9->line);
        VAR_43 = FUNC_10((char*)VAR_42->data);
        FUNC_8(VAR_42->data + VAR_43, VAR_9->enc_buffer, VAR_9->enc_buffer_used);
        FUNC_5(&VAR_9->list, VAR_42);
        VAR_10=1;
        VAR_9->clear_sub_needed = 1;
    }
    else if (VAR_9->clear_sub_needed)
    {
        hb_buffer_t *VAR_44 = FUNC_4(0);
        VAR_44->s.frametype = VAR_4;
        VAR_44->s.flags = VAR_3;
        VAR_44->s.start = VAR_12;
        VAR_44->s.stop = VAR_12;
        VAR_44->s.scr_sequence = VAR_9->data608->current_visible_scr_sequence;
        FUNC_5(&VAR_9->list, VAR_44);
        VAR_9->clear_sub_needed = 0;
    }
    if (VAR_6)
    {
        FUNC_6 ("- - - - - - - - - - - -\r\n");
    }
    return VAR_10;
}
