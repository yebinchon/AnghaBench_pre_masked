
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lwp_t ;
struct TYPE_2__ {int context; } ;
typedef TYPE_1__ lwp_cntrl ;
typedef int frame_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;

frame_context* FUNC_3(lwp_t VAR_1)
{
 lwp_cntrl *VAR_2;
 frame_context *VAR_3 = ((void*)0);

 FUNC_0(VAR_1);
 VAR_2 = (lwp_cntrl*)FUNC_2(&VAR_0,FUNC_1(VAR_1));
 if(VAR_2) VAR_3 = &VAR_2->context;

 return VAR_3;
}
