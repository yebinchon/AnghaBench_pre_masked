
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sec_state; int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int *) ;

__attribute__((used)) static BOOLEAN FUNC_1 (tBTM_SEC_DEV_REC *VAR_5)
{
    UINT8 VAR_6 = VAR_5->sec_state;

    VAR_5->sec_state = VAR_2;



    if ((FUNC_0 (VAR_5->bd_addr, ((void*)0), VAR_1,
                                0, ((void*)0))) != VAR_0) {
        VAR_5->sec_state = VAR_6;
        return (VAR_3);
    }

    return (VAR_4);
}
