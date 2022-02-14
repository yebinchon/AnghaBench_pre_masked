
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; scalar_t__ mc_count; } ;
struct b44 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct b44*,unsigned char*,int) ;
 int FUNC_1 (struct b44*,struct net_device*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int) ;
 struct b44* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_9)
{
 struct b44 *VAR_10 = FUNC_5(VAR_9);
 u32 VAR_11;

 VAR_11 = FUNC_3(VAR_10, VAR_2);
 VAR_11 &= ~(VAR_8 | VAR_6);
 if ((VAR_9->flags & VAR_5) || (VAR_11 & VAR_7)) {
  VAR_11 |= VAR_8;
  FUNC_4(VAR_10, VAR_2, VAR_11);
 } else {
  unsigned char VAR_12[6] = {0, 0, 0, 0, 0, 0};
  int VAR_13 = 1;

  FUNC_2(VAR_10);

  if ((VAR_9->flags & VAR_4) ||
      (VAR_9->mc_count > VAR_1))
   VAR_11 |= VAR_6;
  else
   VAR_13 = FUNC_1(VAR_10, VAR_9);

  for (; VAR_13 < 64; VAR_13++)
   FUNC_0(VAR_10, VAR_12, VAR_13);

  FUNC_4(VAR_10, VAR_2, VAR_11);
         VAR_11 = FUNC_3(VAR_10, VAR_0);
         FUNC_4(VAR_10, VAR_0, VAR_11 | VAR_3);
 }
}
