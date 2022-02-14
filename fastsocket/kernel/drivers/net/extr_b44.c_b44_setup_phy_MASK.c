
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {scalar_t__ phy_addr; int flags; } ;


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
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct b44*,int ,int*) ;
 int FUNC_1 (struct b44*,int ,int ) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct b44 *VAR_26)
{
 u32 VAR_27;
 int VAR_28;

 FUNC_2(VAR_26);

 if (VAR_26->phy_addr == VAR_17)
  return 0;
 if ((VAR_28 = FUNC_0(VAR_26, VAR_15, &VAR_27)) != 0)
  goto out;
 if ((VAR_28 = FUNC_3(VAR_26, VAR_15,
    VAR_27 & VAR_23)) != 0)
  goto out;
 if ((VAR_28 = FUNC_0(VAR_26, VAR_16, &VAR_27)) != 0)
  goto out;
 if ((VAR_28 = FUNC_3(VAR_26, VAR_16,
    VAR_27 | VAR_25)) != 0)
  goto out;

 if (!(VAR_26->flags & VAR_12)) {
  u32 VAR_29 = VAR_4;

  if (VAR_26->flags & VAR_11)
   VAR_29 |= VAR_3;
  if (VAR_26->flags & VAR_10)
   VAR_29 |= VAR_2;
  if (VAR_26->flags & VAR_9)
   VAR_29 |= VAR_1;
  if (VAR_26->flags & VAR_8)
   VAR_29 |= VAR_0;

  if (VAR_26->flags & VAR_14)
   VAR_29 |= VAR_6 | VAR_5;

  if ((VAR_28 = FUNC_3(VAR_26, VAR_22, VAR_29)) != 0)
   goto out;
  if ((VAR_28 = FUNC_3(VAR_26, VAR_24, (VAR_18 |
             VAR_19))) != 0)
   goto out;
 } else {
  u32 VAR_30;

  if ((VAR_28 = FUNC_0(VAR_26, VAR_24, &VAR_30)) != 0)
   goto out;
  VAR_30 &= ~(VAR_20 | VAR_18 | VAR_21);
  if (VAR_26->flags & VAR_7)
   VAR_30 |= VAR_21;
  if (VAR_26->flags & VAR_13)
   VAR_30 |= VAR_20;
  if ((VAR_28 = FUNC_3(VAR_26, VAR_24, VAR_30)) != 0)
   goto out;





  FUNC_1(VAR_26, 0, 0);
 }

out:
 return VAR_28;
}
