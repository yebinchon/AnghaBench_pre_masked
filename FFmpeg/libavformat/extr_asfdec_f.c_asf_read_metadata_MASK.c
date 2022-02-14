
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_1__* dar; } ;
struct TYPE_8__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_7__ {int num; int den; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int,int,int,int,int,int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_2__*,int *,int,int,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_2, int64_t VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    ASFContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;
    VAR_6 = FUNC_5(VAR_4);

    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        uint8_t *VAR_13;
        int VAR_14;

        FUNC_5(VAR_4);
        VAR_7 = FUNC_5(VAR_4);
        VAR_8 = FUNC_5(VAR_4);
        VAR_14 = FUNC_5(VAR_4);
        VAR_10 = FUNC_6(VAR_4);

        VAR_9 = 2*VAR_8 + 1;
        VAR_13 = FUNC_3(VAR_9);
        if (!VAR_13)
            return FUNC_0(VAR_1);

        if ((VAR_11 = FUNC_4(VAR_4, VAR_8, VAR_13, VAR_9)) < VAR_8)
            FUNC_7(VAR_4, VAR_8 - VAR_11);
        FUNC_2(VAR_2, VAR_0, "%d stream %d name_len %2d type %d len %4d <%s>\n",
                VAR_12, VAR_7, VAR_8, VAR_14, VAR_10, VAR_13);

        if (!FUNC_10(VAR_13, "AspectRatioX")){
            int VAR_15 = FUNC_9(VAR_2->pb, VAR_14, 16);
            if(VAR_7 < 128)
                VAR_5->dar[VAR_7].num = VAR_15;
        } else if(!FUNC_10(VAR_13, "AspectRatioY")){
            int VAR_16 = FUNC_9(VAR_2->pb, VAR_14, 16);
            if(VAR_7 < 128)
                VAR_5->dar[VAR_7].den = VAR_16;
        } else {
            FUNC_8(VAR_2, VAR_13, VAR_14, VAR_10, 16);
        }
        FUNC_1(&VAR_13);
    }

    return 0;
}
