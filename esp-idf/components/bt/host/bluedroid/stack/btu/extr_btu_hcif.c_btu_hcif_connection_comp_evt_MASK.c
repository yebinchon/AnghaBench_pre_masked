
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bd_addr; } ;
typedef TYPE_1__ tBTM_ESCO_DATA ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_9 (UINT8 *VAR_2)
{
    UINT8 VAR_3;
    UINT16 VAR_4;
    BD_ADDR VAR_5;
    UINT8 VAR_6;

    UINT8 VAR_7;


    tBTM_ESCO_DATA VAR_8;


    FUNC_3 (VAR_3, VAR_2);
    FUNC_2 (VAR_4, VAR_2);
    FUNC_1 (VAR_5, VAR_2);
    FUNC_3 (VAR_6, VAR_2);

    FUNC_3 (VAR_7, VAR_2);

    VAR_4 = FUNC_0 (VAR_4);

    if (VAR_6 == VAR_1) {

        FUNC_5 (VAR_5, VAR_4, VAR_3, VAR_7);

        FUNC_6 (VAR_3, VAR_4, VAR_5);
    }

    else {
        FUNC_8(&VAR_8, 0, sizeof(tBTM_ESCO_DATA));

        FUNC_7 (VAR_8.bd_addr, VAR_5, VAR_0);
        FUNC_4 (VAR_3, VAR_5, VAR_4, &VAR_8);
    }

}
