
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_link_config {scalar_t__ loopback_mode; scalar_t__ active_speed; } ;
struct niu {int flags; struct niu_link_config link_config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_20)
{
 struct niu_link_config *VAR_21 = &VAR_20->link_config;
 u64 VAR_22;

 if (VAR_20->flags & VAR_5) {
  VAR_22 = FUNC_0(VAR_1);
  VAR_22 |= VAR_2;
  FUNC_2(VAR_1, VAR_22);
 }

 VAR_22 = FUNC_1(VAR_8);
 VAR_22 &= ~VAR_18;

 VAR_22 |= VAR_19;

 if (VAR_21->loopback_mode == VAR_0) {
  VAR_22 &= ~VAR_18;
  VAR_22 |= VAR_12;
 } else {
  VAR_22 &= ~VAR_12;
 }

 if (VAR_20->flags & VAR_3) {
  VAR_22 &= ~VAR_11;
 } else {
  VAR_22 |= VAR_11;
  if (!(VAR_20->flags & VAR_4) &&
      !(VAR_20->flags & VAR_5))
   VAR_22 |= VAR_10;
  else
   VAR_22 &= ~VAR_10;
 }

 VAR_22 &= ~VAR_9;

 if (VAR_21->active_speed == VAR_6)
  VAR_22 |= VAR_17;
 else
  VAR_22 &= ~VAR_17;

 FUNC_3(VAR_8, VAR_22);

 VAR_22 = FUNC_1(VAR_8);
 VAR_22 &= ~VAR_14;
 if (VAR_20->flags & VAR_3) {
  VAR_22 |= VAR_16;
 } else {
  if (VAR_21->active_speed == VAR_7)
   VAR_22 |= VAR_13;
  else
   VAR_22 |= VAR_15;
 }

 FUNC_3(VAR_8, VAR_22);
}
