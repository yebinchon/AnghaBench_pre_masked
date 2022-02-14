
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_13__ {int error; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_12__ {unsigned int* sbsplit; int sbwidth; int sbheight; int blwidth; int blheight; int num_refs; int * blmotion; TYPE_2__* plane; TYPE_1__ seq; int gb; } ;
struct TYPE_11__ {int xbsep; int ybsep; } ;
typedef int GetBitContext ;
typedef TYPE_3__ DiracContext ;
typedef int DiracBlock ;
typedef TYPE_4__ DiracArith ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int *,int,int,int) ;
 unsigned int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (unsigned int*,int,int,int) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static int FUNC_8(DiracContext *VAR_3)
{
    GetBitContext *VAR_4 = &VAR_3->gb;
    uint8_t *VAR_5 = VAR_3->sbsplit;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    DiracArith VAR_11[8];

    FUNC_1(VAR_4);


    VAR_3->sbwidth = FUNC_0(VAR_3->seq.width, 4*VAR_3->plane[0].xbsep);
    VAR_3->sbheight = FUNC_0(VAR_3->seq.height, 4*VAR_3->plane[0].ybsep);
    VAR_3->blwidth = 4 * VAR_3->sbwidth;
    VAR_3->blheight = 4 * VAR_3->sbheight;



    FUNC_4(VAR_11, VAR_4, FUNC_5(VAR_4));
    for (VAR_8 = 0; VAR_8 < VAR_3->sbheight; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_3->sbwidth; VAR_7++) {
            unsigned int VAR_12 = FUNC_3(VAR_11, VAR_2, VAR_1);
            if (VAR_12 > 2)
                return VAR_0;
            VAR_5[VAR_7] = (VAR_12 + FUNC_6(VAR_5+VAR_7, VAR_3->sbwidth, VAR_7, VAR_8)) % 3;
        }
        VAR_5 += VAR_3->sbwidth;
    }


    FUNC_4(VAR_11, VAR_4, FUNC_5(VAR_4));
    for (VAR_6 = 0; VAR_6 < VAR_3->num_refs; VAR_6++) {
        FUNC_4(VAR_11 + 4 + 2 * VAR_6, VAR_4, FUNC_5(VAR_4));
        FUNC_4(VAR_11 + 5 + 2 * VAR_6, VAR_4, FUNC_5(VAR_4));
    }
    for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
        FUNC_4(VAR_11+1+VAR_6, VAR_4, FUNC_5(VAR_4));

    for (VAR_8 = 0; VAR_8 < VAR_3->sbheight; VAR_8++)
        for (VAR_7 = 0; VAR_7 < VAR_3->sbwidth; VAR_7++) {
            int VAR_13 = 1 << VAR_3->sbsplit[VAR_8 * VAR_3->sbwidth + VAR_7];
            int VAR_14 = 4 >> VAR_3->sbsplit[VAR_8 * VAR_3->sbwidth + VAR_7];

            for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
                for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
                    int VAR_15 = 4 * VAR_7 + VAR_10*VAR_14;
                    int VAR_16 = 4 * VAR_8 + VAR_9*VAR_14;
                    DiracBlock *VAR_17 = &VAR_3->blmotion[VAR_16*VAR_3->blwidth + VAR_15];
                    FUNC_2(VAR_3, VAR_11, VAR_17, VAR_3->blwidth, VAR_15, VAR_16);
                    FUNC_7(VAR_17, VAR_3->blwidth, VAR_14);
                }
        }

    for (VAR_6 = 0; VAR_6 < 4 + 2*VAR_3->num_refs; VAR_6++) {
        if (VAR_11[VAR_6].error)
            return VAR_11[VAR_6].error;
    }

    return 0;
}
