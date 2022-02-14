
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int len; int offset; int cmd; } ;
struct TYPE_9__ {int * phy; } ;
struct TYPE_6__ {int pmf; } ;
struct bnx2x {scalar_t__ state; TYPE_4__ link_params; int link_vars; TYPE_1__ port; } ;
struct TYPE_8__ {TYPE_2__* port_hw_config; } ;
struct TYPE_7__ {int external_phy_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (TYPE_4__*,int *,int) ;
 int FUNC_10 (struct bnx2x*,int ,int *,int ) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*,int ,int ,int) ;
 int FUNC_14 (struct bnx2x*,int *) ;
 int FUNC_15 (struct bnx2x*,int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_16 (int) ;
 struct bnx2x* FUNC_17 (struct net_device*) ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_12,
       struct ethtool_eeprom *VAR_13, u8 *VAR_14)
{
 struct bnx2x *VAR_15 = FUNC_17(VAR_12);
 int VAR_16 = FUNC_0(VAR_15);
 int VAR_17 = 0;
 u32 VAR_18;

 if (!FUNC_7(VAR_15)) {
  FUNC_1(VAR_0 | VAR_1,
     "cannot access eeprom when the interface is down\n");
  return -VAR_3;
 }

 FUNC_1(VAR_0 | VAR_1, "ethtool_eeprom: cmd %d\n"
    "  magic 0x%x  offset 0x%x (%d)  len 0x%x (%d)\n",
    VAR_13->cmd, VAR_13->magic, VAR_13->offset, VAR_13->offset,
    VAR_13->len, VAR_13->len);




 if ((VAR_13->magic >= 0x50485900) && (VAR_13->magic <= 0x504859FF) &&
     !VAR_15->port.pmf) {
  FUNC_1(VAR_0 | VAR_1,
     "wrong magic or interface is not pmf\n");
  return -VAR_4;
 }

 VAR_18 =
  FUNC_2(VAR_15,
    VAR_11.port_hw_config[VAR_16].external_phy_config);

 if (VAR_13->magic == 0x50485950) {

  FUNC_15(VAR_15, VAR_10);

  FUNC_4(VAR_15);
  VAR_17 |= FUNC_9(&VAR_15->link_params,
           &VAR_15->link_vars, 0);
  if (FUNC_3(VAR_18) ==
     VAR_9)
   FUNC_13(VAR_15, VAR_6,
           VAR_7, VAR_16);
  FUNC_12(VAR_15);
  FUNC_8(VAR_15);

 } else if (VAR_13->magic == 0x50485952) {

  if (VAR_15->state == VAR_2) {
   FUNC_4(VAR_15);
   VAR_17 |= FUNC_9(&VAR_15->link_params,
            &VAR_15->link_vars, 1);

   VAR_17 |= FUNC_11(&VAR_15->link_params,
          &VAR_15->link_vars);
   FUNC_12(VAR_15);
   FUNC_5(VAR_15);
  }
 } else if (VAR_13->magic == 0x53985943) {

  if (FUNC_3(VAR_18) ==
           VAR_9) {


   FUNC_13(VAR_15, VAR_6,
           VAR_8, VAR_16);

   FUNC_4(VAR_15);

   FUNC_14(VAR_15,
      &VAR_15->link_params.phy[VAR_5]);


   FUNC_16(500);
   FUNC_6(VAR_15, VAR_16);
   FUNC_16(500);
   FUNC_12(VAR_15);
  }
 } else
  VAR_17 = FUNC_10(VAR_15, VAR_13->offset, VAR_14, VAR_13->len);

 return VAR_17;
}
