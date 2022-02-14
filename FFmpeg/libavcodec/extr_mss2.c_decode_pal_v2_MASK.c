
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int pal; int free_colours; } ;
typedef TYPE_1__ MSS12Context ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(MSS12Context *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    uint32_t *VAR_6 = VAR_1->pal + 256 - VAR_1->free_colours;

    if (!VAR_1->free_colours)
        return 0;

    VAR_5 = *VAR_2++;
    if (VAR_5 > VAR_1->free_colours || VAR_3 < 2 + VAR_5 * 3)
        return VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        *VAR_6++ = FUNC_0(VAR_2 + 3 * VAR_4);

    return 1 + VAR_5 * 3;
}
