
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int w; int h; float* data; } ;
typedef TYPE_1__ image ;
struct TYPE_18__ {int w; int x; int y; int h; } ;
typedef TYPE_2__ box ;
struct TYPE_19__ {int aspect; int dy; int dx; int h; int w; int scale; int rad; } ;
typedef TYPE_3__ augment_args ;
typedef int FILE ;


 TYPE_2__ FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (TYPE_1__) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (TYPE_1__) ;
 int FUNC_9 (int *,char*,int*,char*) ;
 int FUNC_10 (TYPE_1__,int*,int) ;
 TYPE_1__ FUNC_11 (int,int,int) ;
 int* FUNC_12 (char*,int*,int ) ;
 TYPE_1__ FUNC_13 (TYPE_1__,int,int) ;
 TYPE_1__ FUNC_14 (TYPE_1__,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_15(char *VAR_0, int VAR_1, float *VAR_2, int VAR_3, int VAR_4, int VAR_5, augment_args VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    char VAR_10[4096];
    FUNC_4(VAR_0, "images", "mask", VAR_10);
    FUNC_4(VAR_10, "JPEGImages", "mask", VAR_10);
    FUNC_4(VAR_10, ".jpg", ".txt", VAR_10);
    FUNC_4(VAR_10, ".JPG", ".txt", VAR_10);
    FUNC_4(VAR_10, ".JPEG", ".txt", VAR_10);
    FILE *VAR_11 = FUNC_6(VAR_10, "r");
    if(!VAR_11) FUNC_3(VAR_10);
    char VAR_12[32788];
    int VAR_13;
    int VAR_14 = 0;
    image VAR_15 = FUNC_11(VAR_4, VAR_5, 1);
    while((FUNC_9(VAR_11, "%d %s", &VAR_13, VAR_12) == 2) && VAR_14 < VAR_1){
        int VAR_16 = 0;
        int *VAR_17 = FUNC_12(VAR_12, &VAR_16, 0);
        FUNC_10(VAR_15, VAR_17, VAR_16);
        image VAR_18 = FUNC_14(VAR_15, VAR_6.rad, VAR_6.scale, VAR_6.w, VAR_6.h, VAR_6.dx, VAR_6.dy, VAR_6.aspect);
        if(VAR_7) FUNC_5(VAR_18);
        box VAR_19 = FUNC_0(VAR_18);
        if(VAR_19.w > 0){
            image VAR_20 = FUNC_1(VAR_18, VAR_19.x, VAR_19.y, VAR_19.w, VAR_19.h);
            image VAR_21 = FUNC_13(VAR_20, VAR_8, VAR_9);
            VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 0] = (VAR_19.x + VAR_19.w/2.)/VAR_18.w;
            VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 1] = (VAR_19.y + VAR_19.h/2.)/VAR_18.h;
            VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 2] = VAR_19.w/VAR_18.w;
            VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 3] = VAR_19.h/VAR_18.h;
            int VAR_22;
            for(VAR_22 = 0; VAR_22 < VAR_8*VAR_9; ++VAR_22){
                VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 4 + VAR_22] = VAR_21.data[VAR_22];
            }
            VAR_2[VAR_14*(4 + VAR_8*VAR_9 + 1) + 4 + VAR_8*VAR_9] = VAR_13;
            FUNC_8(VAR_20);
            FUNC_8(VAR_21);
            ++VAR_14;
        }
        FUNC_8(VAR_18);
        FUNC_7(VAR_17);
    }
    FUNC_2(VAR_11);
    FUNC_8(VAR_15);
}
