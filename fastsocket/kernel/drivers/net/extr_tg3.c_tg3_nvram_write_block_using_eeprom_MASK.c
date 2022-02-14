
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tg3 {int dummy; } ;
typedef int __be32 ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct tg3 *VAR_10,
        u32 VAR_11, u32 VAR_12, u8 *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0;
 u32 VAR_17;

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14 += 4) {
  u32 VAR_18;
  __be32 VAR_19;

  VAR_18 = VAR_11 + VAR_14;

  FUNC_1(&VAR_19, VAR_13 + VAR_14, 4);







  FUNC_5(VAR_9, FUNC_3(FUNC_0(VAR_19)));

  VAR_17 = FUNC_4(VAR_8);
  FUNC_5(VAR_8, VAR_17 | VAR_2);

  VAR_17 &= ~(VAR_1 | VAR_3 |
   VAR_5);
  FUNC_5(VAR_8, VAR_17 |
   (0 << VAR_4) |
   (VAR_18 & VAR_1) |
   VAR_6 |
   VAR_7);

  for (VAR_15 = 0; VAR_15 < 1000; VAR_15++) {
   VAR_17 = FUNC_4(VAR_8);

   if (VAR_17 & VAR_2)
    break;
   FUNC_2(1);
  }
  if (!(VAR_17 & VAR_2)) {
   VAR_16 = -VAR_0;
   break;
  }
 }

 return VAR_16;
}
