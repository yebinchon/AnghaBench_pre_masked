
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * gamma_lut; } ;
typedef TYPE_1__ hb_filter_private_t ;


 int FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1( hb_filter_private_t * VAR_0 )
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
    {
        VAR_0->gamma_lut[VAR_1] = FUNC_0( ( (float)VAR_1 / (float)255 ), 2.2f );
    }
}
