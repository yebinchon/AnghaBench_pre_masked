
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_board {int minor; scalar_t__ major; } ;
struct efx_nic {int dummy; } ;
typedef enum efx_led_mode { ____Placeholder_efx_led_mode } efx_led_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct falcon_board* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_4, enum efx_led_mode VAR_5)
{
 struct falcon_board *VAR_6 = FUNC_0(VAR_4);


 if (VAR_6->minor < 3 && VAR_6->major == 0)
  return;

 FUNC_1(
  VAR_4, VAR_3,
  (VAR_5 == VAR_0) ? VAR_2 : VAR_1);
}
