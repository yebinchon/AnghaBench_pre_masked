
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtds_percpu; int dtds_size; int * dtds_base; } ;
typedef TYPE_1__ dtrace_dstate_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(dtrace_dstate_t *VAR_3)
{
 FUNC_0(&VAR_1, VAR_0);

 if (VAR_3->dtds_base == ((void*)0))
  return;

 FUNC_2(VAR_3->dtds_base, VAR_3->dtds_size);
 FUNC_1(VAR_2, VAR_3->dtds_percpu);
}
