
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_6, uint32_t VAR_7)
{
    if (FUNC_0(VAR_7) == VAR_1) {

        return FUNC_4(VAR_6, VAR_7);
    }

    VAR_3;
    const int VAR_8 = FUNC_1(VAR_5);


    int VAR_9;
    if (FUNC_0(VAR_7) == VAR_2) {
        VAR_9 = 0;
    } else {
        VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_4, VAR_0);
        if (VAR_9 < 0) {
            return FUNC_5(VAR_6, VAR_7);
        }
    }
    FUNC_3(VAR_6, VAR_7, VAR_4, VAR_8 ? 0xFF : 0x00);
    if (FUNC_0(VAR_7) == VAR_2) {

        return VAR_8 ? 6 : 4;
    } else {
        return 8 + VAR_9;
    }
}
