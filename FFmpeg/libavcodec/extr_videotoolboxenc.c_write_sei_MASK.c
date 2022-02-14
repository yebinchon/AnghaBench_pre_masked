
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_3__ {size_t size; int data; } ;
typedef TYPE_1__ ExtraSEI ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,int*,int,size_t) ;

__attribute__((used)) static int FUNC_1(const ExtraSEI *VAR_1,
                     int VAR_2,
                     uint8_t *VAR_3,
                     size_t VAR_4)
{
    uint8_t *VAR_5 = VAR_3;
    size_t VAR_6 = VAR_1->size;
    size_t VAR_7 = VAR_4;
    int VAR_8;
    int VAR_9;
    ssize_t VAR_10;

    if (!VAR_7)
        return VAR_0;

    while (VAR_2 && VAR_7 != 0) {
        int VAR_11 = VAR_2 > 255 ? 255 : VAR_2;
        *VAR_3 = VAR_11;

        VAR_2 -= VAR_11;
        VAR_3++;
        VAR_7--;
    }

    if (!VAR_4)
        return VAR_0;

    while (VAR_6 && VAR_7 != 0) {
        int VAR_12 = VAR_6 > 255 ? 255 : VAR_6;
        *VAR_3 = VAR_12;

        VAR_6 -= VAR_12;
        VAR_3++;
        VAR_7--;
    }

    if (VAR_7 < VAR_1->size)
        return VAR_0;

    VAR_8 = VAR_3 - VAR_5;

    VAR_10 = VAR_8;
    VAR_9 = FUNC_0(VAR_1->data,
                                        VAR_1->size,
                                        VAR_5,
                                        VAR_10,
                                        VAR_4);
    if (VAR_9 < 0)
        return VAR_0;

    VAR_9 += VAR_8;
    return VAR_9;
}
