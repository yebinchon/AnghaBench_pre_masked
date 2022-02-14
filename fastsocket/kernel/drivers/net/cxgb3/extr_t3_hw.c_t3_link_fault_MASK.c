
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct link_config {int link_ok; int speed; int duplex; int fc; } ;
struct cphy {TYPE_2__* ops; } ;
struct TYPE_6__ {int link_faults; } ;
struct cmac {scalar_t__ offset; TYPE_3__ stats; } ;
struct port_info {scalar_t__ link_fault; struct link_config link_config; struct cphy phy; struct cmac mac; } ;
struct TYPE_4__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;
struct TYPE_5__ {int (* get_link_status ) (struct cphy*,int*,int*,int*,int*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct port_info* FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct cphy*,int*,int*,int*,int*) ;
 int FUNC_2 (struct cmac*,int *,int *,int *) ;
 int FUNC_3 (struct cmac*,int ) ;
 int FUNC_4 (struct cmac*,int ,int ,int ) ;
 int FUNC_5 (struct adapter*,int,int) ;
 int FUNC_6 (struct adapter*,scalar_t__) ;
 int FUNC_7 (struct adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct adapter*) ;

void FUNC_9(struct adapter *VAR_9, int VAR_10)
{
 struct port_info *VAR_11 = FUNC_0(VAR_9, VAR_10);
 struct cmac *VAR_12 = &VAR_11->mac;
 struct cphy *VAR_13 = &VAR_11->phy;
 struct link_config *VAR_14 = &VAR_11->link_config;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;

 FUNC_2(VAR_12, &VAR_20, &VAR_21, &VAR_22);

 if (VAR_9->params.rev > 0 && FUNC_8(VAR_9))
  FUNC_7(VAR_9, VAR_2 + VAR_12->offset, 0);

 FUNC_7(VAR_9, VAR_1 + VAR_12->offset, 0);
 FUNC_3(VAR_12, VAR_7);

 FUNC_4(VAR_12, VAR_20, VAR_21, VAR_22);

 VAR_19 = FUNC_6(VAR_9,
     VAR_0 + VAR_12->offset);
 VAR_19 &= VAR_4;

 VAR_15 = VAR_14->link_ok;
 VAR_16 = VAR_14->speed;
 VAR_17 = VAR_14->duplex;
 VAR_18 = VAR_14->fc;

 VAR_13->ops->get_link_status(VAR_13, &VAR_15, &VAR_16, &VAR_17, &VAR_18);

 if (VAR_19) {
  VAR_14->link_ok = 0;
  VAR_14->speed = VAR_8;
  VAR_14->duplex = VAR_3;

  FUNC_5(VAR_9, VAR_10, 0);


  if (VAR_15)
   VAR_12->stats.link_faults++;
 } else {
  if (VAR_15)
   FUNC_7(VAR_9, VAR_2 + VAR_12->offset,
         VAR_6 | VAR_5);

  VAR_11->link_fault = 0;
  VAR_14->link_ok = (unsigned char)VAR_15;
  VAR_14->speed = VAR_16 < 0 ? VAR_8 : VAR_16;
  VAR_14->duplex = VAR_17 < 0 ? VAR_3 : VAR_17;
  FUNC_5(VAR_9, VAR_10, VAR_15);
 }
}
