
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {scalar_t__ count; TYPE_1__* palette; } ;
struct TYPE_11__ {int height; TYPE_2__* priv_data; } ;
struct TYPE_10__ {TYPE_6__ palettes; } ;
struct TYPE_9__ {int id; int * clut; } ;
typedef TYPE_1__ PGSSubPalette ;
typedef TYPE_2__ PGSSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int const**) ;
 int * VAR_4 ;
 int FUNC_6 (TYPE_3__*,char*,int,int,int,int,int) ;
 TYPE_1__* FUNC_7 (int,TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_5,
                                  const uint8_t *VAR_6, int VAR_7)
{
    PGSSubContext *VAR_8 = VAR_5->priv_data;
    PGSSubPalette *VAR_9;

    const uint8_t *VAR_10 = VAR_6 + VAR_7;
    const uint8_t *VAR_11 = VAR_4 + VAR_3;
    int VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    int VAR_23;

    VAR_23 = FUNC_5(&VAR_6);
    VAR_9 = FUNC_7(VAR_23, &VAR_8->palettes);
    if (!VAR_9) {
        if (VAR_8->palettes.count >= VAR_2) {
            FUNC_4(VAR_5, VAR_1, "Too many palettes in epoch\n");
            return VAR_0;
        }
        VAR_9 = &VAR_8->palettes.palette[VAR_8->palettes.count++];
        VAR_9->id = VAR_23;
    }


    VAR_6 += 1;

    while (VAR_6 < VAR_10) {
        VAR_12 = FUNC_5(&VAR_6);
        VAR_13 = FUNC_5(&VAR_6);
        VAR_15 = FUNC_5(&VAR_6);
        VAR_14 = FUNC_5(&VAR_6);
        VAR_16 = FUNC_5(&VAR_6);


        if (VAR_5->height <= 0 || VAR_5->height > 576) {
            FUNC_2(VAR_14, VAR_15);
        } else {
            FUNC_1(VAR_14, VAR_15);
        }

        FUNC_3(VAR_17, VAR_18, VAR_19, VAR_13);

        FUNC_6(VAR_5, "Color %d := (%d,%d,%d,%d)\n", VAR_12, VAR_17, VAR_18, VAR_19, VAR_16);


        VAR_9->clut[VAR_12] = FUNC_0(VAR_17,VAR_18,VAR_19,VAR_16);
    }
    return 0;
}
