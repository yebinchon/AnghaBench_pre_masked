
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ipc_kobject_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_3(void)
{
 VAR_3 = FUNC_1();

 if (VAR_3 == VAR_1)
  FUNC_2("can't allocate unix exception port");

 FUNC_0(VAR_3, (ipc_kobject_t)&VAR_2, VAR_0);
}
