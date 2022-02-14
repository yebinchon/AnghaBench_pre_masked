
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static float FUNC_2(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = (int)FUNC_1() * 1000000;
    float VAR_9 = VAR_8 * (VAR_6 + VAR_5 / 256.0f + VAR_4 / 65536.0f + 4);
    if (VAR_9 < VAR_1 || VAR_9 > VAR_0) {
        return VAR_0;
    }
    float VAR_10 = VAR_9 / (2 * (VAR_7+2));
    return VAR_10/2;
}
