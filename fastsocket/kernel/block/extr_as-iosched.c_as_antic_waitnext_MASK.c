
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {scalar_t__ antic_status; unsigned long antic_start; unsigned long antic_expire; int antic_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct as_data *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(VAR_3->antic_status != VAR_0
   && VAR_3->antic_status != VAR_2);

 VAR_4 = VAR_3->antic_start + VAR_3->antic_expire;

 FUNC_1(&VAR_3->antic_timer, VAR_4);

 VAR_3->antic_status = VAR_1;
}
