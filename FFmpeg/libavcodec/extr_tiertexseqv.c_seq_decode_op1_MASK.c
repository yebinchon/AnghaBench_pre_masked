
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int block ;
struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; } ;
typedef TYPE_2__ SeqVideoContext ;
typedef int GetBitContext ;


 int* VAR_0 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_3 (unsigned char const*,unsigned char const*,unsigned char*,int) ;

__attribute__((used)) static const unsigned char *FUNC_4(SeqVideoContext *VAR_1,
                                           const unsigned char *VAR_2,
                                           const unsigned char *VAR_3,
                                           unsigned char *VAR_4)
{
    const unsigned char *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    GetBitContext VAR_10;
    unsigned char VAR_11[8 * 8];

    if (VAR_3 - VAR_2 < 1)
        return ((void*)0);
    VAR_8 = *VAR_2++;
    if (VAR_8 & 0x80) {
        switch (VAR_8 & 3) {
        case 1:
            VAR_2 = FUNC_3(VAR_2, VAR_3, VAR_11, sizeof(VAR_11));
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                FUNC_2(VAR_4, &VAR_11[VAR_6 * 8], 8);
                VAR_4 += VAR_1->frame->linesize[0];
            }
            break;
        case 2:
            VAR_2 = FUNC_3(VAR_2, VAR_3, VAR_11, sizeof(VAR_11));
            for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
                for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
                    VAR_4[VAR_6 * VAR_1->frame->linesize[0]] = VAR_11[VAR_7 * 8 + VAR_6];
                ++VAR_4;
            }
            break;
        }
    } else {
        if (VAR_8 <= 0)
            return ((void*)0);
        VAR_9 = VAR_0[VAR_8 - 1] + 1;
        if (VAR_3 - VAR_2 < VAR_8 + 8 * VAR_9)
            return ((void*)0);
        VAR_5 = VAR_2;
        VAR_2 += VAR_8;
        FUNC_1(&VAR_10, VAR_2, VAR_9 * 8 * 8); VAR_2 += VAR_9 * 8;
        for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
                VAR_4[VAR_7] = VAR_5[FUNC_0(&VAR_10, VAR_9)];
            VAR_4 += VAR_1->frame->linesize[0];
        }
    }

    return VAR_2;
}
