
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bPicEntry; } ;
typedef TYPE_1__ DXVA_PicEntry_VPx ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(DXVA_PicEntry_VPx *VAR_0,
                               unsigned VAR_1, unsigned VAR_2)
{
    FUNC_0((VAR_1 & 0x7f) == VAR_1 && (VAR_2 & 0x01) == VAR_2);
    VAR_0->bPicEntry = VAR_1 | (VAR_2 << 7);
}
