
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {scalar_t__ antic_status; scalar_t__ ioc_finished; int io_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct as_data*) ;

__attribute__((used)) static void FUNC_2(struct as_data *VAR_3)
{
 FUNC_0(VAR_3->antic_status == VAR_0);
 if (VAR_3->antic_status == VAR_1) {
  if (!VAR_3->io_context || VAR_3->ioc_finished)
   FUNC_1(VAR_3);
  else
   VAR_3->antic_status = VAR_2;
 }
}
