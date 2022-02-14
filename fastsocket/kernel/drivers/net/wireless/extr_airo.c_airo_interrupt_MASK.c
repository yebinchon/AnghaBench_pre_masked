
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {struct airo_info* ml_priv; } ;
struct airo_info {TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int name; } ;


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
 int FUNC_0 (struct airo_info*,int ) ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct airo_info*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (struct airo_info*) ;
 int FUNC_4 (struct airo_info*) ;
 int FUNC_5 (struct airo_info*) ;
 int FUNC_6 (struct airo_info*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_13, void *VAR_14)
{
 struct net_device *VAR_15 = VAR_14;
 u16 VAR_16, VAR_17 = 0;
 struct airo_info *VAR_18 = VAR_15->ml_priv;
 int VAR_19 = 0;

 if (!FUNC_8(VAR_15))
  return VAR_11;

 for (;;) {
  VAR_16 = FUNC_0(VAR_18, VAR_2);
  if (!(VAR_16 & VAR_12) || (VAR_16 == 0xffff))
   break;

  VAR_19 = 1;

  if (VAR_16 & VAR_3) {
   FUNC_2(VAR_18, VAR_0, VAR_3);
   FUNC_2(VAR_18, VAR_0, VAR_3);
  }

  if (!VAR_17) {
   VAR_17 = FUNC_0(VAR_18, VAR_1);
   FUNC_2(VAR_18, VAR_1, 0);
  }

  if (VAR_16 & VAR_5) {
   FUNC_2(VAR_18, VAR_0, VAR_5);
   FUNC_3(VAR_18);
  }

  if (VAR_16 & VAR_4) {

   FUNC_4(VAR_18);
  }


  if (VAR_16 & VAR_6)
   FUNC_5(VAR_18);


  if (VAR_16 & (VAR_7 | VAR_8 | VAR_9))
   FUNC_6(VAR_18, VAR_16);

  if ( VAR_16 & ~VAR_12 & ~VAR_10 ) {
   FUNC_7(VAR_18->dev->name, "Got weird status %x",
    VAR_16 & ~VAR_12 & ~VAR_10 );
  }
 }

 if (VAR_17)
  FUNC_2(VAR_18, VAR_1, VAR_17);

 return FUNC_1(VAR_19);
}
