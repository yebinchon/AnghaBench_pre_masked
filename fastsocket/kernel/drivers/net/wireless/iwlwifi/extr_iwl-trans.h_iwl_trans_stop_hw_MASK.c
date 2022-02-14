
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int state; int * op_mode; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_hw ) (struct iwl_trans*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct iwl_trans*,int) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_trans *VAR_1,
         bool VAR_2)
{
 FUNC_0();

 VAR_1->ops->stop_hw(VAR_1, VAR_2);

 if (VAR_2)
  VAR_1->op_mode = ((void*)0);

 VAR_1->state = VAR_0;
}
