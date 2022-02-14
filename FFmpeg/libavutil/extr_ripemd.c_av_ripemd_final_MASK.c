
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int count; int digest_len; int * state; } ;
typedef TYPE_1__ AVRIPEMD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

void FUNC_3(AVRIPEMD* VAR_0, uint8_t *VAR_1)
{
    int VAR_2;
    uint64_t VAR_3 = FUNC_1(VAR_0->count << 3);

    FUNC_2(VAR_0, "\200", 1);
    while ((VAR_0->count & 63) != 56)
        FUNC_2(VAR_0, "", 1);
    FUNC_2(VAR_0, (uint8_t *)&VAR_3, 8);
    for (VAR_2 = 0; VAR_2 < VAR_0->digest_len; VAR_2++)
        FUNC_0(VAR_1 + VAR_2*4, VAR_0->state[VAR_2]);
}
