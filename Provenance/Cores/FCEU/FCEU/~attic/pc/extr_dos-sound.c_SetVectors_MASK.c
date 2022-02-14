
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pm_offset; int pm_selector; } ;
struct TYPE_7__ {int pm_offset; int pm_selector; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 VAR_1.pm_offset=VAR_3.pm_offset=(int)VAR_6;
 VAR_1.pm_selector=VAR_3.pm_selector=FUNC_6();


 FUNC_3(VAR_0,&VAR_4);
 FUNC_1(&VAR_3, &VAR_5);
 FUNC_5(VAR_0,&VAR_3);


 FUNC_2(VAR_0,&VAR_2);
 FUNC_0(&VAR_1);
 FUNC_4(VAR_0,&VAR_1);

 return(1);
}
