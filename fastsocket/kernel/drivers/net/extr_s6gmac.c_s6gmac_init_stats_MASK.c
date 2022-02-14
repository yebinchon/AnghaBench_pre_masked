
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s6gmac {scalar_t__ reg; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (int) ;
 struct s6gmac* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_23)
{
 struct s6gmac *VAR_24 = FUNC_2(VAR_23);
 u32 VAR_25;
 VAR_25 = 1 << VAR_3 |
  1 << VAR_7 |
  1 << VAR_6 |
  1 << VAR_9 |
  1 << VAR_11 |
  1 << VAR_2 |
  1 << VAR_5 |
  1 << VAR_0 |
  1 << VAR_8 |
  1 << VAR_4 |
  1 << VAR_10 |
  1 << VAR_1;
 FUNC_3(VAR_25, VAR_24->reg + FUNC_0(0));
 FUNC_3(~VAR_25, VAR_24->reg + FUNC_1(0));
 VAR_25 = 1 << VAR_13 |
  1 << VAR_18 |
  1 << VAR_22 |
  1 << VAR_14 |
  1 << VAR_20 |
  1 << VAR_12 |
  1 << VAR_16 |
  1 << VAR_21 |
  1 << VAR_19 |
  1 << VAR_15 |
  1 << VAR_17;
 FUNC_3(VAR_25, VAR_24->reg + FUNC_0(1));
 FUNC_3(~VAR_25, VAR_24->reg + FUNC_1(1));
}
