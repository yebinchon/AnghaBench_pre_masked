
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fhci_hcd {int * gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct fhci_hcd *VAR_3)
{
 u8 VAR_4 = 0;


 if (!FUNC_0(VAR_3->gpios[VAR_0]))
  return -1;


 if (FUNC_0(VAR_3->gpios[VAR_2]))
  VAR_4 |= 0x2;


 if (FUNC_0(VAR_3->gpios[VAR_1]))
  VAR_4 |= 0x1;

 return VAR_4;
}
