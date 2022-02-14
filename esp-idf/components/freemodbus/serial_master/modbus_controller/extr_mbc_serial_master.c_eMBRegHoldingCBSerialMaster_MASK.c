
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mbm_reg_buffer_ptr; int mbm_reg_buffer_size; } ;
typedef TYPE_1__ mb_master_options_t ;
typedef int eMBRegisterMode ;
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
 int FUNC_2 (int *,int *) ;
 TYPE_2__* VAR_4 ;

eMBErrorCode FUNC_3(UCHAR * VAR_5, USHORT VAR_6,
        USHORT VAR_7, eMBRegisterMode VAR_8)
{
    FUNC_0((VAR_4 != ((void*)0)),
                    VAR_0,
                    "Master interface uninitialized.");
    FUNC_0((VAR_5 != ((void*)0)), VAR_1,
                    "Master stack processing error.");
    mb_master_options_t* VAR_9 = &VAR_4->opts;
    USHORT VAR_10 = (USHORT)VAR_9->mbm_reg_buffer_size;
    UCHAR* VAR_11 = (UCHAR*)VAR_9->mbm_reg_buffer_ptr;
    eMBErrorCode VAR_12 = VAR_2;
    USHORT VAR_13 = VAR_7;

    if ((VAR_11 != ((void*)0))
            && (VAR_10 == VAR_7)
            && (VAR_7 >= 1)) {
        switch (VAR_8) {
            case 128:
                while (VAR_13 > 0) {
                    FUNC_1(VAR_5, VAR_11);
                    VAR_13 -= 1;
                };
                break;
            case 129:
                while (VAR_13 > 0) {
                    FUNC_2(VAR_11, VAR_5);
                    VAR_11 += 2;
                    VAR_13 -= 1;
                };
                break;
        }
    } else {
        VAR_12 = VAR_3;
    }
    return VAR_12;
}
