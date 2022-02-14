
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; int error_count; struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {int dummy; } ;
struct c67x00_td {int privdata; int status; struct urb* urb; } ;
struct c67x00_hcd {int dummy; } ;
struct TYPE_2__ {int status; int actual_length; } ;


 int VAR_0 ;
 int FUNC_0 (struct c67x00_hcd*,struct urb*,int ) ;
 int FUNC_1 (struct c67x00_hcd*,struct c67x00_td*) ;
 int FUNC_2 (struct c67x00_td*) ;

__attribute__((used)) static void FUNC_3(struct c67x00_hcd *VAR_1, struct c67x00_td *VAR_2)
{
 struct urb *VAR_3 = VAR_2->urb;
 struct c67x00_urb_priv *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 VAR_4 = VAR_3->hcpriv;
 VAR_5 = VAR_2->privdata;

 if (VAR_2->status & VAR_0)
  VAR_3->error_count++;

 VAR_3->iso_frame_desc[VAR_5].actual_length = FUNC_2(VAR_2);
 VAR_3->iso_frame_desc[VAR_5].status = FUNC_1(VAR_1, VAR_2);
 if (VAR_5 + 1 == VAR_3->number_of_packets)
  FUNC_0(VAR_1, VAR_3, 0);
}
