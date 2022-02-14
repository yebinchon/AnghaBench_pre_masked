
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_interval {int dummy; } ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 struct work_interval* FUNC_6 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(mach_port_name_t VAR_4,
                           struct work_interval **VAR_5)
{
 if (!FUNC_1(VAR_4))
  return VAR_2;

 ipc_port_t VAR_6 = VAR_0;
 kern_return_t VAR_7 = VAR_3;

 VAR_7 = FUNC_5(FUNC_3(), VAR_4, &VAR_6);
 if (VAR_7 != VAR_3)
  return VAR_7;


 FUNC_2(FUNC_0(VAR_6));

 struct work_interval *VAR_8;

 VAR_8 = FUNC_6(VAR_6);


 if (VAR_8 == ((void*)0))
  VAR_7 = VAR_1;

 FUNC_4(VAR_6);

 if (VAR_7 == VAR_3)
  *VAR_5 = VAR_8;

 return VAR_7;

}
