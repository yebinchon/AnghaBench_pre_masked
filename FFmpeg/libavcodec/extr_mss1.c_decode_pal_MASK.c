
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int free_colours; int pal; } ;
typedef TYPE_1__ MSS12Context ;
typedef int ArithCoder ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(MSS12Context *VAR_0, ArithCoder *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    uint32_t *VAR_7 = VAR_0->pal + 256 - VAR_0->free_colours;

    if (!VAR_0->free_colours)
        return 0;

    VAR_3 = FUNC_1(VAR_1, VAR_0->free_colours + 1);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        VAR_4 = FUNC_0(VAR_1, 8);
        VAR_5 = FUNC_0(VAR_1, 8);
        VAR_6 = FUNC_0(VAR_1, 8);
        *VAR_7++ = (0xFFU << 24) | (VAR_4 << 16) | (VAR_5 << 8) | VAR_6;
    }

    return !!VAR_3;
}
