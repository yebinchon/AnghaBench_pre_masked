
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int int64_t ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_10__ {TYPE_1__ time_base; } ;
struct TYPE_9__ {void* duration; int pts; int pict_type; TYPE_2__* priv_data; } ;
struct TYPE_8__ {void* lba; int* buffer; int copied; } ;
typedef TYPE_2__ DVDNavParseContext ;
typedef TYPE_3__ AVCodecParserContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 void* FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_3,
                         AVCodecContext *VAR_4,
                         const uint8_t **VAR_5, int *VAR_6,
                         const uint8_t *VAR_7, int VAR_8)
{
    DVDNavParseContext *VAR_9 = VAR_3->priv_data;
    int VAR_10 = 0;
    int VAR_11 = 0;

    VAR_3->pict_type = VAR_0;

    VAR_4->time_base.num = 1;
    VAR_4->time_base.den = 90000;

    if (VAR_7 && VAR_8) {
        switch(VAR_7[0]) {
            case 0x00:
                if (VAR_8 == VAR_2) {

                    uint32_t VAR_12 = FUNC_0(&VAR_7[0x01]);
                    uint32_t VAR_13 = FUNC_0(&VAR_7[0x0D]);
                    uint32_t VAR_14 = FUNC_0(&VAR_7[0x11]);

                    if (VAR_14 > VAR_13) {
                        VAR_9->lba = VAR_12;
                        VAR_3->pts = (int64_t)VAR_13;
                        VAR_3->duration = VAR_14 - VAR_13;

                        FUNC_1(VAR_9->buffer, VAR_7, VAR_2);
                        VAR_9->copied = VAR_2;
                        VAR_11 = 1;
                    }
                }
                break;

            case 0x01:
                if ((VAR_8 == VAR_1) && (VAR_9->copied == VAR_2)) {

                    uint32_t VAR_15 = FUNC_0(&VAR_7[0x05]);

                    if (VAR_15 == VAR_9->lba) {
                        FUNC_1(VAR_9->buffer + VAR_9->copied, VAR_7, VAR_1);
                        VAR_10 = 1;
                        VAR_11 = 1;
                    }
                }
                break;
        }
    }

    if (!VAR_11 || VAR_10) {
        VAR_9->copied = 0;
        VAR_9->lba = 0xFFFFFFFF;
    }

    if (VAR_10) {
        *VAR_5 = VAR_9->buffer;
        *VAR_6 = sizeof(VAR_9->buffer);
    } else {
        *VAR_5 = ((void*)0);
        *VAR_6 = 0;
    }

    return VAR_8;
}
