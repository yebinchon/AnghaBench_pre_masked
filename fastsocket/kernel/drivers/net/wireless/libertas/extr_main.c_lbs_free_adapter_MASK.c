
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int * networks; int command_timer; scalar_t__ event_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lbs_private*) ;

__attribute__((used)) static void FUNC_6(struct lbs_private *VAR_1)
{
 FUNC_3(VAR_0);

 FUNC_5(VAR_1);
 if (VAR_1->event_fifo)
  FUNC_1(VAR_1->event_fifo);
 FUNC_0(&VAR_1->command_timer);
 FUNC_2(VAR_1->networks);
 VAR_1->networks = ((void*)0);

 FUNC_4(VAR_0);
}
