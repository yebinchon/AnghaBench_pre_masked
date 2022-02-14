
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_config {unsigned int requested_fc; int supported; int advertising; scalar_t__ autoneg; int speed; int requested_speed; int duplex; int requested_duplex; unsigned char fc; scalar_t__ link_ok; } ;
struct cphy {TYPE_1__* ops; } ;
struct cmac {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct cphy*,int ) ;int (* autoneg_enable ) (struct cphy*) ;int (* set_speed_duplex ) (struct cphy*,int,int) ;int (* advertise ) (struct cphy*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int,int) ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct cphy*,int ) ;
 int FUNC_4 (struct cmac*,int,int,unsigned int) ;

int FUNC_5(struct cphy *VAR_6, struct cmac *VAR_7, struct link_config *VAR_8)
{
 unsigned int VAR_9 = VAR_8->requested_fc & (VAR_3 | VAR_4);

 VAR_8->link_ok = 0;
 if (VAR_8->supported & VAR_5) {
  VAR_8->advertising &= ~(VAR_0 | VAR_1);
  if (VAR_9) {
   VAR_8->advertising |= VAR_0;
   if (VAR_9 & VAR_3)
    VAR_8->advertising |= VAR_1;
  }
  VAR_6->ops->advertise(VAR_6, VAR_8->advertising);

  if (VAR_8->autoneg == VAR_2) {
   VAR_8->speed = VAR_8->requested_speed;
   VAR_8->duplex = VAR_8->requested_duplex;
   VAR_8->fc = (unsigned char)VAR_9;
   FUNC_4(VAR_7, VAR_8->speed, VAR_8->duplex,
         VAR_9);

   VAR_6->ops->set_speed_duplex(VAR_6, VAR_8->speed, VAR_8->duplex);
  } else
   VAR_6->ops->autoneg_enable(VAR_6);
 } else {
  FUNC_4(VAR_7, -1, -1, VAR_9);
  VAR_8->fc = (unsigned char)VAR_9;
  VAR_6->ops->reset(VAR_6, 0);
 }
 return 0;
}
