
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {void* duplex; void* line_speed; scalar_t__ link_up; int mii_lpa; int mii_adv; int mii_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_16)
{
 u32 VAR_17;

 FUNC_0(VAR_16, VAR_16->mii_bmcr, &VAR_17);
 if (VAR_17 & VAR_6) {
  u32 VAR_18, VAR_19, VAR_20;

  FUNC_0(VAR_16, VAR_11, &VAR_18);
  FUNC_0(VAR_16, VAR_12, &VAR_19);

  VAR_20 = VAR_18 & (VAR_19 >> 2);
  if (VAR_20 & VAR_0) {
   VAR_16->line_speed = VAR_15;
   VAR_16->duplex = VAR_9;
  }
  else if (VAR_20 & VAR_1) {
   VAR_16->line_speed = VAR_15;
   VAR_16->duplex = VAR_10;
  }
  else {
   FUNC_0(VAR_16, VAR_16->mii_adv, &VAR_18);
   FUNC_0(VAR_16, VAR_16->mii_lpa, &VAR_19);

   VAR_20 = VAR_18 & VAR_19;
   if (VAR_20 & VAR_2) {
    VAR_16->line_speed = VAR_14;
    VAR_16->duplex = VAR_9;
   }
   else if (VAR_20 & VAR_3) {
    VAR_16->line_speed = VAR_14;
    VAR_16->duplex = VAR_10;
   }
   else if (VAR_20 & VAR_4) {
    VAR_16->line_speed = VAR_13;
    VAR_16->duplex = VAR_9;
   }
   else if (VAR_20 & VAR_5) {
    VAR_16->line_speed = VAR_13;
    VAR_16->duplex = VAR_10;
   }
   else {
    VAR_16->line_speed = 0;
    VAR_16->link_up = 0;
   }
  }
 }
 else {
  if (VAR_17 & VAR_8) {
   VAR_16->line_speed = VAR_14;
  }
  else {
   VAR_16->line_speed = VAR_13;
  }
  if (VAR_17 & VAR_7) {
   VAR_16->duplex = VAR_9;
  }
  else {
   VAR_16->duplex = VAR_10;
  }
 }

 return 0;
}
