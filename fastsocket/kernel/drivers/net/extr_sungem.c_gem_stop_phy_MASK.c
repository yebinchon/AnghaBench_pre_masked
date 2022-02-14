
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u32 ;
struct TYPE_8__ {TYPE_3__* def; } ;
struct gem {scalar_t__ regs; TYPE_4__ phy_mii; int lock; int tx_lock; TYPE_1__* dev; scalar_t__ has_wol; } ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* suspend ) (TYPE_4__*) ;} ;
struct TYPE_5__ {unsigned char* dev_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 scalar_t__ VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 scalar_t__ FUNC_0 (struct gem*) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (int) ;
 unsigned char FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct gem *VAR_29, int VAR_30)
{
 u32 VAR_31;
 unsigned long VAR_32;




 FUNC_2(10);




 VAR_31 = FUNC_3(VAR_29->regs + VAR_15);
 VAR_31 &= ~VAR_17;
 FUNC_9(VAR_31, VAR_29->regs + VAR_15);

 if (VAR_30 && VAR_29->has_wol) {
  unsigned char *VAR_33 = &VAR_29->dev->dev_addr[0];
  u32 VAR_34;


  FUNC_9(VAR_2 | VAR_3 | VAR_1,
         VAR_29->regs + VAR_0);
  FUNC_9((VAR_33[4] << 8) | VAR_33[5], VAR_29->regs + VAR_20);
  FUNC_9((VAR_33[2] << 8) | VAR_33[3], VAR_29->regs + VAR_21);
  FUNC_9((VAR_33[0] << 8) | VAR_33[1], VAR_29->regs + VAR_22);

  FUNC_9(VAR_25 | VAR_24, VAR_29->regs + VAR_23);
  VAR_34 = VAR_27;
  if ((FUNC_3(VAR_29->regs + VAR_9) & VAR_10) == 0)
   VAR_34 |= VAR_28;
  FUNC_9(VAR_34, VAR_29->regs + VAR_26);
 } else {
  FUNC_9(0, VAR_29->regs + VAR_0);
  (void)FUNC_3(VAR_29->regs + VAR_0);




  FUNC_2(10);
 }

 FUNC_9(0, VAR_29->regs + VAR_6);
 FUNC_9(0, VAR_29->regs + VAR_9);
 FUNC_9(0, VAR_29->regs + VAR_19);
 FUNC_9(0, VAR_29->regs + VAR_18);

 if (!VAR_30) {
  FUNC_5(&VAR_29->lock, VAR_32);
  FUNC_4(&VAR_29->tx_lock);
  FUNC_1(VAR_29);
  FUNC_9(VAR_8, VAR_29->regs + VAR_7);
  FUNC_9(VAR_5, VAR_29->regs + VAR_4);
  FUNC_6(&VAR_29->tx_lock);
  FUNC_7(&VAR_29->lock, VAR_32);



  if (FUNC_0(VAR_29) && VAR_29->phy_mii.def->ops->suspend)
   VAR_29->phy_mii.def->ops->suspend(&VAR_29->phy_mii);




  FUNC_9(VAR_31 | VAR_16, VAR_29->regs + VAR_15);
  FUNC_9(0, VAR_29->regs + VAR_12);
  FUNC_9(0, VAR_29->regs + VAR_13);
  FUNC_9(0, VAR_29->regs + VAR_14);
  FUNC_9(VAR_10 | VAR_11, VAR_29->regs + VAR_9);
  (void) FUNC_3(VAR_29->regs + VAR_9);
 }
}
