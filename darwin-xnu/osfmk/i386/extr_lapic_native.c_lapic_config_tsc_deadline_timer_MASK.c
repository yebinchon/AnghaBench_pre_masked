
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

void
FUNC_8(void)
{
 uint32_t VAR_4;

 FUNC_0("lapic_config_tsc_deadline_timer()\n");
 FUNC_5();
 VAR_4 = FUNC_1(VAR_3);
 VAR_4 &= ~(VAR_0 |
     VAR_1);
 VAR_4 |= VAR_2;
 FUNC_2(VAR_3, VAR_4);


 do {
  FUNC_4(FUNC_7() + (1ULL<<32));
 } while (FUNC_3() == 0);
 FUNC_4(0);

 FUNC_6();
 FUNC_0("lapic_config_tsc_deadline_timer() done\n");
}
