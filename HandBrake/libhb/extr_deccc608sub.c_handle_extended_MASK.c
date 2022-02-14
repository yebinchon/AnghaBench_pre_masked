
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {int new_channel; TYPE_1__* data608; } ;
struct TYPE_2__ {int channel; scalar_t__ cursor_column; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned char,...) ;
 int FUNC_1 (unsigned char,struct s_write*) ;

__attribute__((used)) static unsigned char FUNC_2(unsigned char VAR_2, unsigned char VAR_3,
                                     struct s_write *VAR_4)
{

    if (VAR_4->new_channel > 2)
    {
        VAR_4->new_channel -= 2;
        if (VAR_1)
            FUNC_0 ("\nChannel correction, now %d\n", VAR_4->new_channel);
    }
    VAR_4->data608->channel=VAR_4->new_channel;
    if (VAR_4->data608->channel!=VAR_0)
        return 0;


    unsigned char VAR_5=0;

    if (VAR_1)
        FUNC_0 ("\rExtended: %02X %02X\n",VAR_2,VAR_3);
    if (VAR_3>=0x20 && VAR_3<=0x3f && (VAR_2==0x12 || VAR_2==0x13))
    {
        switch (VAR_2)
        {
            case 0x12:
                VAR_5=VAR_3+0x70;
                break;
            case 0x13:
                VAR_5=VAR_3+0x90;
                break;
        }



        if (VAR_4->data608->cursor_column>0)
            VAR_4->data608->cursor_column--;

        FUNC_1 (VAR_5,VAR_4);
    }
    return 1;
}
