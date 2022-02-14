
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {int status; int hep_node; } ;
struct c67x00_hcd {int lock; } ;


 int FUNC_0 (struct c67x00_hcd*) ;
 int FUNC_1 (struct c67x00_hcd*,struct urb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct urb*,int) ;
 int FUNC_6 (int ,struct urb*) ;

__attribute__((used)) static void
FUNC_7(struct c67x00_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct c67x00_urb_priv *VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->hcpriv;
 VAR_3->status = VAR_2;

 FUNC_2(&VAR_3->hep_node);

 FUNC_1(VAR_0, VAR_1);
 FUNC_6(FUNC_0(VAR_0), VAR_1);
 FUNC_4(&VAR_0->lock);
 FUNC_5(FUNC_0(VAR_0), VAR_1, VAR_3->status);
 FUNC_3(&VAR_0->lock);
}
