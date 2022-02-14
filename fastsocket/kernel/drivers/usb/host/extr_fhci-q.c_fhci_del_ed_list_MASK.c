
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {scalar_t__ state; scalar_t__ tds_cnt; scalar_t__ num_of_tds; } ;
struct urb {struct urb_priv* hcpriv; } ;
struct td {scalar_t__ status; struct urb* urb; } ;
struct fhci_hcd {int dummy; } ;
struct ed {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct urb*,struct td*) ;
 struct td* FUNC_1 (struct ed*) ;
 int FUNC_2 (struct fhci_hcd*,struct urb*) ;
 struct td* FUNC_3 (struct ed*) ;

void FUNC_4(struct fhci_hcd *VAR_2, struct ed *VAR_3)
{
 struct td *VAR_4 = FUNC_3(VAR_3);
 struct urb *VAR_5 = VAR_4->urb;
 struct urb_priv *VAR_6 = VAR_5->hcpriv;

 if (VAR_6->state == VAR_0) {
  VAR_4 = FUNC_1(VAR_3);

  if (VAR_4->status != VAR_1)
   FUNC_0(VAR_5, VAR_4);


  if (++(VAR_6->tds_cnt) == VAR_6->num_of_tds)
   FUNC_2(VAR_2, VAR_5);
 }
}
