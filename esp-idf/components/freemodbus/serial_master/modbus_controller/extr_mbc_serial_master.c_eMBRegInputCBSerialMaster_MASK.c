
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mbm_reg_buffer_ptr; int mbm_reg_buffer_size; } ;
typedef TYPE_1__ mb_master_options_t ;
typedef int eMBErrorCode ;
typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_4__ {TYPE_1__ opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_4 ;

eMBErrorCode FUNC_2(UCHAR * VAR_5, USHORT VAR_6,
                                USHORT VAR_7)
{
    FUNC_0((VAR_4 != ((void*)0)),
                    VAR_0,
                    "Master interface uninitialized.");
    FUNC_0((VAR_5 != ((void*)0)), VAR_1,
                    "Master stack processing error.");
    mb_master_options_t* VAR_8 = &VAR_4->opts;

    USHORT VAR_9 = (USHORT)VAR_8->mbm_reg_buffer_size;
    UCHAR* VAR_10 = (UCHAR*)VAR_8->mbm_reg_buffer_ptr;
    USHORT VAR_11 = VAR_7;
    eMBErrorCode VAR_12 = VAR_2;

    if ((VAR_10 != ((void*)0))
            && (VAR_7 >= 1)
            && (VAR_9 == VAR_11)) {
        while (VAR_11 > 0) {
            FUNC_1(VAR_10, VAR_5);
            VAR_11 -= 1;
        }
    } else {
        VAR_12 = VAR_3;
    }
    return VAR_12;
}
