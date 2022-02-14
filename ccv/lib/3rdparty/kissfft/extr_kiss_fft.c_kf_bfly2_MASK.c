
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kiss_fft_cpx ;
typedef TYPE_1__* kiss_fft_cfg ;
struct TYPE_3__ {int * twiddles; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(
        kiss_fft_cpx * VAR_0,
        const size_t VAR_1,
        const kiss_fft_cfg VAR_2,
        int VAR_3
        )
{
    kiss_fft_cpx * VAR_4;
    kiss_fft_cpx * VAR_5 = VAR_2->twiddles;
    kiss_fft_cpx VAR_6;
    VAR_4 = VAR_0 + VAR_3;
    do{
        FUNC_1(*VAR_0,2); FUNC_1(*VAR_4,2);

        FUNC_2 (VAR_6, *VAR_4 , *VAR_5);
        VAR_5 += VAR_1;
        FUNC_3( *VAR_4 , *VAR_0 , VAR_6 );
        FUNC_0( *VAR_0 , VAR_6 );
        ++VAR_4;
        ++VAR_0;
    }while (--VAR_3);
}
