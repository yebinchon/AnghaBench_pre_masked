
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct specialix_board {int flags; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct specialix_board*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,struct specialix_board*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct specialix_board*) ;

__attribute__((used)) static void FUNC_6(struct specialix_board *VAR_2)
{
 FUNC_3();

 if (!(VAR_2->flags & VAR_0)) {
  FUNC_4();
  return;
 }

 VAR_2->flags &= ~VAR_0;

 FUNC_1(VAR_1, "Freeing IRQ%d for board %d.\n",
   VAR_2->irq, FUNC_0(VAR_2));
 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_5(VAR_2);
 FUNC_4();
}
