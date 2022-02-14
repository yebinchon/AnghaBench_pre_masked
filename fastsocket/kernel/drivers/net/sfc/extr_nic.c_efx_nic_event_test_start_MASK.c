
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_channel {int event_test_cpu; } ;


 int FUNC_0 (struct efx_channel*) ;
 int FUNC_1 (struct efx_channel*,int ) ;
 int FUNC_2 () ;

void FUNC_3(struct efx_channel *VAR_0)
{
 VAR_0->event_test_cpu = -1;
 FUNC_2();
 FUNC_1(VAR_0, FUNC_0(VAR_0));
}
