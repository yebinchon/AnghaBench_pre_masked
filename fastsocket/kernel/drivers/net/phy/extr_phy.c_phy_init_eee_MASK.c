
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ duplex; scalar_t__ interface; int addr; int bus; int speed; } ;
struct TYPE_2__ {int setting; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 TYPE_1__* VAR_12 ;

int FUNC_6(struct phy_device *VAR_13, bool VAR_14)
{
 int VAR_15 = -VAR_1;





 if ((VAR_13->duplex == VAR_0) &&
     ((VAR_13->interface == VAR_10) ||
     (VAR_13->interface == VAR_9) ||
     (VAR_13->interface == VAR_11))) {
  int VAR_16, VAR_17, VAR_18;
  u32 VAR_19, VAR_20, VAR_21;
  int VAR_22, VAR_23;


  VAR_23 = FUNC_4(VAR_13);
  if (VAR_23)
   return VAR_23;


  VAR_17 = FUNC_3(VAR_13->bus, VAR_8,
      VAR_6, VAR_13->addr);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_20 = FUNC_1(VAR_17);
  if (!VAR_20)
   goto eee_exit;




  VAR_16 = FUNC_3(VAR_13->bus, VAR_3,
            VAR_5, VAR_13->addr);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_18 = FUNC_3(VAR_13->bus, VAR_2,
      VAR_5, VAR_13->addr);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_21 = FUNC_0(VAR_18);
  VAR_19 = FUNC_0(VAR_16);
  VAR_22 = FUNC_2(VAR_13->speed, VAR_13->duplex);
  if (!(VAR_19 & VAR_21 & VAR_12[VAR_22].setting))
   goto eee_exit;

  if (VAR_14) {



   int VAR_24 = FUNC_3(VAR_13->bus, VAR_4,
       VAR_6,
       VAR_13->addr);
   if (VAR_24 < 0)
    return VAR_24;

   VAR_24 |= VAR_7;
   FUNC_5(VAR_13->bus, VAR_4,
            VAR_6, VAR_13->addr, VAR_24);
  }

  VAR_15 = 0;
 }

eee_exit:
 return VAR_15;
}
