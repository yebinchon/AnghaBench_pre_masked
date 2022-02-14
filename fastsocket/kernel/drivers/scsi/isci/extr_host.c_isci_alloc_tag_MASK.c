
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct isci_host {int * io_request_sequence; } ;


 size_t FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (struct isci_host*) ;
 scalar_t__ FUNC_2 (struct isci_host*) ;

u16 FUNC_3(struct isci_host *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  u16 VAR_2 = FUNC_1(VAR_1);
  u8 VAR_3 = VAR_1->io_request_sequence[VAR_2];

  return FUNC_0(VAR_3, VAR_2);
 }

 return VAR_0;
}
