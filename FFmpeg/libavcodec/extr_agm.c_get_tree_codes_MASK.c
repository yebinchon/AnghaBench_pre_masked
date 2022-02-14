
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int* child; } ;
typedef TYPE_1__ Node ;



__attribute__((used)) static void FUNC_0(uint32_t *VAR_0, Node *VAR_1, int VAR_2, uint32_t VAR_3, int VAR_4)
{
    if (VAR_2 < 256 && VAR_2 >= 0) {
        VAR_0[VAR_2] = VAR_3;
    } else if (VAR_2 >= 0) {
        FUNC_0(VAR_0, VAR_1, VAR_1[VAR_2].child[0], VAR_3 + (0 << VAR_4), VAR_4 + 1);
        FUNC_0(VAR_0, VAR_1, VAR_1[VAR_2].child[1], VAR_3 + (1U << VAR_4), VAR_4 + 1);
    }
}
