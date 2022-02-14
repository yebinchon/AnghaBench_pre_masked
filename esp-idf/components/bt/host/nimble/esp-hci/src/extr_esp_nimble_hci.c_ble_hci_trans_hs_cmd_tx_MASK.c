
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;

int FUNC_5(uint8_t *VAR_4)
{
    uint16_t VAR_5;

    FUNC_1(VAR_4 != ((void*)0));
    *VAR_4 = VAR_1;
    VAR_5 = VAR_0 + VAR_4[3] + 1;
    if (!FUNC_3()) {
        FUNC_0(VAR_3, "Controller not ready to receive packets from host at this time, try again after sometime");
        return VAR_2;
    }
    FUNC_4(VAR_4, VAR_5);

    FUNC_2(VAR_4);
    return 0;
}
