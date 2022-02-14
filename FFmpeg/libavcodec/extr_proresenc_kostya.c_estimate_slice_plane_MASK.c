
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_6__ {int scantable; } ;
struct TYPE_5__ {int * blocks; } ;
typedef TYPE_1__ ProresThreadData ;
typedef TYPE_2__ ProresContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int*,int ,int,int,int ,int const*) ;
 int FUNC_2 (int*,int ,int,int const) ;

__attribute__((used)) static int FUNC_3(ProresContext *VAR_0, int *VAR_1, int VAR_2,
                                const uint16_t *VAR_3, ptrdiff_t VAR_4,
                                int VAR_5,
                                int VAR_6, int VAR_7,
                                const int16_t *VAR_8, ProresThreadData *VAR_9)
{
    int VAR_10;
    int VAR_11;

    VAR_10 = VAR_5 * VAR_6;

    VAR_11 = FUNC_2(VAR_1, VAR_9->blocks[VAR_2], VAR_10, VAR_8[0]);
    VAR_11 += FUNC_1(VAR_1, VAR_9->blocks[VAR_2], VAR_10,
                         VAR_7, VAR_0->scantable, VAR_8);

    return FUNC_0(VAR_11, 8);
}
