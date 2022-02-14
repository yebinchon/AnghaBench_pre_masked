
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static uint32_t
FUNC_4(void)
{
    kern_return_t VAR_2;
    VAR_2 = FUNC_2(FUNC_3(), &VAR_1);
    VAR_0; FUNC_0(VAR_2, "host_get_atm_diagnostic_flag()");
    FUNC_1("Original ATM diagnostic flag: 0x%08x", VAR_1);
    return VAR_1;
}
