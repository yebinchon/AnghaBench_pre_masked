
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int v ;
struct TYPE_5__ {int count; double* covariance; scalar_t__* mean; } ;
typedef TYPE_1__ PCA ;
typedef int AVLFG ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (double) ;
 int FUNC_5 (TYPE_1__*,double*,double*) ;
 int FUNC_6 (TYPE_1__*,double*) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (double*,int ,int) ;
 int FUNC_9 (char*,...) ;

int FUNC_10(void){
    PCA *VAR_1;
    int VAR_2, VAR_3, VAR_4;

    double VAR_5[8*8];
    double VAR_6[8];
    AVLFG VAR_7;

    FUNC_3(&VAR_7, 1);

    VAR_1= FUNC_7(8);

    for(VAR_2=0; VAR_2<9000000; VAR_2++){
        double VAR_8[2*8 +100];
        double VAR_9=0;
        int VAR_10 = FUNC_2(&VAR_7) % 8;
        int VAR_11 = FUNC_2(&VAR_7) % 101 - 50;
        VAR_8[0] = FUNC_2(&VAR_7) % 101 - 50;
        for(VAR_3=1; VAR_3<8; VAR_3++){
            if(VAR_3<=VAR_10) VAR_8[VAR_3]= VAR_8[0];
            else VAR_8[VAR_3]= VAR_11;
            VAR_9 += VAR_8[VAR_3];
        }
        FUNC_6(VAR_1, VAR_8);
    }


    FUNC_5(VAR_1, VAR_5, VAR_6);
    for(VAR_2=0; VAR_2<8; VAR_2++){
        VAR_1->count= 1;
        VAR_1->mean[VAR_2]= 0;





        for(VAR_3=VAR_2; VAR_3<8; VAR_3++){
            FUNC_9("%f ", VAR_1->covariance[VAR_2 + VAR_3*8]);
        }
        FUNC_9("\n");
    }

    for(VAR_2=0; VAR_2<8; VAR_2++){
        double VAR_12[8];
        double VAR_13=0;
        FUNC_8(VAR_12, 0, sizeof(VAR_12));
        for(VAR_3=0; VAR_3<8; VAR_3++){
            for(VAR_4=0; VAR_4<8; VAR_4++){
                VAR_12[VAR_3] += VAR_1->covariance[FUNC_1(VAR_4,VAR_3) + FUNC_0(VAR_4,VAR_3)*8] * VAR_5[VAR_2 + VAR_4*8];
            }
            VAR_12[VAR_3] /= VAR_6[VAR_2];
            VAR_13 += FUNC_4(VAR_12[VAR_3] - VAR_5[VAR_2 + VAR_3*8]);
        }
        FUNC_9("%f ", VAR_13);
    }
    FUNC_9("\n");

    for(VAR_2=0; VAR_2<8; VAR_2++){
        for(VAR_3=0; VAR_3<8; VAR_3++){
            FUNC_9("%9.6f ", VAR_5[VAR_2 + VAR_3*8]);
        }
        FUNC_9("  %9.1f %f\n", VAR_6[VAR_2], VAR_6[VAR_2]/VAR_6[0]);
    }

    return 0;
}
