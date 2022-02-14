
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
struct net_buf_simple {int dummy; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct net_buf_simple*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static bool FUNC_3(struct net_buf_simple *VAR_2)
{
    const u8_t *VAR_3 = FUNC_1(VAR_2);
    u32_t VAR_4;
    int VAR_5;

    VAR_4 = FUNC_2(VAR_3 - 4) ^ FUNC_2(VAR_3 - 8);

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        if (VAR_0[VAR_5] == VAR_4) {
            return 1;
        }
    }

    VAR_0[VAR_1++] = VAR_4;
    VAR_1 %= FUNC_0(VAR_0);

    return 0;
}
