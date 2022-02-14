
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_tmf {int tmf_code; } ;
typedef enum isci_tmf_function_codes { ____Placeholder_isci_tmf_function_codes } isci_tmf_function_codes ;


 int FUNC_0 (struct isci_tmf*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct isci_tmf *VAR_0,
    enum isci_tmf_function_codes VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->tmf_code = VAR_1;
}
