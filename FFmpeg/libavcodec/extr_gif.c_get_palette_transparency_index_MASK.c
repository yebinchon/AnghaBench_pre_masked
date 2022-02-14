
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(const uint32_t *VAR_1)
{
    int VAR_2 = -1;
    unsigned VAR_3, VAR_4 = 0xff;

    if (!VAR_1)
        return -1;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        const uint32_t VAR_5 = VAR_1[VAR_3];
        if (VAR_5 >> 24 < VAR_4) {
            VAR_4 = VAR_5 >> 24;
            VAR_2 = VAR_3;
        }
    }
    return VAR_4 < 128 ? VAR_2 : -1;
}
