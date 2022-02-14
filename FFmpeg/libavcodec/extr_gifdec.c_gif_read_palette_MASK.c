
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ GifState ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(GifState *VAR_0, uint32_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++)
        *VAR_1 = (0xffu << 24) | FUNC_0(&VAR_0->gb);
}
