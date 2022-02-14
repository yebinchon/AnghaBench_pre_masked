
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

void FUNC_5(char *VAR_0, float *VAR_1, int VAR_2, int VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
    char VAR_8[4096];
    FUNC_1(VAR_0, "images", "labels", VAR_8);
    FUNC_1(VAR_8, "JPEGImages", "labels", VAR_8);
    FUNC_1(VAR_8, ".jpg", ".txt", VAR_8);
    FUNC_1(VAR_8, ".JPG", ".txt", VAR_8);
    FUNC_1(VAR_8, ".JPEG", ".txt", VAR_8);

    int VAR_9 = 0;
    box_label *VAR_10 = FUNC_4(VAR_8, &VAR_9);
    FUNC_3(VAR_10, VAR_9);
    FUNC_0(VAR_10, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_3);
    float VAR_11,VAR_12,VAR_13,VAR_14;
    int VAR_15;
    int VAR_16;

    for (VAR_16 = 0; VAR_16 < VAR_9 && VAR_16 < 90; ++VAR_16) {
        VAR_11 = VAR_10[VAR_16].x;
        VAR_12 = VAR_10[VAR_16].y;
        VAR_13 = VAR_10[VAR_16].w;
        VAR_14 = VAR_10[VAR_16].h;
        VAR_15 = VAR_10[VAR_16].id;

        if (VAR_13 < .0 || VAR_14 < .0) continue;

        int VAR_17 = (4+VAR_2) * VAR_16;

        VAR_1[VAR_17++] = VAR_11;
        VAR_1[VAR_17++] = VAR_12;
        VAR_1[VAR_17++] = VAR_13;
        VAR_1[VAR_17++] = VAR_14;

        if (VAR_15 < VAR_2) VAR_1[VAR_17+VAR_15] = 1;
    }
    FUNC_2(VAR_10);
}
