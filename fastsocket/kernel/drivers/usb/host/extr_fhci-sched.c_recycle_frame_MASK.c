
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet {int * priv_data; scalar_t__ info; int status; scalar_t__ len; int * data; } ;
struct fhci_usb {TYPE_1__* ep0; } ;
struct TYPE_2__ {int empty_frame_Q; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct packet*) ;

__attribute__((used)) static void FUNC_1(struct fhci_usb *VAR_1, struct packet *VAR_2)
{
 VAR_2->data = ((void*)0);
 VAR_2->len = 0;
 VAR_2->status = VAR_0;
 VAR_2->info = 0;
 VAR_2->priv_data = ((void*)0);

 FUNC_0(VAR_1->ep0->empty_frame_Q, VAR_2);
}
