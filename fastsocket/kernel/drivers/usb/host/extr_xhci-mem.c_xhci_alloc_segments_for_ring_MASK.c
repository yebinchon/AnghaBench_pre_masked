
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {struct xhci_segment* next; } ;
struct xhci_hcd {int dummy; } ;
typedef int gfp_t ;
typedef enum xhci_ring_type { ____Placeholder_xhci_ring_type } xhci_ring_type ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,struct xhci_segment*,struct xhci_segment*,int) ;
 struct xhci_segment* FUNC_1 (struct xhci_hcd*,unsigned int,int ) ;
 int FUNC_2 (struct xhci_hcd*,struct xhci_segment*) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd *VAR_1,
  struct xhci_segment **VAR_2, struct xhci_segment **VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  enum xhci_ring_type VAR_6, gfp_t VAR_7)
{
 struct xhci_segment *VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_5, VAR_7);
 if (!VAR_8)
  return -VAR_0;
 VAR_4--;

 *VAR_2 = VAR_8;
 while (VAR_4 > 0) {
  struct xhci_segment *VAR_9;

  VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_7);
  if (!VAR_9) {
   VAR_8 = *VAR_2;
   while (VAR_8) {
    VAR_9 = VAR_8->next;
    FUNC_2(VAR_1, VAR_8);
    VAR_8 = VAR_9;
   }
   return -VAR_0;
  }
  FUNC_0(VAR_1, VAR_8, VAR_9, VAR_6);

  VAR_8 = VAR_9;
  VAR_4--;
 }
 FUNC_0(VAR_1, VAR_8, *VAR_2, VAR_6);
 *VAR_3 = VAR_8;

 return 0;
}
