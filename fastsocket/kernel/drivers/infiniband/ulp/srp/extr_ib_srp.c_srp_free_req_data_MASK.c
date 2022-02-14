
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_target_port {int indirect_size; struct srp_request* req_ring; TYPE_2__* srp_host; } ;
struct srp_request {int indirect_desc; scalar_t__ indirect_dma_addr; int map_page; int fmr_list; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* srp_dev; } ;
struct TYPE_3__ {struct ib_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct srp_target_port *VAR_2)
{
 struct ib_device *VAR_3 = VAR_2->srp_host->srp_dev->dev;
 struct srp_request *VAR_4;
 int VAR_5;

 for (VAR_5 = 0, VAR_4 = VAR_2->req_ring; VAR_5 < VAR_1; ++VAR_5, ++VAR_4) {
  FUNC_1(VAR_4->fmr_list);
  FUNC_1(VAR_4->map_page);
  if (VAR_4->indirect_dma_addr) {
   FUNC_0(VAR_3, VAR_4->indirect_dma_addr,
         VAR_2->indirect_size,
         VAR_0);
  }
  FUNC_1(VAR_4->indirect_desc);
 }
}
