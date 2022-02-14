
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int columns; TYPE_2__* text; } ;
typedef TYPE_1__ vbi_page ;
struct TYPE_9__ {int opacity; int background; } ;
typedef TYPE_2__ vbi_char ;
typedef int uint8_t ;
struct TYPE_10__ {int opacity; int transparent_bg; } ;
typedef TYPE_3__ TeletextContext ;
struct TYPE_11__ {int* linesize; int ** data; } ;
typedef TYPE_4__ AVSubtitleRect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(TeletextContext *VAR_4, AVSubtitleRect *VAR_5, vbi_page *VAR_6,
                             int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10;


    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        uint8_t *VAR_11 = VAR_5->data[0] + VAR_10 * VAR_5->linesize[0];
        vbi_char *VAR_12 = VAR_6->text + (VAR_10 / VAR_0 + VAR_7) * VAR_6->columns;
        vbi_char *VAR_13 = VAR_12 + VAR_6->columns;
        for (; VAR_12 < VAR_13; VAR_12++) {
            uint8_t *VAR_14 = VAR_11 + VAR_1;
            switch (VAR_12->opacity) {
                case 128:
                    FUNC_0(VAR_11, VAR_3, VAR_1);
                    break;
                case 131:
                    if (!VAR_4->transparent_bg)
                        break;
                case 130:
                    if (VAR_4->opacity > 0) {
                        if (VAR_4->opacity < 255)
                            for(; VAR_11 < VAR_14; VAR_11++)
                                if (*VAR_11 == VAR_12->background)
                                    *VAR_11 += VAR_2;
                        break;
                    }
                case 129:
                    for(; VAR_11 < VAR_14; VAR_11++)
                        if (*VAR_11 == VAR_12->background)
                            *VAR_11 = VAR_3;
                    break;
            }
            VAR_11 = VAR_14;
        }
    }
}
