
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int state ;
typedef int CABACContext ;
typedef int AVLFG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

int FUNC_12(void){
    CABACContext VAR_2;
    uint8_t VAR_3[9*VAR_1];
    uint8_t VAR_4[9*VAR_1];
    int VAR_5, VAR_6 = 0;
    uint8_t VAR_7[10]= {0};
    AVLFG VAR_8;

    FUNC_1(&VAR_8, 1);
    FUNC_4(&VAR_2, VAR_3, VAR_1);

    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
        if(2*VAR_5<VAR_1) VAR_4[VAR_5] = FUNC_0(&VAR_8) % 7;
        else VAR_4[VAR_5] = (VAR_5>>8)&1;
    }

    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
        FUNC_10(&VAR_2, VAR_4[VAR_5]&1);
    }

    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
        FUNC_9(&VAR_2, VAR_7, VAR_4[VAR_5]&1);
    }

    VAR_5= FUNC_11(&VAR_2, 1);
    VAR_3[VAR_5++] = FUNC_0(&VAR_8);
    VAR_3[VAR_5 ] = FUNC_0(&VAR_8);

    FUNC_3(&VAR_2, VAR_3, VAR_1);

    FUNC_8(VAR_7, 0, sizeof(VAR_7));

    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
        if( (VAR_4[VAR_5]&1) != FUNC_5(&VAR_2) ) {
            FUNC_2(((void*)0), VAR_0, "CABAC bypass failure at %d\n", VAR_5);
            VAR_6 = 1;
        }
    }

    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
        if( (VAR_4[VAR_5]&1) != FUNC_6(&VAR_2, VAR_7) ) {
            FUNC_2(((void*)0), VAR_0, "CABAC failure at %d\n", VAR_5);
            VAR_6 = 1;
        }
    }
    if(!FUNC_7(&VAR_2)) {
        FUNC_2(((void*)0), VAR_0, "where's the Terminator?\n");
        VAR_6 = 1;
    }

    return VAR_6;
}
