
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; scalar_t__ mc_count; } ;
struct emac_instance {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct emac_instance*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct emac_instance*,int ) ;
 struct emac_instance* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline u32 FUNC_3(struct net_device *VAR_12)
{
 struct emac_instance *VAR_13 = FUNC_2(VAR_12);
 u32 VAR_14;

 VAR_14 = VAR_9 | VAR_8 | VAR_4 | VAR_2;

 if (FUNC_1(VAR_13, VAR_1))
     VAR_14 |= VAR_0;
 else
     VAR_14 |= VAR_3;

 if (VAR_12->flags & VAR_11)
  VAR_14 |= VAR_6;
 else if (VAR_12->flags & VAR_10 ||
    (VAR_12->mc_count > FUNC_0(VAR_13)))
  VAR_14 |= VAR_7;
 else if (VAR_12->mc_count > 0)
  VAR_14 |= VAR_5;

 return VAR_14;
}
