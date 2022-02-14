
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_2__ {double lfo_am_inc; double lfo_pm_inc; double noise_f; int eg_timer_add; int eg_timer_overflow; scalar_t__* fn_tab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
  int VAR_4;


  double VAR_5 = 1.0;


  for( VAR_4 = 0 ; VAR_4 < 1024; VAR_4++ )
  {

    VAR_3[VAR_4] = (UINT32)( (double)VAR_4 * 64 * VAR_5 * (1<<(VAR_1-10)) );
  }



  VAR_3 = (1.0 / 64.0 ) * (1<<VAR_2) * VAR_5;


  VAR_3 = (1.0 / 1024.0) * (1<<VAR_2) * VAR_5;


  VAR_3 = (1.0 / 1.0) * (1<<VAR_1) * VAR_5;

  VAR_3 = (1<<VAR_0) * VAR_5;
  VAR_3 = ( 1 ) * (1<<VAR_0);
}
