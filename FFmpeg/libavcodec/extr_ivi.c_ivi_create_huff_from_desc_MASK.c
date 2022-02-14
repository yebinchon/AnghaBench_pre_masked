
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int VLC ;
struct TYPE_3__ {int num_rows; int* xbits; } ;
typedef TYPE_1__ IVIHuffDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int*,int,int,int *,int,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const IVIHuffDesc *VAR_4, VLC *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    uint16_t VAR_13[256];
    uint8_t VAR_14[256];

    VAR_7 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_4->num_rows; VAR_8++) {
        VAR_10 = 1 << VAR_4->xbits[VAR_8];
        VAR_12 = (VAR_8 != VAR_4->num_rows - 1);
        VAR_11 = ((1 << VAR_8) - 1) << (VAR_4->xbits[VAR_8] + VAR_12);

        for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
            if (VAR_7 >= 256)
                break;

            VAR_14[VAR_7] = VAR_8 + VAR_4->xbits[VAR_8] + VAR_12;
            if (VAR_14[VAR_7] > VAR_3)
                return VAR_0;

            VAR_13[VAR_7] = FUNC_1((VAR_11 | VAR_9), VAR_14[VAR_7]);
            if (!VAR_14[VAR_7])
                VAR_14[VAR_7] = 1;

            VAR_7++;
        }
    }


    return FUNC_0(VAR_5, VAR_3, VAR_7, VAR_14, 1, 1, VAR_13, 2, 2,
                    (VAR_6 ? VAR_2 : 0) | VAR_1);
}
