
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {void* stack; } ;
typedef TYPE_1__ lwp_cntrl ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;

u32 FUNC_3(lwp_cntrl *VAR_1,u32 VAR_2)
{
 void *VAR_3 = ((void*)0);

 if(!FUNC_1(VAR_2))
  VAR_2 = VAR_0;

 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2);

 if(!VAR_3) VAR_2 = 0;

 VAR_1->stack = VAR_3;
 return VAR_2;
}
