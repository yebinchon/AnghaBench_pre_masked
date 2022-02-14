
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* sys; TYPE_1__* avctx; } ;
struct TYPE_7__ {int height; int n_difchan; int difseg_size; scalar_t__ dsf; } ;
struct TYPE_6__ {int frame_number; } ;
typedef TYPE_3__ DVVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int,int,int *) ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int,int,int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(DVVideoContext *VAR_9, uint8_t *VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14;

    int VAR_15 = 2*(VAR_9->sys->height == 720 && VAR_9->avctx->frame_number & 1);

    for (VAR_11 = 0; VAR_11 < VAR_9->sys->n_difchan; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_9->sys->difseg_size; VAR_12++) {
            FUNC_3(VAR_10, 0xff, 80 * 6);


            VAR_10 += FUNC_0(VAR_3, VAR_11+VAR_15, VAR_12, 0, VAR_10);
            VAR_10 += FUNC_1((VAR_9->sys->dsf ? VAR_1 : VAR_0),
                                 VAR_9, VAR_10);
            VAR_10 += 72;


            for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
                VAR_10 += FUNC_0(VAR_4, VAR_11+VAR_15, VAR_12, VAR_13, VAR_10);
                for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
                    VAR_10 += FUNC_2(VAR_14, (VAR_12 < VAR_9->sys->difseg_size / 2), VAR_10) + 5;
                VAR_10 += 29;
            }


            for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
                VAR_10 += FUNC_0(VAR_5, VAR_11+VAR_15, VAR_12, VAR_13, VAR_10);
                VAR_10 += FUNC_1(VAR_8, VAR_9, VAR_10);
                VAR_10 += FUNC_1(VAR_7, VAR_9, VAR_10);
                VAR_10 += 7 * 5;
                VAR_10 += FUNC_1(VAR_8, VAR_9, VAR_10);
                VAR_10 += FUNC_1(VAR_7, VAR_9, VAR_10);
                VAR_10 += 4 * 5 + 2;
            }


            for (VAR_13 = 0; VAR_13 < 135; VAR_13++) {
                if (VAR_13 % 15 == 0) {
                    FUNC_3(VAR_10, 0xff, 80);
                    VAR_10 += FUNC_0(VAR_2, VAR_11+VAR_15, VAR_12, VAR_13/15, VAR_10);
                    VAR_10 += 77;
                }
                VAR_10 += FUNC_0(VAR_6, VAR_11+VAR_15, VAR_12, VAR_13, VAR_10);
                VAR_10 += 77;



            }
        }
    }
}
