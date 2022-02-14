
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct p54_edcf {int slottime; int sifs; int eofpad; int queue; int mapping; scalar_t__ flags; void* frameburst; void* round_trip_delay; } ;
struct p54_common {int coverage_class; int qos_params; scalar_t__ use_short_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct sk_buff* FUNC_3 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_4 (struct p54_common*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct p54_common *VAR_4)
{
 struct sk_buff *VAR_5;
 struct p54_edcf *VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_3(VAR_4, VAR_3, sizeof(*VAR_6),
       VAR_2, VAR_1);
 if (FUNC_6(!VAR_5))
  return -VAR_0;

 VAR_6 = (struct p54_edcf *)FUNC_5(VAR_5, sizeof(*VAR_6));
 if (VAR_4->use_short_slot) {
  VAR_6->slottime = 9;
  VAR_6->sifs = 0x10;
  VAR_6->eofpad = 0x00;
 } else {
  VAR_6->slottime = 20;
  VAR_6->sifs = 0x0a;
  VAR_6->eofpad = 0x06;
 }




 VAR_7 = 3 * VAR_4->coverage_class;
 VAR_6->slottime += VAR_7;
 VAR_6->round_trip_delay = FUNC_0(VAR_7);

 VAR_6->frameburst = FUNC_0(0);
 VAR_6->flags = 0;
 FUNC_2(VAR_6->mapping, 0, sizeof(VAR_6->mapping));
 FUNC_1(VAR_6->queue, VAR_4->qos_params, sizeof(VAR_6->queue));
 FUNC_4(VAR_4, VAR_5);
 return 0;
}
