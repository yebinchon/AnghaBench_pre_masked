
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {struct ethoc* priv; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ethoc*,int ) ;
 int FUNC_2 (struct ethoc*,int ,int ) ;
 unsigned long VAR_8 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_9, int VAR_10, int VAR_11, u16 VAR_12)
{
 unsigned long VAR_13 = VAR_8 + VAR_1;
 struct ethoc *VAR_14 = VAR_9->priv;

 FUNC_2(VAR_14, VAR_2, FUNC_0(VAR_10, VAR_11));
 FUNC_2(VAR_14, VAR_7, VAR_12);
 FUNC_2(VAR_14, VAR_3, VAR_4);

 while (FUNC_4(VAR_8, VAR_13)) {
  u32 VAR_15 = FUNC_1(VAR_14, VAR_5);
  if (!(VAR_15 & VAR_6))
   return 0;

  FUNC_3();
 }

 return -VAR_0;
}
