
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint16_t ;


 scalar_t__ FUNC_0 (int) ;
 double FUNC_1 (int,double) ;

__attribute__((used)) static uint16_t * FUNC_2(double VAR_0)
{
    int VAR_1 = 0;
    uint16_t * VAR_2;
    VAR_2 = (uint16_t*)FUNC_0(sizeof(uint16_t) * 1 << 16);
    if (!VAR_2)
        return ((void*)0);

    for (VAR_1 = 0; VAR_1 < 65536; ++VAR_1) {
        VAR_2[VAR_1] = FUNC_1(VAR_1 / 65535.0, VAR_0) * 65535.0;
    }
    return VAR_2;
}
