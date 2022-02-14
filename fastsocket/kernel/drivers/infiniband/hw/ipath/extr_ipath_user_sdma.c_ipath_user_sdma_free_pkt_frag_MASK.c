
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_user_sdma_queue {int header_cache; } ;
struct ipath_user_sdma_pkt {TYPE_1__* addr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int addr; scalar_t__ kvaddr; scalar_t__ page; scalar_t__ put_page; int length; scalar_t__ dma_mapped; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1,
       struct ipath_user_sdma_queue *VAR_2,
       struct ipath_user_sdma_pkt *VAR_3,
       int VAR_4)
{
 const int VAR_5 = VAR_4;

 if (VAR_3->addr[VAR_5].page) {
  if (VAR_3->addr[VAR_5].dma_mapped)
   FUNC_2(VAR_1,
           VAR_3->addr[VAR_5].addr,
           VAR_3->addr[VAR_5].length,
           VAR_0);

  if (VAR_3->addr[VAR_5].kvaddr)
   FUNC_3(VAR_3->addr[VAR_5].page);

  if (VAR_3->addr[VAR_5].put_page)
   FUNC_4(VAR_3->addr[VAR_5].page);
  else
   FUNC_0(VAR_3->addr[VAR_5].page);
 } else if (VAR_3->addr[VAR_5].kvaddr)

  FUNC_1(VAR_2->header_cache,
         VAR_3->addr[VAR_5].kvaddr, VAR_3->addr[VAR_5].addr);
}
