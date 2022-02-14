
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_9, int VAR_10, int VAR_11)
{
 unsigned long VAR_12 = VAR_8 + VAR_1;
 struct ethoc *VAR_13 = VAR_9->priv;

 FUNC_2(VAR_13, VAR_2, FUNC_0(VAR_10, VAR_11));
 FUNC_2(VAR_13, VAR_3, VAR_4);

 while (FUNC_4(VAR_8, VAR_12)) {
  u32 VAR_14 = FUNC_1(VAR_13, VAR_6);
  if (!(VAR_14 & VAR_7)) {
   u32 VAR_15 = FUNC_1(VAR_13, VAR_5);

   FUNC_2(VAR_13, VAR_3, 0);
   return VAR_15;
  }

  FUNC_3();
 }

 return -VAR_0;
}
