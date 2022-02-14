
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int vec; } ;
typedef TYPE_1__ hb_bitvec_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(hb_bitvec_t *VAR_0)
{
    int VAR_1 = (VAR_0->size + 31) >> 5;
    FUNC_0(VAR_0->vec, 0, VAR_1 * sizeof(uint32_t));
}
