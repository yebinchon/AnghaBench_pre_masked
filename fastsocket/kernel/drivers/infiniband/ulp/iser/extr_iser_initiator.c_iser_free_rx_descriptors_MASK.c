
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_rx_desc {int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct iser_conn {struct iser_rx_desc* rx_descs; struct iser_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct iser_rx_desc*) ;

void FUNC_2(struct iser_conn *VAR_3)
{
 int VAR_4;
 struct iser_rx_desc *VAR_5;
 struct iser_device *VAR_6 = VAR_3->device;

 if (!VAR_3->rx_descs)
  return;

 VAR_5 = VAR_3->rx_descs;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++)
  FUNC_0(VAR_6->ib_device, VAR_5->dma_addr,
   VAR_2, VAR_0);
 FUNC_1(VAR_3->rx_descs);
}
