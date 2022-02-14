
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gem_rxd {int status_word; } ;
struct gem {int rx_new; scalar_t__ regs; TYPE_1__* init_block; } ;
struct TYPE_2__ {struct gem_rxd* rxd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gem*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static __inline__ void FUNC_6(struct gem *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_4 = (VAR_1->rx_new & ~(4 - 1));
 VAR_5 = 0;
 VAR_6 = -1;
 FUNC_4();
 while (VAR_4 != VAR_2) {
  VAR_4 = FUNC_0(VAR_4);
  if (++VAR_5 == 4) {
   struct gem_rxd *VAR_7 =
    &VAR_1->init_block->rxd[VAR_3];
   for (;;) {
    VAR_7->status_word = FUNC_2(FUNC_1(VAR_1));
    VAR_7++;
    VAR_3 = FUNC_0(VAR_3);
    if (VAR_3 == VAR_4)
     break;
   }
   VAR_6 = VAR_4;
   VAR_5 = 0;
  }
 }
 if (VAR_6 >= 0) {
  FUNC_3();
  FUNC_5(VAR_6, VAR_1->regs + VAR_0);
 }
}
