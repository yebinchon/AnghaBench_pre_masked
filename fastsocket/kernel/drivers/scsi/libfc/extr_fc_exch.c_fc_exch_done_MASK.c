
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {int ex_lock; } ;


 int FUNC_0 (struct fc_exch*) ;
 int FUNC_1 (struct fc_exch*) ;
 struct fc_exch* FUNC_2 (struct fc_seq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fc_seq *VAR_0)
{
 struct fc_exch *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_3(&VAR_1->ex_lock);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(&VAR_1->ex_lock);
 if (!VAR_2)
  FUNC_0(VAR_1);
}
