
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static kern_return_t
FUNC_3(uint32_t VAR_2)
{
    FUNC_0("Try to set ATM diagnostic flag to: 0x%08x", VAR_2);
    kern_return_t VAR_3 = FUNC_1(FUNC_2(), VAR_2);
    if (VAR_3 == VAR_0) VAR_1 = 1;
    return VAR_3;
}
