
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int sm_tx_timer_counter; int ntt; int sm_vars; int actor_port_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port*) ;
 scalar_t__ FUNC_1 (struct port*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct port *VAR_3)
{

 if (VAR_3->sm_tx_timer_counter && !(--VAR_3->sm_tx_timer_counter)) {

  if (VAR_3->ntt && (VAR_3->sm_vars & VAR_1)) {
   FUNC_0(VAR_3);

   if (FUNC_1(VAR_3) >= 0) {
    FUNC_2("Sent LACPDU on port %d\n", VAR_3->actor_port_number);



    VAR_3->ntt = 0;
   }
  }

  VAR_3->sm_tx_timer_counter=VAR_2/VAR_0;
 }
}
