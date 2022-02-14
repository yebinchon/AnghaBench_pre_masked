
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int (* idct ) (int *) ;} ;
struct TYPE_5__ {TYPE_1__ idsp; } ;
typedef TYPE_2__ DVVideoContext ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(DVVideoContext *VAR_0, uint8_t *VAR_1,
                                                 int VAR_2, int16_t *VAR_3)
{
    VAR_0->idsp.idct(VAR_3 + 0*64);
    VAR_0->idsp.idct(VAR_3 + 1*64);

    FUNC_0(VAR_3+0*64, VAR_1, VAR_2<<1);
    FUNC_0(VAR_3+0*64 + 4*8, VAR_1 + 8, VAR_2<<1);
    FUNC_0(VAR_3+1*64, VAR_1 + VAR_2, VAR_2<<1);
    FUNC_0(VAR_3+1*64 + 4*8, VAR_1 + 8 + VAR_2, VAR_2<<1);
}
