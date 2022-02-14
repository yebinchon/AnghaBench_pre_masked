
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int base_addr; } ;
struct TYPE_3__ {unsigned char hcr_val; int tx_pcb; } ;
typedef TYPE_1__ elp_device ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (unsigned char,struct net_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int *) ;
 scalar_t__ FUNC_8 (int,unsigned long) ;

__attribute__((used)) static inline void FUNC_9(struct net_device *VAR_7)
{
 unsigned long VAR_8;
 elp_device *VAR_9 = FUNC_3(VAR_7);
 unsigned char VAR_10 = VAR_9->hcr_val;

 FUNC_4(0, VAR_7);

 if (FUNC_1(VAR_7->base_addr) & VAR_0) {
  do {
   FUNC_0(VAR_7->base_addr);
   VAR_8 = VAR_6 + 2*VAR_5/100;
   while (FUNC_8(VAR_6, VAR_8) && !(FUNC_1(VAR_7->base_addr) & VAR_0));
  } while (FUNC_1(VAR_7->base_addr) & VAR_0);
  FUNC_6(VAR_7, VAR_4);
 }
 FUNC_4(VAR_9->hcr_val | VAR_1 | VAR_2, VAR_7);
 FUNC_2(10);
 FUNC_4(VAR_9->hcr_val & ~VAR_1, VAR_7);
 FUNC_2(10);
 FUNC_4(VAR_9->hcr_val | VAR_3, VAR_7);
 FUNC_2(10);
 FUNC_4(VAR_9->hcr_val & ~VAR_3, VAR_7);
 FUNC_2(10);

 FUNC_4(VAR_10, VAR_7);
 if (!FUNC_7(VAR_7, &VAR_9->tx_pcb))
  FUNC_5("%s: start receive command failed\n", VAR_7->name);
}
