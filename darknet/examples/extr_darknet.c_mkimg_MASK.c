
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_17__ {TYPE_11__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_18__ {int w; int h; } ;
typedef TYPE_2__ image ;
struct TYPE_16__ {int n; } ;


 TYPE_2__ FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__,double) ;
 int FUNC_2 (TYPE_2__) ;
 TYPE_2__* FUNC_3 (TYPE_11__) ;
 int FUNC_4 (TYPE_2__,TYPE_2__,int,int) ;
 TYPE_1__* FUNC_5 (char*,char*,int ) ;
 TYPE_2__ FUNC_6 (int,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__,int,double,double) ;
 int FUNC_9 (TYPE_2__,int) ;
 int FUNC_10 (TYPE_2__,char*) ;
 int FUNC_11 (char*,char*,char*,int) ;

void FUNC_12(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
    network *VAR_6 = FUNC_5(VAR_0, VAR_1, 0);
    image *VAR_7 = FUNC_3(VAR_6->layers[0]);
    int VAR_8 = VAR_6->layers[0].n;
    int VAR_9;
    for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9){
        image VAR_10 = FUNC_6(VAR_2, VAR_3, 3);
        FUNC_1(VAR_10, .5);
        int VAR_11;
        for(VAR_11 = 0; VAR_11 < 100; ++VAR_11){
            image VAR_12 = FUNC_0(VAR_7[FUNC_7()%VAR_8]);
            FUNC_9(VAR_12, FUNC_7()%4);
            FUNC_8(VAR_12, 1, 1.5, 1.5);
            int VAR_13 = FUNC_7()%(VAR_3-VAR_12.w);
            int VAR_14 = FUNC_7()%(VAR_2-VAR_12.h);
            FUNC_4(VAR_12, VAR_10, VAR_13, VAR_14);
            FUNC_2(VAR_12);
        }
        char VAR_15[256];
        FUNC_11(VAR_15, "%s/gen_%d", VAR_5, VAR_9);
        FUNC_10(VAR_10, VAR_15);
        FUNC_2(VAR_10);
    }
}
