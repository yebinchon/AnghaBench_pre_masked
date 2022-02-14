
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_code; int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int** VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(MpegEncContext * VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    if (VAR_2 == 0) {

        VAR_6 = 0;
        FUNC_0(&VAR_1->pb, VAR_0[VAR_6][1], VAR_0[VAR_6][0]);
    } else {
        VAR_4 = VAR_1->f_code - 1;
        VAR_3 = 1 << VAR_4;
        if (VAR_2 <= -64)
            VAR_2 += 64;
        else if (VAR_2 >= 64)
            VAR_2 -= 64;

        if (VAR_2 >= 0) {
            VAR_5 = 0;
        } else {
            VAR_2 = -VAR_2;
            VAR_5 = 1;
        }
        VAR_2--;
        VAR_6 = (VAR_2 >> VAR_4) + 1;
        VAR_7 = VAR_2 & (VAR_3 - 1);

        FUNC_0(&VAR_1->pb, VAR_0[VAR_6][1] + 1, (VAR_0[VAR_6][0] << 1) | VAR_5);
        if (VAR_4 > 0) {
            FUNC_0(&VAR_1->pb, VAR_4, VAR_7);
        }
    }
}
