
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_11__ {float* data; } ;
typedef TYPE_2__ image ;


 char** VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_2__) ;
 TYPE_2__ FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 float* FUNC_5 (TYPE_1__,float*) ;
 TYPE_1__ FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_1__,int,int*) ;

void FUNC_13(char *VAR_3, char *VAR_4, char *VAR_5)
{
    network VAR_6 = FUNC_6(VAR_3);
    if(VAR_4){
        FUNC_4(&VAR_6, VAR_4);
    }
    FUNC_8(&VAR_6, 1);
    FUNC_9(2222222);
    int VAR_7 = 0;
    char **VAR_8 = VAR_0;
    char VAR_9[256];
    char *VAR_10 = VAR_9;
    int VAR_11[6];
    while(1){
        if(VAR_5){
            FUNC_10(VAR_10, VAR_5, 256);
        }else{
            FUNC_7("Enter Image Path: ");
            FUNC_0(VAR_2);
            VAR_10 = FUNC_1(VAR_10, 256, VAR_1);
            if(!VAR_10) return;
            FUNC_11(VAR_10, "\n");
        }
        image VAR_12 = FUNC_3(VAR_10, VAR_6.w, VAR_6.h);
        float *VAR_13 = VAR_12.data;
        float *VAR_14 = FUNC_5(VAR_6, VAR_13);
        FUNC_12(VAR_6, 6, VAR_11);
        for(VAR_7 = 0; VAR_7 < 6; ++VAR_7){
            int VAR_15 = VAR_11[VAR_7];
            FUNC_7("%s: %f\n", VAR_8[VAR_15], VAR_14[VAR_15]);
        }
        FUNC_2(VAR_12);
        if (VAR_5) break;
    }
}
