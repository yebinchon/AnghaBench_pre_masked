
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_generic_trb {int* field; } ;
union xhci_trb {struct xhci_generic_trb generic; } ;
struct xhci_segment {struct xhci_segment* next; union xhci_trb* trbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct xhci_segment *FUNC_1(
  struct xhci_segment *VAR_2,
  union xhci_trb *VAR_3, int *VAR_4)
{
 struct xhci_segment *VAR_5 = VAR_2;
 struct xhci_generic_trb *VAR_6;

 while (VAR_5->trbs > VAR_3 ||
   &VAR_5->trbs[VAR_1 - 1] < VAR_3) {
  VAR_6 = &VAR_5->trbs[VAR_1 - 1].generic;
  if (VAR_6->field[3] & FUNC_0(VAR_0))
   *VAR_4 ^= 0x1;
  VAR_5 = VAR_5->next;
  if (VAR_5 == VAR_2)

   return ((void*)0);
 }
 return VAR_5;
}
