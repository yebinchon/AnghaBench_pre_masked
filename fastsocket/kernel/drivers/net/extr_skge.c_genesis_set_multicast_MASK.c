
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skge_port {int port; scalar_t__ flow_status; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct net_device {int mc_count; int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
typedef int filter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_3 (struct skge_hw*,int,int ,int *) ;
 int FUNC_4 (struct skge_hw*,int,int ) ;
 int FUNC_5 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_9)
{
 struct skge_port *VAR_10 = FUNC_2(VAR_9);
 struct skge_hw *VAR_11 = VAR_10->hw;
 int VAR_12 = VAR_10->port;
 int VAR_13, VAR_14 = VAR_9->mc_count;
 struct dev_mc_list *VAR_15 = VAR_9->mc_list;
 u32 VAR_16;
 u8 VAR_17[8];

 VAR_16 = FUNC_4(VAR_11, VAR_12, VAR_7);
 VAR_16 |= VAR_5;
 if (VAR_9->flags & VAR_3)
  VAR_16 |= VAR_6;
 else
  VAR_16 &= ~VAR_6;

 if (VAR_9->flags & VAR_2)
  FUNC_1(VAR_17, 0xff, sizeof(VAR_17));
 else {
  FUNC_1(VAR_17, 0, sizeof(VAR_17));

  if (VAR_10->flow_status == VAR_0
      || VAR_10->flow_status == VAR_1)
   FUNC_0(VAR_17, VAR_8);

  for (VAR_13 = 0; VAR_15 && VAR_13 < VAR_14; VAR_13++, VAR_15 = VAR_15->next)
   FUNC_0(VAR_17, VAR_15->dmi_addr);
 }

 FUNC_5(VAR_11, VAR_12, VAR_7, VAR_16);
 FUNC_3(VAR_11, VAR_12, VAR_4, VAR_17);
}
