
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ TickType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void* VAR_6)
{
    uint64_t VAR_7, VAR_8;
    TickType_t VAR_9;
    TickType_t VAR_10;

    FUNC_4(1);

    VAR_9 = FUNC_8();
    VAR_10 = VAR_9;
    VAR_7 = FUNC_3();

    for(int VAR_11 = 0; VAR_11 < VAR_2; VAR_11++){

        FUNC_5(&VAR_9, VAR_3);

        FUNC_0(VAR_0, FUNC_2(FUNC_8() - VAR_10));
        VAR_8 = FUNC_3();
        FUNC_1(VAR_4, VAR_1, (uint32_t)(VAR_8 - VAR_7));
        VAR_7 = VAR_8;
        VAR_10 = VAR_9;
    }


    FUNC_7(VAR_5);
    FUNC_6(((void*)0));
}
