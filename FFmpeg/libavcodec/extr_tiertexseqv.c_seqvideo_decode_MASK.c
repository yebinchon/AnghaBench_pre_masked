
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* frame; } ;
struct TYPE_7__ {unsigned char** data; int palette_has_changed; int* linesize; } ;
typedef TYPE_2__ SeqVideoContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 unsigned char* FUNC_3 (TYPE_2__*,unsigned char const*,unsigned char const*,unsigned char*) ;
 unsigned char* FUNC_4 (TYPE_2__*,unsigned char const*,unsigned char const*,unsigned char*) ;
 unsigned char* FUNC_5 (TYPE_2__*,unsigned char const*,unsigned char const*,unsigned char*) ;

__attribute__((used)) static int FUNC_6(SeqVideoContext *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
    const unsigned char *VAR_4 = VAR_2 + VAR_3;
    GetBitContext VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    unsigned char VAR_12[3];
    unsigned char *VAR_13;
    uint32_t *VAR_14;

    VAR_6 = *VAR_2++;

    if (VAR_6 & 1) {
        VAR_14 = (uint32_t *)VAR_1->frame->data[1];
        if (VAR_4 - VAR_2 < 256 * 3)
            return VAR_0;
        for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
            for (VAR_8 = 0; VAR_8 < 3; VAR_8++, VAR_2++)
                VAR_12[VAR_8] = (*VAR_2 << 2) | (*VAR_2 >> 4);
            VAR_14[VAR_7] = 0xFFU << 24 | FUNC_0(VAR_12);
        }
        VAR_1->frame->palette_has_changed = 1;
    }

    if (VAR_6 & 2) {
        if (VAR_4 - VAR_2 < 128)
            return VAR_0;
        FUNC_2(&VAR_5, VAR_2, 128 * 8); VAR_2 += 128;
        for (VAR_10 = 0; VAR_10 < 128; VAR_10 += 8)
            for (VAR_9 = 0; VAR_9 < 256; VAR_9 += 8) {
                VAR_13 = &VAR_1->frame->data[0][VAR_10 * VAR_1->frame->linesize[0] + VAR_9];
                VAR_11 = FUNC_1(&VAR_5, 2);
                switch (VAR_11) {
                case 1:
                    VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_13);
                    break;
                case 2:
                    VAR_2 = FUNC_4(VAR_1, VAR_2, VAR_4, VAR_13);
                    break;
                case 3:
                    VAR_2 = FUNC_5(VAR_1, VAR_2, VAR_4, VAR_13);
                    break;
                }
                if (!VAR_2)
                    return VAR_0;
            }
    }
    return 0;
}
