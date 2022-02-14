
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct urb_priv {struct td** tds; } ;
struct urb {int dummy; } ;
struct td {int type; int toggle; size_t iso_index; size_t interval; size_t start_frame; int ioc; int status; int len; int * data; struct ed* ed; struct urb* urb; } ;
struct fhci_hcd {int dummy; } ;
struct ed {int dummy; } ;
typedef enum fhci_ta_type { ____Placeholder_fhci_ta_type } fhci_ta_type ;


 int VAR_0 ;
 struct td* FUNC_0 (struct fhci_hcd*) ;

struct td *FUNC_1(struct fhci_hcd *VAR_1, struct urb *VAR_2,
   struct urb_priv *VAR_3, struct ed *VAR_4, u16 VAR_5,
   enum fhci_ta_type VAR_6, int VAR_7, u8 *VAR_8, u32 VAR_9,
   u16 VAR_10, u16 VAR_11, bool VAR_12)
{
 struct td *VAR_13 = FUNC_0(VAR_1);

 if (!VAR_13)
  return ((void*)0);

 VAR_13->urb = VAR_2;
 VAR_13->ed = VAR_4;
 VAR_13->type = VAR_6;
 VAR_13->toggle = VAR_7;
 VAR_13->data = VAR_8;
 VAR_13->len = VAR_9;
 VAR_13->iso_index = VAR_5;
 VAR_13->interval = VAR_10;
 VAR_13->start_frame = VAR_11;
 VAR_13->ioc = VAR_12;
 VAR_13->status = VAR_0;

 VAR_3->tds[VAR_5] = VAR_13;

 return VAR_13;
}
