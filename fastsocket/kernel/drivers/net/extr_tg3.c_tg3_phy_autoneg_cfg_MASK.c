
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int advertised; int eee_enabled; } ;
struct tg3 {int phy_flags; TYPE_1__ eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tg3*) ;
 scalar_t__ FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*,int ,int ,int) ;
 int FUNC_6 (struct tg3*,int) ;
 int FUNC_7 (struct tg3*,int ,int*) ;
 int FUNC_8 (struct tg3*,int ,int) ;
 int FUNC_9 (struct tg3*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct tg3 *VAR_24, u32 VAR_25, u32 VAR_26)
{
 int VAR_27 = 0;
 u32 VAR_28, VAR_29;

 VAR_29 = VAR_3;
 VAR_29 |= FUNC_0(VAR_25) & VAR_2;
 VAR_29 |= FUNC_2(VAR_26);

 VAR_27 = FUNC_9(VAR_24, VAR_12, VAR_29);
 if (VAR_27)
  goto done;

 if (!(VAR_24->phy_flags & VAR_22)) {
  VAR_29 = FUNC_1(VAR_25);

  if (FUNC_4(VAR_24) == VAR_4 ||
      FUNC_4(VAR_24) == VAR_5)
   VAR_29 |= VAR_6 | VAR_7;

  VAR_27 = FUNC_9(VAR_24, VAR_13, VAR_29);
  if (VAR_27)
   goto done;
 }

 if (!(VAR_24->phy_flags & VAR_23))
  goto done;

 FUNC_11(VAR_21,
      FUNC_10(VAR_21) & ~VAR_20);

 VAR_27 = FUNC_6(VAR_24, 1);
 if (!VAR_27) {
  u32 VAR_30;

  VAR_28 = 0;

  if (VAR_25 & VAR_1)
   VAR_28 |= VAR_10;

  if (VAR_25 & VAR_0)
   VAR_28 |= VAR_9;

  if (!VAR_24->eee.eee_enabled) {
   VAR_28 = 0;
   VAR_24->eee.advertised = 0;
  } else {
   VAR_24->eee.advertised = VAR_25 &
          (VAR_1 |
           VAR_0);
  }

  VAR_27 = FUNC_5(VAR_24, VAR_11, VAR_8, VAR_28);
  if (VAR_27)
   VAR_28 = 0;

  switch (FUNC_3(VAR_24)) {
  case 133:
  case 129:
  case 128:
  case 132:

   if (VAR_28)
    VAR_28 = VAR_17 |
          VAR_19 |
          VAR_18;
   FUNC_8(VAR_24, VAR_16, VAR_28);

  case 131:
  case 130:
   if (!FUNC_7(VAR_24, VAR_14, &VAR_28))
    FUNC_8(VAR_24, VAR_14, VAR_28 |
       VAR_15);
  }

  VAR_30 = FUNC_6(VAR_24, 0);
  if (!VAR_27)
   VAR_27 = VAR_30;
 }

done:
 return VAR_27;
}
