
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reg_setup ) (int ,int *,int ) ;int num_counters; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_6;

 VAR_3 = 0;


 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  return VAR_6;


 VAR_3 = VAR_1->reg_setup(VAR_0, &VAR_5, VAR_1->num_counters);

 if (VAR_3)
  goto out;



 FUNC_0(VAR_4, ((void*)0), 1);

out: if (VAR_3) {

  FUNC_1();
 }

 return VAR_3;
}
