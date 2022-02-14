
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; float w; float h; int id; } ;
typedef TYPE_1__ box_label ;


 int FUNC_0 (TYPE_1__*,int,float,float,float,float,int) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (char*,int*) ;

void FUNC_5(char *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8)
{
    char VAR_9[4096];
    FUNC_1(VAR_0, "images", "labels", VAR_9);
    FUNC_1(VAR_9, "JPEGImages", "labels", VAR_9);

    FUNC_1(VAR_9, ".jpg", ".txt", VAR_9);
    FUNC_1(VAR_9, ".png", ".txt", VAR_9);
    FUNC_1(VAR_9, ".JPG", ".txt", VAR_9);
    FUNC_1(VAR_9, ".JPEG", ".txt", VAR_9);
    int VAR_10 = 0;
    box_label *VAR_11 = FUNC_4(VAR_9, &VAR_10);
    FUNC_3(VAR_11, VAR_10);
    FUNC_0(VAR_11, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_4);
    float VAR_12,VAR_13,VAR_14,VAR_15;
    int VAR_16;
    int VAR_17;

    for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
        VAR_12 = VAR_11[VAR_17].x;
        VAR_13 = VAR_11[VAR_17].y;
        VAR_14 = VAR_11[VAR_17].w;
        VAR_15 = VAR_11[VAR_17].h;
        VAR_16 = VAR_11[VAR_17].id;

        if (VAR_14 < .005 || VAR_15 < .005) continue;

        int VAR_18 = (int)(VAR_12*VAR_3);
        int VAR_19 = (int)(VAR_13*VAR_3);

        VAR_12 = VAR_12*VAR_3 - VAR_18;
        VAR_13 = VAR_13*VAR_3 - VAR_19;

        int VAR_20 = (VAR_18+VAR_19*VAR_3)*(5+VAR_2);
        if (VAR_1[VAR_20]) continue;
        VAR_1[VAR_20++] = 1;

        if (VAR_16 < VAR_2) VAR_1[VAR_20+VAR_16] = 1;
        VAR_20 += VAR_2;

        VAR_1[VAR_20++] = VAR_12;
        VAR_1[VAR_20++] = VAR_13;
        VAR_1[VAR_20++] = VAR_14;
        VAR_1[VAR_20++] = VAR_15;
    }
    FUNC_2(VAR_11);
}
