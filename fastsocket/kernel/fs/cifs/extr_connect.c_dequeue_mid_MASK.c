
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int qhead; int mid_state; int when_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct mid_q_entry *VAR_4, bool VAR_5)
{



 FUNC_1(&VAR_0);
 if (!VAR_5)
  VAR_4->mid_state = VAR_2;
 else
  VAR_4->mid_state = VAR_1;
 FUNC_0(&VAR_4->qhead);
 FUNC_2(&VAR_0);
}
