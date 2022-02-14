
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct skge_port {int port; scalar_t__ flow_status; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct skge_hw*,int,int ) ;
 int FUNC_1 (struct skge_hw*,int,int ,int) ;
 int FUNC_2 (scalar_t__*,int,int) ;
 struct skge_port* FUNC_3 (struct net_device*) ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_12)
{
 struct skge_port *VAR_13 = FUNC_3(VAR_12);
 struct skge_hw *VAR_14 = VAR_13->hw;
 int VAR_15 = VAR_13->port;
 struct dev_mc_list *VAR_16 = VAR_12->mc_list;
 int VAR_17 = (VAR_13->flow_status == VAR_0
   || VAR_13->flow_status == VAR_1);
 u16 VAR_18;
 u8 VAR_19[8];

 FUNC_2(VAR_19, 0, sizeof(VAR_19));

 VAR_18 = FUNC_0(VAR_14, VAR_15, VAR_8);
 VAR_18 |= VAR_7;

 if (VAR_12->flags & VAR_10)
  VAR_18 &= ~(VAR_7 | VAR_6);
 else if (VAR_12->flags & VAR_9)
  FUNC_2(VAR_19, 0xff, sizeof(VAR_19));
 else if (VAR_12->mc_count == 0 && !VAR_17)
  VAR_18 &= ~VAR_6;
 else {
  int VAR_20;
  VAR_18 |= VAR_6;

  if (VAR_17)
   FUNC_4(VAR_19, VAR_11);

  for (VAR_20 = 0; VAR_16 && VAR_20 < VAR_12->mc_count; VAR_20++, VAR_16 = VAR_16->next)
   FUNC_4(VAR_19, VAR_16->dmi_addr);
 }


 FUNC_1(VAR_14, VAR_15, VAR_2,
    (u16)VAR_19[0] | ((u16)VAR_19[1] << 8));
 FUNC_1(VAR_14, VAR_15, VAR_3,
    (u16)VAR_19[2] | ((u16)VAR_19[3] << 8));
 FUNC_1(VAR_14, VAR_15, VAR_4,
    (u16)VAR_19[4] | ((u16)VAR_19[5] << 8));
 FUNC_1(VAR_14, VAR_15, VAR_5,
    (u16)VAR_19[6] | ((u16)VAR_19[7] << 8));

 FUNC_1(VAR_14, VAR_15, VAR_8, VAR_18);
}
