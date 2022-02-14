
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct ioc3_private {int ehar_h; int ehar_l; int emcr; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 struct ioc3_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3)
{
 struct dev_mc_list *VAR_4 = VAR_3->mc_list;
 struct ioc3_private *VAR_5 = FUNC_5(VAR_3);
 struct ioc3 *VAR_6 = VAR_5->regs;
 u64 VAR_7 = 0;
 int VAR_8;

 FUNC_6(VAR_3);

 if (VAR_3->flags & VAR_2) {
  VAR_5->emcr |= VAR_0;
  FUNC_4(VAR_5->emcr);
  (void) FUNC_1();
 } else {
  VAR_5->emcr &= ~VAR_0;
  FUNC_4(VAR_5->emcr);
  (void) FUNC_1();

  if ((VAR_3->flags & VAR_1) || (VAR_3->mc_count > 64)) {



   VAR_5->ehar_h = 0xffffffff;
   VAR_5->ehar_l = 0xffffffff;
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_3->mc_count; VAR_8++) {
    char *VAR_9 = VAR_4->dmi_addr;
    VAR_4 = VAR_4->next;

    if (!(*VAR_9 & 1))
     continue;

    VAR_7 |= (1UL << FUNC_0(VAR_9));
   }
   VAR_5->ehar_h = VAR_7 >> 32;
   VAR_5->ehar_l = VAR_7 & 0xffffffff;
  }
  FUNC_2(VAR_5->ehar_h);
  FUNC_3(VAR_5->ehar_l);
 }

 FUNC_7(VAR_3);
}
