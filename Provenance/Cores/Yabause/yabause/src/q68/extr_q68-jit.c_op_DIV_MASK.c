
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int,int ,int ,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_4, uint32_t VAR_5)
{
    VAR_0;
    const int VAR_6 = VAR_5 & (1<<8);

    int VAR_7;
    FUNC_5(VAR_4, VAR_5, VAR_1, 0, &VAR_7, 1);
    if (VAR_7 < 0) {
        return 1;
    }
    FUNC_3(VAR_2, VAR_3*4);

    FUNC_0(VAR_2, VAR_7);

    if (VAR_6) {
        FUNC_1(VAR_2);
    } else {
        FUNC_2(VAR_2);
    }
    FUNC_4(VAR_2, VAR_3*4);



    FUNC_0(VAR_2, VAR_6 ? 158 : 140);
    return 0;
}
