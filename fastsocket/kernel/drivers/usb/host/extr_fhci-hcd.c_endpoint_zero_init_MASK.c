
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fhci_usb {int ep0; } ;
typedef enum fhci_mem_alloc { ____Placeholder_fhci_mem_alloc } fhci_mem_alloc ;


 scalar_t__ FUNC_0 (struct fhci_usb*,int,scalar_t__) ;
 int FUNC_1 (struct fhci_usb*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct fhci_usb *VAR_0,
         enum fhci_mem_alloc VAR_1,
         u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 FUNC_1(VAR_0, VAR_0->ep0, VAR_1);

 return 0;
}
