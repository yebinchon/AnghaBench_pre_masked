
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_state {int flash_ambctl1; int flash_ambctl0; int save_ambctl1; int save_ambctl0; int enet_flash_pin; int irq_flags; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct async_state *VAR_0)
{
 FUNC_6(VAR_0->irq_flags);

 FUNC_5(VAR_0->enet_flash_pin, 0);

 VAR_0->save_ambctl0 = FUNC_1();
 VAR_0->save_ambctl1 = FUNC_2();
 FUNC_3(VAR_0->flash_ambctl0);
 FUNC_4(VAR_0->flash_ambctl1);
 FUNC_0();
}
