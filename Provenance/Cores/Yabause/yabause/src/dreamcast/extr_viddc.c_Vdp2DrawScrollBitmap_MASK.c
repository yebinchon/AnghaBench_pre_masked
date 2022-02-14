
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int colornumber; int charaddr; int coloroffset; int paladdr; int (* PostPixelFetchCalc ) (TYPE_1__*,int) ;int priority; int transparencyenable; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int pixeloffset; int ystart; int yend; int xstart; int xend; int lineincrement; } ;
typedef TYPE_2__ clipping_struct ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int* VAR_1 ;
 int ** VAR_2 ;
 int FUNC_10 (int,int,int,int ) ;
 int VAR_3 ;

void FUNC_11(vdp2draw_struct *VAR_4)
{
    int VAR_5, VAR_6;
    clipping_struct VAR_7;

    FUNC_0(VAR_4, &VAR_7);

    switch (VAR_4->colornumber)
    {
        case 0:

            FUNC_6("vdp2 bitmap 4 bpp draw\n");
            return;
        case 1:
            VAR_4->charaddr += VAR_7.pixeloffset;

            for (VAR_5 = VAR_7.ystart; VAR_5 < VAR_7.yend; VAR_5++)
            {
                for (VAR_6 = VAR_7.xstart; VAR_6 < VAR_7.xend; VAR_6++)
                {
                    u16 VAR_8 = FUNC_2(VAR_0, VAR_4->charaddr);
                    VAR_4->charaddr++;

                    if (VAR_8 == 0 && VAR_4->transparencyenable) {
                        FUNC_10(VAR_6, VAR_5, 0, VAR_4->priority);
                    }
                    else {
                        VAR_8 = FUNC_5(VAR_4->coloroffset + (VAR_4->paladdr | VAR_8));
                        FUNC_10(VAR_6, VAR_5, VAR_4->PostPixelFetchCalc(VAR_4, VAR_8) | 0x8000, VAR_4->priority);
                    }
                }

                VAR_4->charaddr += VAR_7.lineincrement;
            }

            return;
        case 2:
            FUNC_6("vdp2 bitmap 16bpp palette draw\n");
            break;
        case 3:
            VAR_7.pixeloffset *= 2;
            VAR_7.lineincrement *= 2;

            VAR_4->charaddr += VAR_7.pixeloffset;

            for (VAR_5 = VAR_7.ystart; VAR_5 < VAR_7.yend; VAR_5++)
            {
                for (VAR_6 = VAR_7.xstart; VAR_6 < VAR_7.xend; VAR_6++)
                {
                    u16 VAR_9 = FUNC_4(VAR_0, VAR_4->charaddr);
                    VAR_4->charaddr += 2;

                    if ((VAR_9 & 0x8000) == 0 && VAR_4->transparencyenable)
                        VAR_1[(VAR_5 * VAR_3) + VAR_6] = 0;
                    else
                        VAR_1[(VAR_5 * VAR_3) + VAR_6] = VAR_4->PostPixelFetchCalc(VAR_4, FUNC_1(VAR_9)) | 0x8000;

                    VAR_2[VAR_5][VAR_6] = VAR_4->priority;
                }

                VAR_4->charaddr += VAR_7.lineincrement;
            }

            return;
        case 4:
            VAR_7.pixeloffset *= 4;
            VAR_7.lineincrement *= 4;

            VAR_4->charaddr += VAR_7.pixeloffset;

            for (VAR_5 = VAR_7.ystart; VAR_5 < VAR_7.yend; VAR_5++)
            {
                for (VAR_6 = VAR_7.xstart; VAR_6 < VAR_7.xend; VAR_6++)
                {
                    u32 VAR_10 = FUNC_3(VAR_0, VAR_4->charaddr);
                    VAR_4->charaddr += 4;

                    if ((VAR_10 & 0x80000000) == 0 && VAR_4->transparencyenable)
                        FUNC_10(VAR_6, VAR_5, 0, VAR_4->priority);
                    else {
                        u16 VAR_11 = ((VAR_10 & 0xF80000) >> 19 |
                                   (VAR_10 & 0x00F800) >> 6 |
                                   (VAR_10 & 0x0000F8) << 7 | 0x8000);
                        FUNC_10(VAR_6, VAR_5, VAR_4->PostPixelFetchCalc(VAR_4, VAR_11), VAR_4->priority);
                    }
                }

                VAR_4->charaddr += VAR_7.lineincrement;

            }
            return;
        default: break;
    }
}
