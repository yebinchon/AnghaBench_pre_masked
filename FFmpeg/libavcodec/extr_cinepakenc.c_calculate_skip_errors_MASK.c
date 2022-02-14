
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int strip_info ;
struct TYPE_7__ {int w; TYPE_1__* mb; } ;
struct TYPE_6__ {int skip_error; } ;
typedef TYPE_2__ CinepakEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int **,int*,int **,int*) ;
 int FUNC_1 (TYPE_2__*,int,int,int **,int*,int **,int*) ;

__attribute__((used)) static void FUNC_2(CinepakEncContext *VAR_1, int VAR_2,
                                  uint8_t *VAR_3[4], int VAR_4[4],
                                  uint8_t *VAR_5[4], int VAR_6[4],
                                  strip_info *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    uint8_t *VAR_11 [4], *VAR_12 [4];
    int VAR_13[4], VAR_14[4];

    for (VAR_10 = VAR_9 = 0; VAR_9 < VAR_2; VAR_9 += VAR_0)
        for (VAR_8 = 0; VAR_8 < VAR_1->w; VAR_8 += VAR_0, VAR_10++) {
            FUNC_1(VAR_1, VAR_8, VAR_9, VAR_3, VAR_4,
                            VAR_11, VAR_13);
            FUNC_1(VAR_1, VAR_8, VAR_9, VAR_5, VAR_6,
                            VAR_12, VAR_14);

            VAR_1->mb[VAR_10].skip_error =
                FUNC_0(VAR_1,
                                      VAR_11, VAR_13,
                                      VAR_12, VAR_14);
        }
}
