
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
typedef scalar_t__ USHORT ;
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
 int FUNC_1 (int *,int *) ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;

eMBErrorCode FUNC_4(UCHAR * VAR_7, USHORT VAR_8,
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
    USHORT VAR_14 = VAR_9;
    eMBErrorCode VAR_15 = VAR_2;
    USHORT VAR_16;

    if ((VAR_8 >= VAR_12)
            && (VAR_13 != ((void*)0))
            && (VAR_9 >= 1)
            && ((VAR_8 + VAR_14) <= (VAR_12 + VAR_11 + 1))
            && (VAR_11 >= 1)) {
        VAR_16 = (USHORT)(VAR_8 - VAR_12 - 1);
        VAR_16 <<= 1;
        VAR_13 += VAR_16;
        UCHAR* VAR_17 = VAR_13;
        while (VAR_14 > 0) {
            FUNC_1(VAR_7, VAR_13);
            VAR_16 += 2;
            VAR_14 -= 1;
        }

        (void)FUNC_2(VAR_4);

        (void)FUNC_3(VAR_4, (uint16_t)VAR_8,
                        (uint8_t*)VAR_17, (uint16_t)VAR_9);
    } else {
        VAR_15 = VAR_3;
    }
    return VAR_15;
}
