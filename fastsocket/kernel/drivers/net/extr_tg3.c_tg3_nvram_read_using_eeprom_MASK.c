
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_11,
     u32 VAR_12, u32 *VAR_13)
{
 u32 VAR_14;
 int VAR_15;

 if (VAR_12 > VAR_1 || (VAR_12 % 4) != 0)
  return -VAR_8;

 VAR_14 = FUNC_2(VAR_9) & ~(VAR_1 |
     VAR_4 |
     VAR_6);
 FUNC_3(VAR_9,
      VAR_14 |
      (0 << VAR_5) |
      ((VAR_12 << VAR_2) &
       VAR_1) |
      VAR_6 | VAR_7);

 for (VAR_15 = 0; VAR_15 < 1000; VAR_15++) {
  VAR_14 = FUNC_2(VAR_9);

  if (VAR_14 & VAR_3)
   break;
  FUNC_0(1);
 }
 if (!(VAR_14 & VAR_3))
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_10);





 *VAR_13 = FUNC_1(VAR_14);

 return 0;
}
