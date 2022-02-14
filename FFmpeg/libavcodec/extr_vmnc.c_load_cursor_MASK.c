
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bpp2; int cur_h; int cur_w; int bigendian; int gb; int * curmask; int * curbits; } ;
typedef TYPE_1__ VmncContext ;


 int FUNC_0 (int *,int const,int ) ;

__attribute__((used)) static void FUNC_1(VmncContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    const int VAR_4 = VAR_0->bpp2;
    uint8_t *VAR_5 = VAR_0->curbits;
    uint16_t *VAR_6 = (uint16_t *)VAR_0->curbits;
    uint32_t *VAR_7 = (uint32_t *)VAR_0->curbits;

    for (VAR_2 = 0; VAR_2 < VAR_0->cur_h; VAR_2++) {
        for (VAR_1 = 0; VAR_1 < VAR_0->cur_w; VAR_1++) {
            VAR_3 = FUNC_0(&VAR_0->gb, VAR_4, VAR_0->bigendian);
            if (VAR_4 == 1)
                *VAR_5++ = VAR_3;
            if (VAR_4 == 2)
                *VAR_6++ = VAR_3;
            if (VAR_4 == 4)
                *VAR_7++ = VAR_3;
        }
    }
    VAR_5 = VAR_0->curmask;
    VAR_6 = (uint16_t*)VAR_0->curmask;
    VAR_7 = (uint32_t*)VAR_0->curmask;
    for (VAR_2 = 0; VAR_2 < VAR_0->cur_h; VAR_2++) {
        for (VAR_1 = 0; VAR_1 < VAR_0->cur_w; VAR_1++) {
            VAR_3 = FUNC_0(&VAR_0->gb, VAR_4, VAR_0->bigendian);
            if (VAR_4 == 1)
                *VAR_5++ = VAR_3;
            if (VAR_4 == 2)
                *VAR_6++ = VAR_3;
            if (VAR_4 == 4)
                *VAR_7++ = VAR_3;
        }
    }
}
