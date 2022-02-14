
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclades_port {unsigned long cor3; struct cyclades_card* card; } ;
struct cyclades_card {int card_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct cyclades_card*) ;
 int FUNC_1 (struct cyclades_port*,int) ;
 int FUNC_2 (struct cyclades_port*,int ,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct cyclades_port *VAR_4, unsigned long VAR_5)
{
 struct cyclades_card *VAR_6 = VAR_4->card;
 unsigned long VAR_7;

 if (!FUNC_0(VAR_6)) {
  VAR_4->cor3 &= ~VAR_3;
  VAR_4->cor3 |= VAR_5 & VAR_3;

  FUNC_3(&VAR_6->card_lock, VAR_7);
  FUNC_2(VAR_4, VAR_0, VAR_4->cor3);
  FUNC_1(VAR_4, VAR_2 | VAR_1);
  FUNC_4(&VAR_6->card_lock, VAR_7);
 }
 return 0;
}
