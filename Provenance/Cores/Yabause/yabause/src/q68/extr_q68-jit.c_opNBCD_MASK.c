
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ,int,int*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(Q68State *VAR_4, uint32_t VAR_5)
{
    if (FUNC_0(VAR_5) == VAR_0) {
        return FUNC_6(VAR_4, VAR_5);
    }

    int VAR_6;
    FUNC_4(VAR_4, VAR_5, VAR_2, 1, &VAR_6, 1);
    if (VAR_6 < 0) {
        return 1;
    }


    FUNC_2(VAR_3, 0);
    FUNC_3(VAR_3);

    FUNC_5(VAR_4, VAR_5, VAR_2);
    FUNC_1(VAR_3,
                        (FUNC_0(VAR_5) == VAR_1 ? 6 : 8) + VAR_6);
    return 0;
}
