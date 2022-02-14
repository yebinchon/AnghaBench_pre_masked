
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__*,double*,int,int,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*,int*,int*) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 double FUNC_11 (int *,int,int *,int,int,int,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_12(int VAR_4, char* VAR_5[])
{
    FILE *VAR_6[2];
    uint8_t *VAR_7[2], *VAR_8[2][3];
    int *VAR_9;
    uint64_t VAR_10[3] = {0,0,0};
    double VAR_11[3] = {0,0,0};
    int VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;
    int VAR_17;

    if( VAR_4<4 || 2 != FUNC_9(VAR_5[3], "%dx%d", &VAR_13, &VAR_14) )
    {
        FUNC_8("tiny_ssim <file1.yuv> <file2.yuv> <width>x<height> [<seek>]\n");
        return -1;
    }

    VAR_6[0] = FUNC_2(VAR_5[1], "rb");
    VAR_6[1] = FUNC_2(VAR_5[2], "rb");
    FUNC_9(VAR_5[3], "%dx%d", &VAR_13, &VAR_14);

    if (VAR_13<=0 || VAR_14<=0 || VAR_13*(int64_t)VAR_14 >= VAR_0/3 || 2LL*VAR_13+12 >= VAR_0 / sizeof(*VAR_9)) {
        FUNC_3(VAR_2, "Dimensions are too large, or invalid\n");
        return -2;
    }

    VAR_12 = VAR_13*VAR_14*3LL/2;
    for( VAR_17=0; VAR_17<2; VAR_17++ )
    {
        VAR_7[VAR_17] = FUNC_6(VAR_12);
        VAR_8[VAR_17][0] = VAR_7[VAR_17];
        VAR_8[VAR_17][1] = VAR_8[VAR_17][0] + VAR_13*VAR_14;
        VAR_8[VAR_17][2] = VAR_8[VAR_17][1] + VAR_13*VAR_14/4;
    }
    VAR_9 = FUNC_6((2*VAR_13+12)*sizeof(*VAR_9));
    VAR_16 = VAR_4<5 ? 0 : FUNC_0(VAR_5[4]);
    FUNC_5(VAR_6[VAR_16<0], VAR_16 < 0 ? -VAR_16 : VAR_16, VAR_1);

    for( VAR_15=0;; VAR_15++ )
    {
        uint64_t VAR_18[3];
        double VAR_19[3];
        if( FUNC_4(VAR_7[0], VAR_12, 1, VAR_6[0]) != 1) break;
        if( FUNC_4(VAR_7[1], VAR_12, 1, VAR_6[1]) != 1) break;
        for( VAR_17=0; VAR_17<3; VAR_17++ )
        {
            VAR_18[VAR_17] = FUNC_10 ( VAR_8[0][VAR_17], VAR_8[1][VAR_17], VAR_13*VAR_14>>2*!!VAR_17 );
            VAR_19[VAR_17] = FUNC_11( VAR_8[0][VAR_17], VAR_13>>!!VAR_17,
                                     VAR_8[1][VAR_17], VAR_13>>!!VAR_17,
                                     VAR_13>>!!VAR_17, VAR_14>>!!VAR_17, VAR_9, ((void*)0) );
            VAR_10[VAR_17] += VAR_18[VAR_17];
            VAR_11[VAR_17] += VAR_19[VAR_17];
        }

        FUNC_8("Frame %d | ", VAR_15);
        FUNC_7(VAR_18, VAR_19, 1, VAR_13, VAR_14);
        FUNC_8("                \r");
        FUNC_1(VAR_3);
    }

    if( !VAR_15 ) return 0;

    FUNC_8("Total %d frames | ", VAR_15);
    FUNC_7(VAR_10, VAR_11, VAR_15, VAR_13, VAR_14);
    FUNC_8("\n");

    return 0;
}
