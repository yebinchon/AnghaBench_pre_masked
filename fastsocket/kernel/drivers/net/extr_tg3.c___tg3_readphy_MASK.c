
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int mi_mode; int phy_ape_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_13, unsigned int VAR_14, int VAR_15,
    u32 *VAR_16)
{
 u32 VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 if ((VAR_13->mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_2,
       (VAR_13->mi_mode & ~VAR_3));
  FUNC_4(80);
 }

 FUNC_0(VAR_13, VAR_13->phy_ape_lock);

 *VAR_16 = 0x0;

 VAR_17 = ((VAR_14 << VAR_8) &
        VAR_7);
 VAR_17 |= ((VAR_15 << VAR_10) &
        VAR_9);
 VAR_17 |= (VAR_5 | VAR_11);

 FUNC_3(VAR_1, VAR_17);

 VAR_18 = VAR_12;
 while (VAR_18 != 0) {
  FUNC_4(10);
  VAR_17 = FUNC_2(VAR_1);

  if ((VAR_17 & VAR_4) == 0) {
   FUNC_4(5);
   VAR_17 = FUNC_2(VAR_1);
   break;
  }
  VAR_18 -= 1;
 }

 VAR_19 = -VAR_0;
 if (VAR_18 != 0) {
  *VAR_16 = VAR_17 & VAR_6;
  VAR_19 = 0;
 }

 if ((VAR_13->mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_2, VAR_13->mi_mode);
  FUNC_4(80);
 }

 FUNC_1(VAR_13, VAR_13->phy_ape_lock);

 return VAR_19;
}
