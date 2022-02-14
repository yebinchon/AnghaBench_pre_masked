
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* diff_bytes ) (int *,int const*,int const*,int) ;} ;
struct TYPE_5__ {TYPE_1__ llvidencdsp; } ;
typedef TYPE_2__ PNGEncContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int const*,int const*,int) ;

__attribute__((used)) static void FUNC_3(PNGEncContext *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    const uint8_t *VAR_5 = VAR_2 + VAR_3;
    const uint8_t *VAR_6 = VAR_2;
    int VAR_7, VAR_8;

    FUNC_1(VAR_1, VAR_2, VAR_3);
    VAR_1 += VAR_3;
    VAR_4 -= VAR_3;
    VAR_8 = FUNC_0(32 - VAR_3, VAR_4);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        *VAR_1++ = *VAR_5++ - *VAR_6++;
    VAR_4 -= VAR_8;
    VAR_0->llvidencdsp.diff_bytes(VAR_1, VAR_5, VAR_6, VAR_4);
}
