
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {int antic_status; int antic_work; int q; int antic_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct as_data *VAR_3)
{
 int VAR_4 = VAR_3->antic_status;

 if (VAR_4 == VAR_2 || VAR_4 == VAR_1) {
  if (VAR_4 == VAR_1)
   FUNC_0(&VAR_3->antic_timer);
  VAR_3->antic_status = VAR_0;

  FUNC_1(VAR_3->q, &VAR_3->antic_work);
 }
}
