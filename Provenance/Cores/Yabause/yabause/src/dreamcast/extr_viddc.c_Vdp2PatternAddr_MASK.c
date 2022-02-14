
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int patterndatasize; int addr; int specialfunction; int supplementdata; int paladdr; int flipfunction; int charaddr; int patternwh; int auxmode; int colornumber; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u16 ;
struct TYPE_5__ {int VRSIZE; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(vdp2draw_struct *VAR_2)
{
    switch(VAR_2->patterndatasize)
    {
        case 1:
        {
            u16 VAR_3 = FUNC_0(VAR_0, VAR_2->addr);

            VAR_2->addr += 2;
            VAR_2->specialfunction = (VAR_2->supplementdata >> 9) & 0x1;

            switch(VAR_2->colornumber)
            {
                case 0:
                    VAR_2->paladdr = ((VAR_3 & 0xF000) >> 8) | ((VAR_2->supplementdata & 0xE0) << 3);
                    break;
                default:
                    VAR_2->paladdr = (VAR_3 & 0x7000) >> 4;
                    break;
            }

            switch(VAR_2->auxmode)
            {
                case 0:
                    VAR_2->flipfunction = (VAR_3 & 0xC00) >> 10;

                    switch(VAR_2->patternwh)
                    {
                        case 1:
                            VAR_2->charaddr = (VAR_3 & 0x3FF) | ((VAR_2->supplementdata & 0x1F) << 10);
                            break;
                        case 2:
                            VAR_2->charaddr = ((VAR_3 & 0x3FF) << 2) | (VAR_2->supplementdata & 0x3) | ((VAR_2->supplementdata & 0x1C) << 10);
                            break;
                    }
                    break;
                case 1:
                    VAR_2->flipfunction = 0;

                    switch(VAR_2->patternwh)
                    {
                        case 1:
                            VAR_2->charaddr = (VAR_3 & 0xFFF) | ((VAR_2->supplementdata & 0x1C) << 10);
                            break;
                        case 2:
                            VAR_2->charaddr = ((VAR_3 & 0xFFF) << 2) | (VAR_2->supplementdata & 0x3) | ((VAR_2->supplementdata & 0x10) << 10);
                            break;
                    }
                        break;
            }

            break;
        }
        case 2: {
            u16 VAR_4 = FUNC_0(VAR_0, VAR_2->addr);
            u16 VAR_5 = FUNC_0(VAR_0, VAR_2->addr+2);
            VAR_2->addr += 4;
            VAR_2->charaddr = VAR_5 & 0x7FFF;
            VAR_2->flipfunction = (VAR_4 & 0xC000) >> 14;
            VAR_2->paladdr = (VAR_4 & 0x7F) << 4;
            VAR_2->specialfunction = (VAR_4 & 0x2000) >> 13;
            break;
        }
    }

    if (!(VAR_1->VRSIZE & 0x8000))
        VAR_2->charaddr &= 0x3FFF;

    VAR_2->charaddr *= 0x20;
}
