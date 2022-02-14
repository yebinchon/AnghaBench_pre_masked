
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int pg_init_wait; int lock; int pg_init_in_progress; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct multipath *VAR_4)
{
 FUNC_0(VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_1(&VAR_4->pg_init_wait, &VAR_3);

 while (1) {
  FUNC_4(VAR_1);

  FUNC_5(&VAR_4->lock, VAR_5);
  if (!VAR_4->pg_init_in_progress) {
   FUNC_6(&VAR_4->lock, VAR_5);
   break;
  }
  FUNC_6(&VAR_4->lock, VAR_5);

  FUNC_2();
 }
 FUNC_4(VAR_0);

 FUNC_3(&VAR_4->pg_init_wait, &VAR_3);
}
