
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {scalar_t__ new_channel; TYPE_1__* data608; } ;
struct TYPE_2__ {scalar_t__ channel; size_t color; size_t font; int cursor_column; } ;


 scalar_t__ VAR_0 ;
 unsigned char const** VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char const* VAR_3 ;
 int FUNC_0 (char*,...) ;
 void*** VAR_4 ;

__attribute__((used)) static void FUNC_1(const unsigned char VAR_5, const unsigned char VAR_6,
                             struct s_write *VAR_7)
{

    VAR_7->data608->channel=VAR_7->new_channel;
    if (VAR_7->data608->channel!=VAR_0)
        return;
    if (VAR_2)
        FUNC_0 ("\r608: text_attr: %02X %02X",VAR_5,VAR_6);
    if ( ((VAR_5!=0x11 && VAR_5!=0x19) ||
        (VAR_6<0x20 || VAR_6>0x2f)) && VAR_2)
    {
        FUNC_0 ("\rThis is not a text attribute!\n");
    }
    else
    {
        int VAR_8 = VAR_6-0x20;
        VAR_7->data608->color=VAR_4[VAR_8][0];
        VAR_7->data608->font=VAR_4[VAR_8][1];
        if (VAR_2)
            FUNC_0("  --  Color: %s,  font: %s\n",
                VAR_1[VAR_7->data608->color][0],
                VAR_3[VAR_7->data608->font]);
        if (VAR_7->data608->cursor_column<31)
            VAR_7->data608->cursor_column++;
    }
}
