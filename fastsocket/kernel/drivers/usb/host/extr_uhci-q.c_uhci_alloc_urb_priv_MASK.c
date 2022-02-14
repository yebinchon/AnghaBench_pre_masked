
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int td_list; int node; struct urb* urb; } ;
struct urb {struct urb_priv* hcpriv; } ;
struct uhci_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct urb_priv* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline struct urb_priv *FUNC_2(struct uhci_hcd *VAR_2,
  struct urb *VAR_3)
{
 struct urb_priv *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->urb = VAR_3;
 VAR_3->hcpriv = VAR_4;

 FUNC_0(&VAR_4->node);
 FUNC_0(&VAR_4->td_list);

 return VAR_4;
}
