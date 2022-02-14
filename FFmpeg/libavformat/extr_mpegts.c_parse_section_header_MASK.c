
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int tid; int id; int version; int sec_num; int last_sec_num; } ;
typedef TYPE_1__ SectionHeader ;


 int FUNC_0 (int const**,int const*) ;
 int FUNC_1 (int const**,int const*) ;

__attribute__((used)) static int FUNC_2(SectionHeader *VAR_0,
                                const uint8_t **VAR_1, const uint8_t *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_0->tid = VAR_3;
    *VAR_1 += 2;
    VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_0->id = VAR_3;
    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_0->version = (VAR_3 >> 1) & 0x1f;
    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_0->sec_num = VAR_3;
    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_0->last_sec_num = VAR_3;
    return 0;
}
