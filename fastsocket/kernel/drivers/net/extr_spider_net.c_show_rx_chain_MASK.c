
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spider_net_hw_descr {int dmac_cmd_status; scalar_t__ next_descr_addr; int data_error; int data_status; int valid_size; int result_size; int buf_size; int buf_addr; } ;
struct spider_net_descr_chain {int num_desc; struct spider_net_descr* ring; struct spider_net_descr* head; struct spider_net_descr* tail; } ;
struct spider_net_descr {struct spider_net_descr* next; int bus_addr; int skb; struct spider_net_hw_descr* hwdescr; } ;
struct spider_net_card {TYPE_1__* netdev; struct spider_net_descr_chain rx_chain; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct spider_net_hw_descr*) ;
 int FUNC_2 (struct spider_net_card*,int ) ;

__attribute__((used)) static void FUNC_3(struct spider_net_card *VAR_2)
{
 struct spider_net_descr_chain *VAR_3 = &VAR_2->rx_chain;
 struct spider_net_descr *VAR_4= VAR_3->tail;
 struct spider_net_descr *VAR_5= VAR_4;
 struct spider_net_hw_descr *VAR_6 = VAR_4->hwdescr;
 struct device *VAR_7 = &VAR_2->netdev->dev;
 u32 VAR_8, VAR_9;
 int VAR_10;

 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = VAR_4 - VAR_3->ring;
 int VAR_14 = VAR_6->dmac_cmd_status;

 FUNC_0(VAR_7, "Total number of descrs=%d\n",
  VAR_3->num_desc);
 FUNC_0(VAR_7, "Chain tail located at descr=%d, status=0x%x\n",
  VAR_13, VAR_14);

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 VAR_9 = FUNC_2(VAR_2, VAR_0);

 VAR_10 = VAR_14;
 do
 {
  VAR_6 = VAR_5->hwdescr;
  VAR_13 = VAR_5 - VAR_3->ring;
  VAR_10 = VAR_6->dmac_cmd_status;

  if (VAR_5 == VAR_3->head)
   FUNC_0(VAR_7, "Chain head is at %d, head status=0x%x\n",
            VAR_13, VAR_10);

  if (VAR_8 == VAR_5->bus_addr)
   FUNC_0(VAR_7, "HW curr desc (GDACTDPA) is at %d, status=0x%x\n",
            VAR_13, VAR_10);

  if (VAR_9 == VAR_5->bus_addr)
   FUNC_0(VAR_7, "HW next desc (GDACNEXTDA) is at %d, status=0x%x\n",
            VAR_13, VAR_10);

  if (VAR_6->next_descr_addr == 0)
   FUNC_0(VAR_7, "chain is cut at %d\n", VAR_13);

  if (VAR_14 != VAR_10) {
   int VAR_15 = (VAR_3->num_desc + VAR_13 - VAR_12) % VAR_3->num_desc;
   int VAR_16 = (VAR_3->num_desc + VAR_13 - 1) % VAR_3->num_desc;
   FUNC_0(VAR_7, "Have %d (from %d to %d) descrs "
            "with stat=0x%08x\n", VAR_12, VAR_15, VAR_16, VAR_14);
   VAR_14 = VAR_10;
   VAR_12 = 0;
  }

  VAR_12 ++;
  VAR_11 ++;
  VAR_5 = VAR_5->next;
 } while (VAR_5 != VAR_4);

 FUNC_0(VAR_7, "Last %d descrs with stat=0x%08x "
          "for a total of %d descrs\n", VAR_12, VAR_14, VAR_11);
}
