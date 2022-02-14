
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {int new_channel; TYPE_1__* data608; } ;
struct TYPE_2__ {int channel; size_t color; size_t font; int mode; int cursor_row; int rollup_base_row; int cursor_column; } ;





 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct s_write*,int) ;
 void*** VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_2(unsigned char VAR_7, unsigned char VAR_8, struct s_write *VAR_9)
{

    if (VAR_9->new_channel > 2)
    {
        VAR_9->new_channel -= 2;
        if (VAR_3)
            FUNC_0 ("\nChannel correction, now %d\n", VAR_9->new_channel);
    }
    VAR_9->data608->channel=VAR_9->new_channel;
    if (VAR_9->data608->channel!=VAR_1)
        return;

    int VAR_10=VAR_6[((VAR_7<<1)&14)|((VAR_8>>5)&1)];

    if (VAR_3)
        FUNC_0 ("\rPAC: %02X %02X",VAR_7,VAR_8);

    if (VAR_8>=0x40 && VAR_8<=0x5f)
    {
        VAR_8=VAR_8-0x40;
    }
    else
    {
        if (VAR_8>=0x60 && VAR_8<=0x7f)
        {
            VAR_8=VAR_8-0x60;
        }
        else
        {
            if (VAR_3)
                FUNC_0 ("\rThis is not a PAC!!!!!\n");
            return;
        }
    }
    VAR_9->data608->color=VAR_5[VAR_8][0];
    VAR_9->data608->font=VAR_5[VAR_8][1];
    int VAR_11=VAR_5[VAR_8][2];
    if (VAR_3)
        FUNC_0 ("  --  Position: %d:%d, color: %s,  font: %s\n", VAR_10, VAR_11,
                VAR_2[VAR_9->data608->color][0],
                VAR_4[VAR_9->data608->font]);




    int VAR_12;
    switch (VAR_9->data608->mode)
    {
        case 130:
            VAR_12 = 2;
            break;
        case 129:
            VAR_12 = 3;
            break;
        case 128:
            VAR_12 = 4;
            break;
        default:

            VAR_12 = 0;
            break;
    }
    if (VAR_10 < VAR_12)
    {
        VAR_10 = VAR_12;
    }
    if (VAR_9->data608->mode != VAR_0)
    {





        FUNC_1(VAR_9, VAR_10 - 1);
        VAR_9->data608->cursor_row = VAR_10 - 1 ;
    }
    VAR_9->data608->rollup_base_row = VAR_10 - 1;
    VAR_9->data608->cursor_column = VAR_11;
}
