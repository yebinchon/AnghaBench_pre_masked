
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {void (* resp ) (struct fc_seq*,struct fc_frame*,void*) ;int ex_lock; void* arg; } ;


 struct fc_exch* FUNC_0 (struct fc_seq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fc_seq *VAR_0,
       void (*VAR_1)(struct fc_seq *, struct fc_frame *,
      void *),
       void *VAR_2)
{
 struct fc_exch *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->ex_lock);
 VAR_3->resp = VAR_1;
 VAR_3->arg = VAR_2;
 FUNC_2(&VAR_3->ex_lock);
}
