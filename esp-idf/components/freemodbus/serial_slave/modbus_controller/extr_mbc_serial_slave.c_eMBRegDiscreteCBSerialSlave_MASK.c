
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* mbs_area_descriptors; } ;
typedef TYPE_2__ mb_slave_options_t ;
typedef int eMBErrorCode ;
typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_6__ {TYPE_2__ opts; } ;
struct TYPE_4__ {int size; scalar_t__ address; scalar_t__ start_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int*,int,int) ;

eMBErrorCode FUNC_4(UCHAR* VAR_7, USHORT VAR_8,
                            USHORT VAR_9)
{
    FUNC_0((VAR_6 != ((void*)0)),
                    VAR_0, "Slave stack uninitialized.");
    FUNC_0((VAR_7 != ((void*)0)),
                    VAR_1, "Slave stack call failed.");
    mb_slave_options_t* VAR_10 = &VAR_6->opts;
    USHORT VAR_11 = (USHORT)(VAR_10->mbs_area_descriptors[VAR_5].size >> 1);
    USHORT VAR_12 = (USHORT)VAR_10->mbs_area_descriptors[VAR_5].start_offset;
    UCHAR* VAR_13 = (UCHAR*)VAR_10->mbs_area_descriptors[VAR_5].address;
    eMBErrorCode VAR_14 = VAR_2;
    USHORT VAR_15, VAR_16, VAR_17;
    UCHAR* VAR_18;
    VAR_17 = VAR_9 / 8 + 1;
    VAR_18 = (UCHAR*) VAR_13;

    VAR_8--;
    if ((VAR_8 >= VAR_12)
            && (VAR_11 >= 1)
            && (VAR_13 != ((void*)0))
            && ((VAR_8 + VAR_9) <= (VAR_12 + (VAR_11 * 16)))
            && (VAR_9 >= 1)) {
        VAR_15 = (USHORT) (VAR_8 - VAR_12) / 8;
        VAR_16 = (USHORT)(VAR_8 - VAR_12) % 8;
        UCHAR* VAR_19 = &VAR_18[VAR_15];
        while (VAR_17 > 0) {
            *VAR_7++ = FUNC_3(&VAR_18[VAR_15++], VAR_16, 8);
            VAR_17--;
        }
        VAR_7--;

        VAR_9 = VAR_9 % 8;

        *VAR_7 = *VAR_7 << (8 - VAR_9);
        *VAR_7 = *VAR_7 >> (8 - VAR_9);

        (void)FUNC_1(VAR_4);
        (void)FUNC_2(VAR_4, (uint16_t)VAR_8,
                            (uint8_t*)VAR_19, (uint16_t)VAR_9);
    } else {
        VAR_14 = VAR_3;
    }
    return VAR_14;
}
