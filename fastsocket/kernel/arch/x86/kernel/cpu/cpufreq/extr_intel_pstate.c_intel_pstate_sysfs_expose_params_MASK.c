
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ kset; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;

 VAR_2 = FUNC_1("intel_pstate",
      &VAR_0.kset.kobj);

 FUNC_0(!VAR_2);
 VAR_3 = FUNC_2(VAR_2,
    &VAR_1);
 FUNC_0(VAR_3);
}
