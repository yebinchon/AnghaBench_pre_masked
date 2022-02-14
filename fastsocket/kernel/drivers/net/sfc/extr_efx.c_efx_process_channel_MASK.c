
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {scalar_t__ enabled; } ;
struct efx_channel {int enabled; } ;


 struct efx_rx_queue* FUNC_0 (struct efx_channel*) ;
 scalar_t__ FUNC_1 (struct efx_channel*) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 int FUNC_3 (struct efx_channel*,int) ;
 int FUNC_4 (struct efx_channel*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct efx_channel *VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_5(!VAR_0->enabled))
  return 0;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 && FUNC_1(VAR_0)) {
  struct efx_rx_queue *VAR_3 =
   FUNC_0(VAR_0);

  FUNC_4(VAR_0);
  if (VAR_3->enabled)
   FUNC_2(VAR_3);
 }

 return VAR_2;
}
