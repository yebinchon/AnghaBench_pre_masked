
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_state {int irq_flags; int enet_flash_pin; int save_ambctl1; int save_ambctl0; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct async_state *VAR_0)
{
 FUNC_1(VAR_0->save_ambctl0);
 FUNC_2(VAR_0->save_ambctl1);
 FUNC_0();

 FUNC_3(VAR_0->enet_flash_pin, 1);

 FUNC_4(VAR_0->irq_flags);
}
