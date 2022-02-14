
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int lock; int ed_bulktail; int ed_controltail; } ;
struct debug_buffer {scalar_t__ count; scalar_t__ page; struct ohci_hcd* ohci; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (struct ohci_hcd*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct debug_buffer *VAR_0)
{
 struct ohci_hcd *VAR_1;
 size_t VAR_2;
 unsigned long VAR_3;

 VAR_1 = VAR_0->ohci;


 FUNC_1 (&VAR_1->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1, VAR_0->page, VAR_0->count, VAR_1->ed_controltail);
 VAR_2 += FUNC_0(VAR_1, VAR_0->page + VAR_2, VAR_0->count - VAR_2,
     VAR_1->ed_bulktail);
 FUNC_2 (&VAR_1->lock, VAR_3);

 return VAR_2;
}
