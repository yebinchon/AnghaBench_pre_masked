
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
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
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int) ;
 int FUNC_4 (struct tg3*,int ,int) ;
 scalar_t__ FUNC_5 (struct tg3*,int ) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_22, int VAR_23)
{
 u32 VAR_24;
 u32 VAR_25;

 if (!FUNC_5(VAR_22, VAR_7))
  return;

 switch (VAR_23) {
 case 129:
  FUNC_4(VAR_22, VAR_16,
    VAR_6);
  FUNC_4(VAR_22, VAR_15,
    VAR_5);
  VAR_25 = FUNC_2(VAR_22, VAR_14);
  FUNC_4(VAR_22, VAR_14, ++VAR_25);
  FUNC_4(VAR_22, VAR_9,
   FUNC_0(VAR_19, VAR_20));
  FUNC_4(VAR_22, VAR_8,
    VAR_4);
  FUNC_4(VAR_22, VAR_10,
        VAR_11);

  VAR_24 = VAR_2;
  break;
 case 128:





  FUNC_4(VAR_22, VAR_16, 0x0);

  if (FUNC_1(&VAR_22->pdev->dev) &&
      FUNC_5(VAR_22, VAR_21)) {
   FUNC_4(VAR_22, VAR_17,
         VAR_18);
   VAR_25 = VAR_13;
  } else
   VAR_25 = VAR_12;

  FUNC_4(VAR_22, VAR_10, VAR_25);

  VAR_24 = VAR_3;
  break;
 default:
  return;
 }

 VAR_24 |= VAR_0 | VAR_1;

 FUNC_3(VAR_22, VAR_24);
}
