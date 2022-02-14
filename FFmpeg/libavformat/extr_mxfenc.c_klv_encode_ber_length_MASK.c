
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, uint64_t VAR_1)
{

    int VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == 1) {

        FUNC_0(VAR_0, VAR_1);
        return 1;
    }

    VAR_2 --;

    FUNC_0(VAR_0, 0x80 + VAR_2);
    while(VAR_2) {
        VAR_2--;
        FUNC_0(VAR_0, VAR_1 >> 8 * VAR_2 & 0xff);
    }
    return 0;
}
