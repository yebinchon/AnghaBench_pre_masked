
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frequency; int phase; int amplitude; int base; int func; } ;
typedef TYPE_1__ waveForm_t ;


 float* FUNC_0 (int ) ;
 float FUNC_1 (float*,int ,int ,int ,int ) ;

__attribute__((used)) static float FUNC_2( const waveForm_t *VAR_0 )
{
 float *VAR_1;

 VAR_1 = FUNC_0( VAR_0->func );

 return FUNC_1( VAR_1, VAR_0->base, VAR_0->amplitude, VAR_0->phase, VAR_0->frequency );
}
