
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1(vm_tag_t VAR_2)
{
    uint64_t VAR_3;
    uint32_t VAR_4;
    uint64_t VAR_5;

    if (VAR_0 == VAR_2) return;

    VAR_4 = (VAR_2 >> 6);
    VAR_3 = VAR_1[VAR_4];
    VAR_2 &= 63;
    VAR_5 = (1ULL << (63 - VAR_2));
    FUNC_0(!(VAR_3 & VAR_5));
    VAR_1[VAR_4] = (VAR_3 | VAR_5);
}
