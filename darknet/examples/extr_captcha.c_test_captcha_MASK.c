
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_10__ {float* data; } ;
typedef TYPE_2__ image ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_2__) ;
 char** FUNC_3 (char*) ;
 TYPE_2__ FUNC_4 (char*,int ,int ) ;
 TYPE_1__* FUNC_5 (char*,char*,int ) ;
 float* FUNC_6 (TYPE_1__*,float*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_1__*,int,int*) ;

void FUNC_13(char *VAR_2, char *VAR_3, char *VAR_4)
{
    network *VAR_5 = FUNC_5(VAR_2, VAR_3, 0);
    FUNC_8(VAR_5, 1);
    FUNC_9(2222222);
    int VAR_6 = 0;
    char **VAR_7 = FUNC_3("/data/captcha/reimgs.labels.list");
    char VAR_8[256];
    char *VAR_9 = VAR_8;
    int VAR_10[26];
    while(1){
        if(VAR_4){
            FUNC_10(VAR_9, VAR_4, 256);
        }else{


            VAR_9 = FUNC_1(VAR_9, 256, VAR_0);
            if(!VAR_9) return;
            FUNC_11(VAR_9, "\n");
        }
        image VAR_11 = FUNC_4(VAR_9, VAR_5->w, VAR_5->h);
        float *VAR_12 = VAR_11.data;
        float *VAR_13 = FUNC_6(VAR_5, VAR_12);
        FUNC_12(VAR_5, 26, VAR_10);

        for(VAR_6 = 0; VAR_6 < 26; ++VAR_6){
            int VAR_14 = VAR_10[VAR_6];
            if(VAR_6 != 0) FUNC_7(", ");
            FUNC_7("%s %f", VAR_7[VAR_14], VAR_13[VAR_14]);
        }
        FUNC_7("\n");
        FUNC_0(VAR_1);
        FUNC_2(VAR_11);
        if (VAR_4) break;
    }
}
