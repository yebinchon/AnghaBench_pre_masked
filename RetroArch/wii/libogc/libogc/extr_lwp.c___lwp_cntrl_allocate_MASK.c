
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object; } ;
typedef TYPE_1__ lwp_cntrl ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;

__attribute__((used)) static lwp_cntrl* FUNC_4()
{
 lwp_cntrl *VAR_1;

 FUNC_2();
 VAR_1 = (lwp_cntrl*)FUNC_0(&VAR_0);
 if(VAR_1) {
  FUNC_1(&VAR_0,&VAR_1->object);
  return VAR_1;
 }
 FUNC_3();
 return ((void*)0);
}
