
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_master {int refcnt; scalar_t__ search_count; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long const) ;
 int FUNC_8 () ;
 int FUNC_9 (struct w1_master*,int ) ;
 int VAR_2 ;

int FUNC_10(void *VAR_3)
{
 struct w1_master *VAR_4 = (struct w1_master *) VAR_3;



 const unsigned long VAR_5 = FUNC_3(VAR_2 * 1000);

 while (!FUNC_2()) {
  if (VAR_4->search_count) {
   FUNC_4(&VAR_4->mutex);
   FUNC_9(VAR_4, VAR_1);
   FUNC_5(&VAR_4->mutex);
  }

  FUNC_8();
  FUNC_0(VAR_0);

  if (FUNC_2())
   break;


  if (VAR_4->search_count)
   FUNC_7(VAR_5);
  else
   FUNC_6();
 }

 FUNC_1(&VAR_4->refcnt);

 return 0;
}
