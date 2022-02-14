
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
typedef int cpumask_var_t ;
struct TYPE_2__ {int (* send_IPI_mask ) (struct cpumask const*,int ) ;int (* send_IPI_allbutself ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct cpumask const* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct cpumask const*) ;
 scalar_t__ FUNC_3 (struct cpumask const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct cpumask const*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cpumask const*,int ) ;

void FUNC_9(const struct cpumask *VAR_5)
{
 cpumask_var_t VAR_6;

 if (!FUNC_0(&VAR_6, VAR_1)) {
  VAR_2->send_IPI_mask(VAR_5, VAR_0);
  return;
 }

 FUNC_2(VAR_6, VAR_4);
 FUNC_1(FUNC_5(), VAR_6);

 if (FUNC_3(VAR_5, VAR_6) &&
     FUNC_3(VAR_4, VAR_3))
  VAR_2->send_IPI_allbutself(VAR_0);
 else
  VAR_2->send_IPI_mask(VAR_5, VAR_0);

 FUNC_4(VAR_6);
}
