
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_7__ {int properties; TYPE_2__* priv_data; } ;
struct TYPE_5__ {int top_field_first; } ;
struct TYPE_6__ {char* a53_caption; int a53_caption_size; TYPE_1__ mpeg_enc_ctx; } ;
typedef TYPE_2__ Mpeg1Context ;
typedef int GetBitContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 void* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 char* VAR_1 ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2,
                              const uint8_t *VAR_3, int VAR_4)
{
    Mpeg1Context *VAR_5 = VAR_2->priv_data;

    if (VAR_4 >= 6 &&
        VAR_3[0] == 'G' && VAR_3[1] == 'A' && VAR_3[2] == '9' && VAR_3[3] == '4' &&
        VAR_3[4] == 3 && (VAR_3[5] & 0x40)) {

        int VAR_6 = VAR_3[5] & 0x1f;
        if (VAR_6 > 0 && VAR_4 >= 7 + VAR_6 * 3) {
            FUNC_0(&VAR_5->a53_caption);
            VAR_5->a53_caption_size = VAR_6 * 3;
            VAR_5->a53_caption = FUNC_1(VAR_5->a53_caption_size);
            if (!VAR_5->a53_caption) {
                VAR_5->a53_caption_size = 0;
            } else {
                FUNC_6(VAR_5->a53_caption, VAR_3 + 7, VAR_5->a53_caption_size);
            }
            VAR_2->properties |= VAR_0;
        }
        return 1;
    } else if (VAR_4 >= 2 &&
               VAR_3[0] == 0x03 && (VAR_3[1]&0x7f) == 0x01) {

        GetBitContext VAR_7;
        int VAR_8 = 0;
        int VAR_9;

        FUNC_5(&VAR_7, VAR_3 + 2, VAR_4 - 2);
        VAR_8 = FUNC_3(&VAR_7, 5);
        if (VAR_8 > 0) {
            FUNC_0(&VAR_5->a53_caption);
            VAR_5->a53_caption_size = VAR_8 * 3;
            VAR_5->a53_caption = FUNC_2(VAR_5->a53_caption_size);
            if (!VAR_5->a53_caption) {
                VAR_5->a53_caption_size = 0;
            } else {
                uint8_t VAR_10, VAR_11, VAR_12;
                uint8_t *VAR_13 = VAR_5->a53_caption;
                for (VAR_9 = 0; VAR_9 < VAR_8 && FUNC_4(&VAR_7) >= 26; VAR_9++) {
                    FUNC_7(&VAR_7, 2);
                    VAR_10 = FUNC_3(&VAR_7, 2);
                    FUNC_7(&VAR_7, 5);
                    VAR_11 = FUNC_3(&VAR_7, 8);
                    VAR_12 = FUNC_3(&VAR_7, 8);
                    FUNC_7(&VAR_7, 1);

                    if (!VAR_10) {
                        VAR_13[0] = VAR_13[1] = VAR_13[2] = 0x00;
                    } else {
                        VAR_10 = (VAR_10 == 2 ? 1 : 0);
                        if (!VAR_5->mpeg_enc_ctx.top_field_first) VAR_10 = !VAR_10;
                        VAR_13[0] = 0x04 | VAR_10;
                        VAR_13[1] = VAR_1[VAR_11];
                        VAR_13[2] = VAR_1[VAR_12];
                    }
                    VAR_13 += 3;
                }
            }
            VAR_2->properties |= VAR_0;
        }
        return 1;
    } else if (VAR_4 >= 11 &&
               VAR_3[0] == 'C' && VAR_3[1] == 'C' && VAR_3[2] == 0x01 && VAR_3[3] == 0xf8) {
        int VAR_14 = 0;
        int VAR_15;


        for (VAR_15 = 5; VAR_15 + 6 <= VAR_4 && ((VAR_3[VAR_15] & 0xfe) == 0xfe); VAR_15 += 6)
            VAR_14++;

        if (VAR_14 > 0) {
            FUNC_0(&VAR_5->a53_caption);
            VAR_5->a53_caption_size = VAR_14 * 6;
            VAR_5->a53_caption = FUNC_1(VAR_5->a53_caption_size);
            if (!VAR_5->a53_caption) {
                VAR_5->a53_caption_size = 0;
            } else {
                uint8_t VAR_16 = !!(VAR_3[4] & 0x80);
                uint8_t *VAR_17 = VAR_5->a53_caption;
                VAR_3 += 5;
                for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
                    VAR_17[0] = (VAR_3[0] == 0xff && VAR_16) ? 0xfc : 0xfd;
                    VAR_17[1] = VAR_3[1];
                    VAR_17[2] = VAR_3[2];
                    VAR_17[3] = (VAR_3[3] == 0xff && !VAR_16) ? 0xfc : 0xfd;
                    VAR_17[4] = VAR_3[4];
                    VAR_17[5] = VAR_3[5];
                    VAR_17 += 6;
                    VAR_3 += 6;
                }
            }
            VAR_2->properties |= VAR_0;
        }
        return 1;
    }
    return 0;
}
