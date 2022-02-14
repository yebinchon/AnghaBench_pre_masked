
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int in ;
struct TYPE_5__ {int (* hybrid_analysis_ileave ) (int ***,int ***,int,int) ;} ;
typedef TYPE_1__ PSDSPContext ;
typedef int INTFLOAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **,int ***,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int **,int ***,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int **,int ***,int ,int) ;
 int FUNC_3 (int **,int **,int) ;
 int FUNC_4 (int ***,int ***,int,int) ;
 int FUNC_5 (int ***,int ***,int,int) ;

__attribute__((used)) static void FUNC_6(PSDSPContext *VAR_5, INTFLOAT VAR_6[91][32][2],
                            INTFLOAT VAR_7[5][44][2], INTFLOAT VAR_8[2][38][64],
                            int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < 38; VAR_12++) {
            VAR_7[VAR_11][VAR_12+6][0] = VAR_8[0][VAR_12][VAR_11];
            VAR_7[VAR_11][VAR_12+6][1] = VAR_8[1][VAR_12][VAR_11];
        }
    }
    if (VAR_9) {
        FUNC_1(VAR_5, VAR_7[0], VAR_6, VAR_1, 12, VAR_10);
        FUNC_1(VAR_5, VAR_7[1], VAR_6+12, VAR_2, 8, VAR_10);
        FUNC_1(VAR_5, VAR_7[2], VAR_6+20, VAR_3, 4, VAR_10);
        FUNC_1(VAR_5, VAR_7[3], VAR_6+24, VAR_3, 4, VAR_10);
        FUNC_1(VAR_5, VAR_7[4], VAR_6+28, VAR_3, 4, VAR_10);
        VAR_5->hybrid_analysis_ileave(VAR_6 + 27, VAR_8, 5, VAR_10);
    } else {
        FUNC_2(VAR_5, VAR_7[0], VAR_6, VAR_0, VAR_10);
        FUNC_0(VAR_7[1], VAR_6+6, VAR_4, VAR_10, 1);
        FUNC_0(VAR_7[2], VAR_6+8, VAR_4, VAR_10, 0);
        VAR_5->hybrid_analysis_ileave(VAR_6 + 7, VAR_8, 3, VAR_10);
    }

    for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
        FUNC_3(VAR_7[VAR_11], VAR_7[VAR_11]+32, 6 * sizeof(VAR_7[VAR_11][0]));
    }
}
