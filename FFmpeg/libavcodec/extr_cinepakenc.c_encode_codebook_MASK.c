
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef TYPE_1__ CinepakEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_2(CinepakEncContext *VAR_1, int *VAR_2, int VAR_3,
                           int VAR_4, int VAR_5,
                           unsigned char *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_1->pix_fmt == VAR_0 ? 6 : 4;
    int VAR_11 = 0;


    VAR_9 = FUNC_1(VAR_6,
                             VAR_1->pix_fmt == VAR_0 ?
                             VAR_4 + (VAR_11 ? 1 : 0) :
                             VAR_5 + (VAR_11 ? 1 : 0),
                             VAR_10 * VAR_3 +
                             (VAR_11 ? (VAR_3 + 31) / 32 * 4 : 0));






    if (VAR_11) {
        int VAR_12 = 0;
        int VAR_13;
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            if (VAR_12 == 0) {
                VAR_13 = VAR_9;
                VAR_9 += 4;
                VAR_12 = 0x80000000;
            } else
                VAR_12 = ((VAR_12 >> 1) | 0x80000000);
            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
                VAR_6[VAR_9++] = VAR_2[VAR_8 + VAR_7 * VAR_10] ^ (VAR_8 >= 4 ? 0x80 : 0);
            if ((VAR_12 & 0xffffffff) == 0xffffffff) {
                FUNC_0(&VAR_6[VAR_13], VAR_12);
                VAR_12 = 0;
            }
        }
        if (VAR_12)
            FUNC_0(&VAR_6[VAR_13], VAR_12);
    } else
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
                VAR_6[VAR_9++] = VAR_2[VAR_8 + VAR_7 * VAR_10] ^ (VAR_8 >= 4 ? 0x80 : 0);

    return VAR_9;
}
