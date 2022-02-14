
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVIOContext *VAR_0, int *VAR_1)
{
    int VAR_2, VAR_3;

    VAR_2 = FUNC_0(VAR_0);
    (*VAR_1)-=2;
    VAR_2 &= 0x7FFF;
    if (VAR_2 >= 0x4000) {
        return VAR_2 - 0x4000;
    } else {
        VAR_3 = FUNC_0(VAR_0);
        (*VAR_1)-=2;
        return (VAR_2 << 16) | VAR_3;
    }
}
