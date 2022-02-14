
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (struct tg3*,int) ;
 scalar_t__ FUNC_2 (struct tg3*,scalar_t__) ;
 int FUNC_3 (struct tg3*,int ) ;
 scalar_t__ FUNC_4 (struct tg3*,int) ;
 int FUNC_5 (struct tg3*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct tg3*,int ) ;

__attribute__((used)) static int FUNC_7(struct tg3 *VAR_17, u32 *VAR_18, u32 VAR_19,
       u32 VAR_20)
{
 int VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 if (!FUNC_6(VAR_17, VAR_5))
  return 0;

 VAR_26 = FUNC_2(VAR_17, VAR_15);
 if (VAR_26 != VAR_6)
  return -VAR_8;

 VAR_26 = FUNC_2(VAR_17, VAR_11);
 if (!(VAR_26 & VAR_4))
  return -VAR_7;

 VAR_23 = FUNC_2(VAR_17, VAR_14) +
   VAR_16;
 VAR_24 = VAR_23 + 2 * sizeof(u32);
 VAR_25 = FUNC_2(VAR_17, VAR_13);

 while (VAR_20) {
  u32 VAR_27;


  VAR_27 = (VAR_20 > VAR_25) ? VAR_25 : VAR_20;
  VAR_20 -= VAR_27;

  VAR_26 = FUNC_2(VAR_17, VAR_11);
  if (!(VAR_26 & VAR_4))
   return -VAR_7;


  VAR_21 = FUNC_1(VAR_17, 1000);
  if (VAR_21)
   return VAR_21;

  VAR_26 = VAR_1 |
     VAR_3 |
     VAR_2;
  FUNC_5(VAR_17, VAR_10, VAR_26);

  FUNC_5(VAR_17, VAR_23, VAR_19);
  FUNC_5(VAR_17, VAR_23 + sizeof(u32), VAR_27);

  FUNC_3(VAR_17, VAR_12);
  FUNC_5(VAR_17, VAR_9, VAR_0);

  VAR_19 += VAR_27;

  if (FUNC_4(VAR_17, 30000))
   return -VAR_7;

  for (VAR_22 = 0; VAR_27; VAR_22 += 4, VAR_27 -= 4) {
   u32 VAR_28 = FUNC_2(VAR_17, VAR_24 + VAR_22);
   FUNC_0(VAR_18, &VAR_28, sizeof(u32));
   VAR_18++;
  }
 }

 return 0;
}
