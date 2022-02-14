
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int palette_size; int * palette; } ;
typedef TYPE_1__ CDXLVideoContext ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(CDXLVideoContext *VAR_0, uint32_t *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->palette_size / 2; VAR_2++) {
        unsigned VAR_3 = FUNC_0(&VAR_0->palette[VAR_2 * 2]);
        unsigned VAR_4 = ((VAR_3 >> 8) & 0xF) * 0x11;
        unsigned VAR_5 = ((VAR_3 >> 4) & 0xF) * 0x11;
        unsigned VAR_6 = (VAR_3 & 0xF) * 0x11;
        FUNC_1(&VAR_1[VAR_2], (0xFFU << 24) | (VAR_4 << 16) | (VAR_5 << 8) | VAR_6);
    }
}
