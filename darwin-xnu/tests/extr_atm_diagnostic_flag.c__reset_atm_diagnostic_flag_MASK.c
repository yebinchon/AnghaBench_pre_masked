
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void)
{
    if (!VAR_1) return;
    FUNC_1("Reset ATM diagnostic flag to: 0x%08x", VAR_2);
    kern_return_t VAR_3;
    VAR_3 = FUNC_2(FUNC_4(), VAR_2);
    if (VAR_3 != VAR_0) {
        FUNC_0("host_set_atm_diagnostic_flag() failed: %s",
                FUNC_3(VAR_3));
    }
}
