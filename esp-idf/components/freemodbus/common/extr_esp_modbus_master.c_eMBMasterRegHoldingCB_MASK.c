
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int eMBRegisterMode ;
typedef int eMBErrorCode ;
typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_2__ {int (* master_reg_cb_holding ) (int *,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ) ;

eMBErrorCode FUNC_2(UCHAR * VAR_3, USHORT VAR_4,
        USHORT VAR_5, eMBRegisterMode VAR_6)
{
    eMBErrorCode VAR_7 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    FUNC_0((VAR_2->master_reg_cb_holding != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    VAR_7 = VAR_2->master_reg_cb_holding(VAR_3, VAR_4,
                                                        VAR_5, VAR_6);
    return VAR_7;
}
