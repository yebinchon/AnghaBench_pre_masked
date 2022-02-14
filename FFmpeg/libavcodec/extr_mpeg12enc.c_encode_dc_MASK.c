
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext *VAR_6, int VAR_7, int VAR_8)
{
    unsigned int VAR_9 = VAR_7 + 255;
    if (VAR_9 >= 511) {
        int VAR_10;

        if (VAR_7 < 0) {
            VAR_10 = FUNC_0(-2 * VAR_7);
            VAR_7--;
        } else {
            VAR_10 = FUNC_0(2 * VAR_7);
        }
        if (VAR_8 == 0)
            FUNC_2(&VAR_6->pb,
                     VAR_2[VAR_10] + VAR_10,
                     (VAR_3[VAR_10] << VAR_10) +
                     FUNC_1(VAR_7, VAR_10));
        else
            FUNC_2(&VAR_6->pb,
                     VAR_0[VAR_10] + VAR_10,
                     (VAR_1[VAR_10] << VAR_10) +
                     FUNC_1(VAR_7, VAR_10));
    } else {
        if (VAR_8 == 0)
            FUNC_2(&VAR_6->pb,
                     VAR_5[VAR_7 + 255] & 0xFF,
                     VAR_5[VAR_7 + 255] >> 8);
        else
            FUNC_2(&VAR_6->pb,
                     VAR_4[VAR_7 + 255] & 0xFF,
                     VAR_4[VAR_7 + 255] >> 8);
    }
}
