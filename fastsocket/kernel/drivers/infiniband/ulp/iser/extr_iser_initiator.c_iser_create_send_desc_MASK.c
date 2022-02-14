
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct iser_tx_desc {int num_sge; TYPE_1__* tx_sg; TYPE_3__ iser_header; int dma_addr; } ;
struct iser_hdr {int dummy; } ;
struct iser_device {TYPE_2__* mr; int ib_device; } ;
struct iser_conn {struct iser_device* device; } ;
struct TYPE_5__ {scalar_t__ lkey; } ;
struct TYPE_4__ {scalar_t__ lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,struct iser_tx_desc*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct iser_conn *VAR_3,
      struct iser_tx_desc *VAR_4)
{
 struct iser_device *VAR_5 = VAR_3->device;

 FUNC_0(VAR_5->ib_device,
  VAR_4->dma_addr, VAR_1, VAR_0);

 FUNC_2(&VAR_4->iser_header, 0, sizeof(struct iser_hdr));
 VAR_4->iser_header.flags = VAR_2;

 VAR_4->num_sge = 1;

 if (VAR_4->tx_sg[0].lkey != VAR_5->mr->lkey) {
  VAR_4->tx_sg[0].lkey = VAR_5->mr->lkey;
  FUNC_1("sdesc %p lkey mismatch, fixing\n", VAR_4);
 }
}
