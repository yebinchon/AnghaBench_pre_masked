
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_hcd {unsigned int rh_numports; int io_addr; scalar_t__ ports_timeout; int resuming_ports; scalar_t__ wait_for_hp; } ;
struct TYPE_2__ {int rh_timer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (unsigned int,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct uhci_hcd*,unsigned int,unsigned long) ;
 TYPE_1__* FUNC_10 (struct uhci_hcd*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (unsigned long) ;

__attribute__((used)) static void FUNC_13(struct uhci_hcd *VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_7->rh_numports; ++VAR_8) {
  VAR_9 = VAR_7->io_addr + VAR_0 + 2 * VAR_8;
  VAR_10 = FUNC_2(VAR_9);
  if (FUNC_11(VAR_10 & VAR_4)) {
   if (FUNC_7(VAR_6, VAR_7->ports_timeout)) {
    FUNC_0(VAR_4);
    FUNC_8(10);



    if (VAR_7->wait_for_hp)
     FUNC_12(VAR_9);





    FUNC_0(VAR_1 | VAR_3);
    FUNC_1(VAR_2);
   }
  }
  if (FUNC_11(VAR_10 & VAR_5)) {
   if (!FUNC_6(VAR_8, &VAR_7->resuming_ports)) {


    FUNC_5(VAR_8, &VAR_7->resuming_ports);
    VAR_7->ports_timeout = VAR_6 +
      FUNC_4(25);



    FUNC_3(&FUNC_10(VAR_7)->rh_timer,
      VAR_7->ports_timeout);
   } else if (FUNC_7(VAR_6,
      VAR_7->ports_timeout)) {
    FUNC_9(VAR_7, VAR_8, VAR_9);
   }
  }
 }
}
