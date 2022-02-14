
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network ;
struct TYPE_3__ {int row; int col; } ;
typedef TYPE_1__ move ;
typedef int mcts_tree ;


 int FUNC_0 (char*,float*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,float*,int,float*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (int ,char*,int,float,float) ;
 int * FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (float*,int ,int) ;
 int FUNC_9 (float*,int,int,int) ;
 int * FUNC_10 (int *,int) ;
 int * FUNC_11 (char*) ;
 TYPE_1__ FUNC_12 (int *,float,int) ;
 int * FUNC_13 (int *,int *,float*,float*,int,int,float,int ) ;
 float FUNC_14 (float*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_17 (int ) ;

void FUNC_18(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6)
{
    mcts_tree *VAR_7 = 0;
    mcts_tree *VAR_8 = 0;
    network *VAR_9 = FUNC_6(VAR_2, VAR_3, 0);


    network *VAR_10;
    if (VAR_4) {
        VAR_10 = FUNC_11(VAR_4);
        if(VAR_5){
            FUNC_7(VAR_10, VAR_5);
        }
    } else {
        VAR_10 = FUNC_1(1, sizeof(network));
        *VAR_10 = *VAR_9;
    }
    FUNC_16(FUNC_17(0));
    char VAR_11[600][93];
    int VAR_12 = 0;


    float *VAR_13 = FUNC_1(19*19*3, sizeof(float));
    FUNC_4(VAR_13);
    float *VAR_14 = FUNC_1(19*19*3, sizeof(float));
    float *VAR_15 = FUNC_1(19*19*3, sizeof(float));
    int VAR_16 = 0;
    int VAR_17 = 1;
    int VAR_18 = 0;
    int VAR_19 = 0;
    int VAR_20 = 0;
    float VAR_21 = .1;
    int VAR_22 = 500;
    float VAR_23 = 5;
    while(1){
        if (VAR_16){
            VAR_7 = FUNC_10(VAR_7, -1);
            VAR_8 = FUNC_10(VAR_8, -1);
            float VAR_24 = FUNC_14(VAR_13);
            if((VAR_24 > 0) == (VAR_20%2==0)) ++VAR_18;
            else ++VAR_19;
            ++VAR_20;
            FUNC_5(VAR_0, "Total: %d, Player 1: %f, Player 2: %f\n", VAR_20, (float)VAR_18/VAR_20, (float)VAR_19/VAR_20);
            FUNC_15(1);
            FUNC_8(VAR_13, 0, 3*19*19*sizeof(float));
            FUNC_4(VAR_13);
            VAR_17 = 1;
            VAR_16 = 0;
            VAR_12 = 0;
            FUNC_3(VAR_1);
            FUNC_3(VAR_0);
        }



        if ((VAR_20%2==0) == (VAR_17==1)){

            VAR_23 = 5;
        } else {

            VAR_23 = 1;
        }
        network *VAR_25 = ((VAR_20%2==0) == (VAR_17==1)) ? VAR_9 : VAR_10;
        mcts_tree *VAR_26 = ((VAR_20%2==0) == (VAR_17==1)) ? VAR_7 : VAR_8;
        VAR_26 = FUNC_13(VAR_26, VAR_25, VAR_13, VAR_15, VAR_17, VAR_22, VAR_23, 0);
        move VAR_27 = FUNC_12(VAR_26, VAR_21, VAR_17);
        if(((VAR_20%2==0) == (VAR_17==1))) VAR_7 = VAR_26;
        else VAR_8 = VAR_26;

        VAR_7 = FUNC_10(VAR_7, VAR_27.row*19 + VAR_27.col);
        VAR_8 = FUNC_10(VAR_8, VAR_27.row*19 + VAR_27.col);

        if(VAR_27.row == 19){
            VAR_16 = 1;
            continue;
        }
        int VAR_28 = VAR_27.row;
        int VAR_29 = VAR_27.col;

        float *VAR_30 = VAR_15;
        VAR_15 = VAR_14;
        VAR_14 = VAR_30;

        if(VAR_17 < 0) FUNC_4(VAR_13);
        VAR_11[VAR_12][0] = VAR_28;
        VAR_11[VAR_12][1] = VAR_29;
        FUNC_0(VAR_11[VAR_12] + 2, VAR_13);
        if(VAR_17 < 0) FUNC_4(VAR_13);
        ++VAR_12;

        FUNC_9(VAR_13, VAR_17, VAR_28, VAR_29);
        FUNC_2(19*19*3, VAR_13, 1, VAR_14, 1);

        VAR_17 = -VAR_17;
    }
}
