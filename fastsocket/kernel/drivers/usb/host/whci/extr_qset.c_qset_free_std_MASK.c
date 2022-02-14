
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct whc_std {int num_pointers; int len; struct whc_std* pl_virt; scalar_t__ dma_addr; struct whc_std* bounce_buf; int buf_ptr; TYPE_1__* urb; int list_node; } ;
struct whc_page_list_entry {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct whc {TYPE_2__ wusbhc; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct whc_std*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct whc*,struct whc_std*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct whc *VAR_2, struct whc_std *VAR_3)
{
 FUNC_3(&VAR_3->list_node);
 if (VAR_3->bounce_buf) {
  bool VAR_4 = FUNC_5(VAR_3->urb->pipe);
  dma_addr_t VAR_5;

  if (VAR_3->num_pointers)
   VAR_5 = FUNC_2(VAR_3->pl_virt[0].buf_ptr);
  else
   VAR_5 = VAR_3->dma_addr;

  FUNC_0(VAR_2->wusbhc.dev, VAR_5,
     VAR_3->len, VAR_4 ? VAR_1 : VAR_0);
  if (!VAR_4)
   FUNC_4(VAR_2, VAR_3);
  FUNC_1(VAR_3->bounce_buf);
 }
 if (VAR_3->pl_virt) {
  if (VAR_3->dma_addr)
   FUNC_0(VAR_2->wusbhc.dev, VAR_3->dma_addr,
      VAR_3->num_pointers * sizeof(struct whc_page_list_entry),
      VAR_1);
  FUNC_1(VAR_3->pl_virt);
  VAR_3->pl_virt = ((void*)0);
 }
 FUNC_1(VAR_3);
}
