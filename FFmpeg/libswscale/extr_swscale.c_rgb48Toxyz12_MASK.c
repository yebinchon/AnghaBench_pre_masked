
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct SwsContext {int* rgbgammainv; int** rgb2xyz_matrix; int* xyzgammainv; int dstFormat; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct SwsContext *VAR_1, uint16_t *VAR_2,
                         const uint16_t *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6,VAR_7;
    const AVPixFmtDescriptor *VAR_8 = FUNC_5(VAR_1->dstFormat);

    for (VAR_7=0; VAR_7<VAR_5; VAR_7++) {
        for (VAR_6=0; VAR_6+2<VAR_4; VAR_6+=3) {
            int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

            if (VAR_8->flags & VAR_0) {
                VAR_12 = FUNC_0(VAR_3 + VAR_6 + 0);
                VAR_13 = FUNC_0(VAR_3 + VAR_6 + 1);
                VAR_14 = FUNC_0(VAR_3 + VAR_6 + 2);
            } else {
                VAR_12 = FUNC_1(VAR_3 + VAR_6 + 0);
                VAR_13 = FUNC_1(VAR_3 + VAR_6 + 1);
                VAR_14 = FUNC_1(VAR_3 + VAR_6 + 2);
            }

            VAR_12 = VAR_1->rgbgammainv[VAR_12>>4];
            VAR_13 = VAR_1->rgbgammainv[VAR_13>>4];
            VAR_14 = VAR_1->rgbgammainv[VAR_14>>4];


            VAR_9 = (VAR_1->rgb2xyz_matrix[0][0] * VAR_12 +
                VAR_1->rgb2xyz_matrix[0][1] * VAR_13 +
                VAR_1->rgb2xyz_matrix[0][2] * VAR_14) >> 12;
            VAR_10 = (VAR_1->rgb2xyz_matrix[1][0] * VAR_12 +
                VAR_1->rgb2xyz_matrix[1][1] * VAR_13 +
                VAR_1->rgb2xyz_matrix[1][2] * VAR_14) >> 12;
            VAR_11 = (VAR_1->rgb2xyz_matrix[2][0] * VAR_12 +
                VAR_1->rgb2xyz_matrix[2][1] * VAR_13 +
                VAR_1->rgb2xyz_matrix[2][2] * VAR_14) >> 12;


            VAR_9 = FUNC_4(VAR_9, 12);
            VAR_10 = FUNC_4(VAR_10, 12);
            VAR_11 = FUNC_4(VAR_11, 12);


            if (VAR_8->flags & VAR_0) {
                FUNC_2(VAR_2 + VAR_6 + 0, VAR_1->xyzgammainv[VAR_9] << 4);
                FUNC_2(VAR_2 + VAR_6 + 1, VAR_1->xyzgammainv[VAR_10] << 4);
                FUNC_2(VAR_2 + VAR_6 + 2, VAR_1->xyzgammainv[VAR_11] << 4);
            } else {
                FUNC_3(VAR_2 + VAR_6 + 0, VAR_1->xyzgammainv[VAR_9] << 4);
                FUNC_3(VAR_2 + VAR_6 + 1, VAR_1->xyzgammainv[VAR_10] << 4);
                FUNC_3(VAR_2 + VAR_6 + 2, VAR_1->xyzgammainv[VAR_11] << 4);
            }
        }
        VAR_3 += VAR_4;
        VAR_2 += VAR_4;
    }
}
