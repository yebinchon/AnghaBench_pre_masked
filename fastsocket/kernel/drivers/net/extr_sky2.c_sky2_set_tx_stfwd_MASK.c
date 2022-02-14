
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; struct net_device** dev; } ;
struct net_device {scalar_t__ mtu; int features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sky2_hw *VAR_16, unsigned VAR_17)
{
 struct net_device *VAR_18 = VAR_16->dev[VAR_17];

 if ( (VAR_16->chip_id == VAR_0 &&
       VAR_16->chip_rev != VAR_3) ||
      VAR_16->chip_id == VAR_1 ||
      VAR_16->chip_id == VAR_2) {



  if (VAR_18->mtu <= VAR_6)
   FUNC_1(VAR_16, FUNC_0(VAR_17, VAR_11),
         VAR_12 | VAR_15);

  else
   FUNC_1(VAR_16, FUNC_0(VAR_17, VAR_11),
         VAR_13| VAR_15);
 } else {
  if (VAR_18->mtu <= VAR_6)
   FUNC_1(VAR_16, FUNC_0(VAR_17, VAR_11), VAR_15);
  else {

   FUNC_1(VAR_16, FUNC_0(VAR_17, VAR_10),
         (VAR_5 << 16) | VAR_4);

   FUNC_1(VAR_16, FUNC_0(VAR_17, VAR_11), VAR_14);


   VAR_18->features &= ~(VAR_9 | VAR_8 | VAR_7);
  }
 }
}
