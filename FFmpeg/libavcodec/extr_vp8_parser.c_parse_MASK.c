
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {unsigned int profile; } ;
struct TYPE_6__ {int key_frame; unsigned int width; unsigned int height; void* coded_height; void* coded_width; int picture_structure; int field_order; int format; int pict_type; } ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*) ;
 void* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(AVCodecParserContext *VAR_6,
                 AVCodecContext *VAR_7,
                 const uint8_t **VAR_8, int *VAR_9,
                 const uint8_t *VAR_10, int VAR_11)
{
    unsigned int VAR_12;
    unsigned int VAR_13;

    *VAR_8 = VAR_10;
    *VAR_9 = VAR_11;

    if (VAR_11 < 3)
        return VAR_11;

    VAR_12 = VAR_10[0] & 1;
    VAR_13 = (VAR_10[0] >> 1) & 7;
    if (VAR_13 > 3) {
        FUNC_3(VAR_7, VAR_1, "Invalid profile %u.\n", VAR_13);
        return VAR_11;
    }

    VAR_7->profile = VAR_13;
    VAR_6->key_frame = VAR_12 == 0;
    VAR_6->pict_type = VAR_12 ? VAR_4 : VAR_3;
    VAR_6->format = VAR_5;
    VAR_6->field_order = VAR_0;
    VAR_6->picture_structure = VAR_2;

    if (VAR_12 == 0) {
        unsigned int VAR_14;
        unsigned int VAR_15, VAR_16;

        if (VAR_11 < 10)
            return VAR_11;

        VAR_14 = FUNC_1(VAR_10 + 3);
        if (VAR_14 != 0x2a019d) {
            FUNC_3(VAR_7, VAR_1, "Invalid sync code %06x.\n", VAR_14);
            return VAR_11;
        }

        VAR_15 = FUNC_0(VAR_10 + 6) & 0x3fff;
        VAR_16 = FUNC_0(VAR_10 + 8) & 0x3fff;

        VAR_6->width = VAR_15;
        VAR_6->height = VAR_16;
        VAR_6->coded_width = FUNC_2(VAR_15, 16);
        VAR_6->coded_height = FUNC_2(VAR_16, 16);
    }

    return VAR_11;
}
