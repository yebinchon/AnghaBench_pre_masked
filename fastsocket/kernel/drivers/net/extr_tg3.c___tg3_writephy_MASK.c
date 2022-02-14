
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; int mi_mode; int phy_ape_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_16, unsigned int VAR_17, int VAR_18,
     u32 VAR_19)
{
 u32 VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 if ((VAR_16->phy_flags & VAR_15) &&
     (VAR_18 == VAR_4 || VAR_18 == VAR_5))
  return 0;

 if ((VAR_16->mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_2,
       (VAR_16->mi_mode & ~VAR_3));
  FUNC_4(80);
 }

 FUNC_0(VAR_16, VAR_16->phy_ape_lock);

 VAR_20 = ((VAR_17 << VAR_10) &
        VAR_9);
 VAR_20 |= ((VAR_18 << VAR_12) &
        VAR_11);
 VAR_20 |= (VAR_19 & VAR_8);
 VAR_20 |= (VAR_7 | VAR_13);

 FUNC_3(VAR_1, VAR_20);

 VAR_21 = VAR_14;
 while (VAR_21 != 0) {
  FUNC_4(10);
  VAR_20 = FUNC_2(VAR_1);
  if ((VAR_20 & VAR_6) == 0) {
   FUNC_4(5);
   VAR_20 = FUNC_2(VAR_1);
   break;
  }
  VAR_21 -= 1;
 }

 VAR_22 = -VAR_0;
 if (VAR_21 != 0)
  VAR_22 = 0;

 if ((VAR_16->mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_2, VAR_16->mi_mode);
  FUNC_4(80);
 }

 FUNC_1(VAR_16, VAR_16->phy_ape_lock);

 return VAR_22;
}
