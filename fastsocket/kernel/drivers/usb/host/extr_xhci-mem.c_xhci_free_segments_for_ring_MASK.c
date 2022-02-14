
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {struct xhci_segment* next; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_hcd*,struct xhci_segment*) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_0,
    struct xhci_segment *VAR_1)
{
 struct xhci_segment *VAR_2;

 VAR_2 = VAR_1->next;
 while (VAR_2 != VAR_1) {
  struct xhci_segment *VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_0(VAR_0, VAR_1);
}
