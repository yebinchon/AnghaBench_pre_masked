
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_tmf {int io_tag; } ;
struct isci_request {int io_tag; } ;
typedef enum isci_tmf_function_codes { ____Placeholder_isci_tmf_function_codes } isci_tmf_function_codes ;


 int FUNC_0 (struct isci_tmf*,int) ;

__attribute__((used)) static void FUNC_1(struct isci_tmf *VAR_0,
        enum isci_tmf_function_codes VAR_1,
        struct isci_request *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->io_tag = VAR_2->io_tag;
}
