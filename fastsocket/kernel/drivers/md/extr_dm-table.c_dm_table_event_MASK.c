
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int event_context; int (* event_fn ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct dm_table *VAR_1)
{




 FUNC_0(FUNC_1());

 FUNC_2(&VAR_0);
 if (VAR_1->event_fn)
  VAR_1->event_fn(VAR_1->event_context);
 FUNC_3(&VAR_0);
}
