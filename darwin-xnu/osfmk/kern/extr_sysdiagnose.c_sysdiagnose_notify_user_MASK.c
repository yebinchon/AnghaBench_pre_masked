
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

kern_return_t
FUNC_7(uint32_t VAR_4)
{
 mach_port_t VAR_5;
 kern_return_t VAR_6;

 VAR_6 = FUNC_3(FUNC_4(), &VAR_5);
 if ((VAR_6 != VAR_2) || !FUNC_0(VAR_5)) {
  return VAR_6;
 }

 FUNC_1(FUNC_2(VAR_1, VAR_3) | VAR_0, 0, 0, 0, 0, 0);

 VAR_6 = FUNC_6(VAR_5, VAR_4);
 FUNC_5(VAR_5);
 return VAR_6;
}
