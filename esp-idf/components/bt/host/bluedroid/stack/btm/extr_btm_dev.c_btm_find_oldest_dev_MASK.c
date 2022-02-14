
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sec_flags; int timestamp; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT32 ;
struct TYPE_5__ {TYPE_1__* sec_dev_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

tBTM_SEC_DEV_REC *FUNC_0 (void)
{
    tBTM_SEC_DEV_REC *VAR_5 = &VAR_4.sec_dev_rec[0];
    tBTM_SEC_DEV_REC *VAR_6 = VAR_5;
    UINT32 VAR_7 = 0xFFFFFFFF;
    int VAR_8;


    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_5++) {
        if (((VAR_5->sec_flags & VAR_0) == 0)
                || ((VAR_5->sec_flags & (VAR_2 | VAR_1)) != 0)) {
            continue;
        }

        if (VAR_5->timestamp < VAR_7) {
            VAR_6 = VAR_5;
            VAR_7 = VAR_5->timestamp;
        }
    }

    if (VAR_7 != 0xFFFFFFFF) {
        return (VAR_6);
    }


    VAR_5 = &VAR_4.sec_dev_rec[0];
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_5++) {
        if ((VAR_5->sec_flags & VAR_0) == 0) {
            continue;
        }

        if (VAR_5->timestamp < VAR_7) {
            VAR_6 = VAR_5;
            VAR_7 = VAR_5->timestamp;
        }
    }
    return (VAR_6);
}
