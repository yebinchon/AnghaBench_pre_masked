
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int) ;
 int** VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(MpegEncContext *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_2 == 0) {

        FUNC_1(&VAR_1->pb,
                 VAR_0[0][1],
                 VAR_0[0][0]);
    } else {
        int VAR_4, VAR_5, VAR_6;
        int VAR_7 = VAR_3 - 1;
        int VAR_8 = 1 << VAR_7;

        VAR_2 = FUNC_2(VAR_2, 5 + VAR_7);

        if (VAR_2 >= 0) {
            VAR_2--;
            VAR_4 = (VAR_2 >> VAR_7) + 1;
            VAR_6 = VAR_2 & (VAR_8 - 1);
            VAR_5 = 0;
        } else {
            VAR_2 = -VAR_2;
            VAR_2--;
            VAR_4 = (VAR_2 >> VAR_7) + 1;
            VAR_6 = VAR_2 & (VAR_8 - 1);
            VAR_5 = 1;
        }

        FUNC_0(VAR_4 > 0 && VAR_4 <= 16);

        FUNC_1(&VAR_1->pb,
                 VAR_0[VAR_4][1],
                 VAR_0[VAR_4][0]);

        FUNC_1(&VAR_1->pb, 1, VAR_5);
        if (VAR_7 > 0)
            FUNC_1(&VAR_1->pb, VAR_7, VAR_6);
    }
}
