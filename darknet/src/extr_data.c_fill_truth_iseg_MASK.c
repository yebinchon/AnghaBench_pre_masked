
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {float* data; } ;
typedef TYPE_1__ image ;
struct TYPE_13__ {int aspect; int dy; int dx; int h; int w; int scale; int rad; } ;
typedef TYPE_2__ augment_args ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (TYPE_1__) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (int *,char*,int*,char*) ;
 int FUNC_8 (TYPE_1__,int*,int) ;
 TYPE_1__ FUNC_9 (int,int,int) ;
 int* FUNC_10 (char*,int*,int ) ;
 TYPE_1__ FUNC_11 (TYPE_1__,int,int) ;
 TYPE_1__ FUNC_12 (TYPE_1__,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_13(char *VAR_0, int VAR_1, float *VAR_2, int VAR_3, int VAR_4, int VAR_5, augment_args VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    char VAR_10[4096];
    FUNC_2(VAR_0, "images", "mask", VAR_10);
    FUNC_2(VAR_10, "JPEGImages", "mask", VAR_10);
    FUNC_2(VAR_10, ".jpg", ".txt", VAR_10);
    FUNC_2(VAR_10, ".JPG", ".txt", VAR_10);
    FUNC_2(VAR_10, ".JPEG", ".txt", VAR_10);
    FILE *VAR_11 = FUNC_4(VAR_10, "r");
    if(!VAR_11) FUNC_1(VAR_10);
    char VAR_12[32788];
    int VAR_13;
    int VAR_14 = 0;
    int VAR_15;
    image VAR_16 = FUNC_9(VAR_4, VAR_5, 1);
    while((FUNC_7(VAR_11, "%d %s", &VAR_13, VAR_12) == 2) && VAR_14 < VAR_1){
        int VAR_17 = 0;
        int *VAR_18 = FUNC_10(VAR_12, &VAR_17, 0);
        FUNC_8(VAR_16, VAR_18, VAR_17);
        image VAR_19 = FUNC_12(VAR_16, VAR_6.rad, VAR_6.scale, VAR_6.w, VAR_6.h, VAR_6.dx, VAR_6.dy, VAR_6.aspect);
        if(VAR_7) FUNC_3(VAR_19);

        image VAR_20 = FUNC_11(VAR_19, VAR_8, VAR_9);
        VAR_2[VAR_14*(VAR_8*VAR_9+1)] = VAR_13;
        for(VAR_15 = 0; VAR_15 < VAR_8*VAR_9; ++VAR_15){
            VAR_2[VAR_14*(VAR_8*VAR_9 + 1) + 1 + VAR_15] = VAR_20.data[VAR_15];
        }
        ++VAR_14;

        FUNC_6(VAR_20);
        FUNC_6(VAR_19);
        FUNC_5(VAR_18);
    }
    if(VAR_14 < VAR_1) VAR_2[VAR_14*(VAR_8*VAR_9+1)] = -1;
    FUNC_0(VAR_11);
    FUNC_6(VAR_16);
}
