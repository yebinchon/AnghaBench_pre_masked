
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct niu_link_config {int active_speed; int active_duplex; } ;
struct niu {int lock; int phy_addr; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct niu*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_10, int *VAR_11)
{
 struct niu_link_config *VAR_12 = &VAR_10->link_config;
 u16 VAR_13, VAR_14;
 unsigned long VAR_15;
 u8 VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = 0;
 VAR_13 = VAR_9;
 VAR_16 = VAR_2;

 FUNC_1(&VAR_10->lock, VAR_15);

 VAR_17 = -VAR_3;

 VAR_17 = FUNC_0(VAR_10, VAR_10->phy_addr, VAR_5);
 if (VAR_17 < 0)
  goto out;

 VAR_14 = VAR_17;
 if (VAR_14 & VAR_0) {
  u16 VAR_19, VAR_20, VAR_21, VAR_22;

  VAR_17 = FUNC_0(VAR_10, VAR_10->phy_addr, VAR_4);
  if (VAR_17 < 0)
   goto out;
  VAR_19 = VAR_17;

  VAR_17 = FUNC_0(VAR_10, VAR_10->phy_addr, VAR_7);
  if (VAR_17 < 0)
   goto out;
  VAR_20 = VAR_17;

  VAR_21 = VAR_19 & VAR_20;

  VAR_17 = FUNC_0(VAR_10, VAR_10->phy_addr, VAR_6);
  if (VAR_17 < 0)
   goto out;
  VAR_22 = VAR_17;
  VAR_18 = 1;
  VAR_13 = VAR_8;
  VAR_16 = VAR_1;

 }
 VAR_12->active_speed = VAR_13;
 VAR_12->active_duplex = VAR_16;
 VAR_17 = 0;

out:
 FUNC_2(&VAR_10->lock, VAR_15);

 *VAR_11 = VAR_18;
 return VAR_17;
}
