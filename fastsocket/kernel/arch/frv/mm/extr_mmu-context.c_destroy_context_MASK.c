
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int id_link; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef TYPE_1__ mm_context_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mm_struct *VAR_3)
{
 mm_context_t *VAR_4 = &VAR_3->context;

 FUNC_4(&VAR_1);

 if (!FUNC_3(&VAR_4->id_link)) {
  if (VAR_4->id == VAR_2)
   VAR_2 = -1;

  FUNC_2(&VAR_4->id_link);
  FUNC_1(VAR_4->id, VAR_0);
  FUNC_0(VAR_4->id);
  VAR_4->id = 0;
 }

 FUNC_5(&VAR_1);
}
