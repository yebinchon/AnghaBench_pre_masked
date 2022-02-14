
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
typedef int eMBRegisterMode ;
typedef int eMBErrorCode ;
typedef scalar_t__ USHORT ;
typedef int UCHAR ;
struct TYPE_6__ {TYPE_2__ opts; } ;
struct TYPE_4__ {int size; scalar_t__ address; scalar_t__ start_offset; } ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;


 int FUNC_0 (int ,int ,char*) ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,scalar_t__,int,int ) ;

eMBErrorCode FUNC_5(UCHAR* VAR_8, USHORT VAR_9,
        USHORT VAR_10, eMBRegisterMode VAR_11)
{
    FUNC_0((VAR_7 != ((void*)0)),
                    VAR_0, "Slave stack uninitialized.");
    FUNC_0((VAR_8 != ((void*)0)),
                    VAR_1, "Slave stack call failed.");
    mb_slave_options_t* VAR_12 = &VAR_7->opts;
    USHORT VAR_13 = (USHORT)(VAR_12->mbs_area_descriptors[VAR_6].size >> 1);
    USHORT VAR_14 = (USHORT)VAR_12->mbs_area_descriptors[VAR_6].start_offset;
    UCHAR* VAR_15 = (UCHAR*)VAR_12->mbs_area_descriptors[VAR_6].address;
    eMBErrorCode VAR_16 = VAR_2;
    USHORT VAR_17;
    USHORT VAR_18 = VAR_10;
    VAR_9--;
    if ((VAR_9 >= VAR_14)
            && (VAR_13 >= 1)
            && ((VAR_9 + VAR_18) <= (VAR_14 + (VAR_13 << 4) + 1))
            && (VAR_15 != ((void*)0))
            && (VAR_10 >= 1)) {
        VAR_17 = (USHORT) (VAR_9 - VAR_14);
        CHAR* VAR_19 = (CHAR*)(VAR_15 + (VAR_17 >> 3));
        switch (VAR_11) {
            case 129:
                while (VAR_18 > 0) {
                    UCHAR VAR_20 = FUNC_3((UCHAR*)VAR_15, VAR_17, 1);
                    FUNC_4(VAR_8, VAR_17 - (VAR_9 - VAR_14), 1, VAR_20);
                    VAR_17++;
                    VAR_18--;
                }

                (void)FUNC_1(VAR_4);
                (void)FUNC_2(VAR_4, (uint16_t)VAR_9,
                                (uint8_t*)(VAR_19), (uint16_t)VAR_10);
                break;
            case 128:
                while (VAR_18 > 0) {
                    UCHAR VAR_21 = FUNC_3(VAR_8,
                            VAR_17 - (VAR_9 - VAR_14), 1);
                    FUNC_4((uint8_t*)VAR_15, VAR_17, 1, VAR_21);
                    VAR_17++;
                    VAR_18--;
                }

                (void)FUNC_1(VAR_5);
                (void)FUNC_2(VAR_5, (uint16_t)VAR_9,
                                (uint8_t*)VAR_19, (uint16_t)VAR_10);
                break;
        }
    } else {

        VAR_16 = VAR_3;
    }
    return VAR_16;
}
