
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2 = FUNC_0(VAR_0);
    uint8_t VAR_3;

    FUNC_3(VAR_0, 0);
    FUNC_5(VAR_0, "saio");
    VAR_3 = VAR_1 > 0xffffffff ? 1 : 0;
    FUNC_1(VAR_0, VAR_3);
    FUNC_2(VAR_0, 0);
    FUNC_3(VAR_0, 1);
    if (VAR_3) {
        FUNC_4(VAR_0, VAR_1);
    } else {
        FUNC_3(VAR_0, VAR_1);
    }
    return FUNC_6(VAR_0, VAR_2);
}
