
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tg3*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_8, u32 *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_11 = 0;
 if (!FUNC_0(VAR_8, VAR_1, &VAR_10))
  VAR_11 = VAR_10 << 16;
 if (!FUNC_0(VAR_8, VAR_2, &VAR_10))
  VAR_11 |= (VAR_10 & 0xffff);
 *VAR_9++ = VAR_11;

 VAR_11 = 0;
 if (!FUNC_0(VAR_8, VAR_0, &VAR_10))
  VAR_11 = VAR_10 << 16;
 if (!FUNC_0(VAR_8, VAR_4, &VAR_10))
  VAR_11 |= (VAR_10 & 0xffff);
 *VAR_9++ = VAR_11;

 VAR_11 = 0;
 if (!(VAR_8->phy_flags & VAR_7)) {
  if (!FUNC_0(VAR_8, VAR_3, &VAR_10))
   VAR_11 = VAR_10 << 16;
  if (!FUNC_0(VAR_8, VAR_6, &VAR_10))
   VAR_11 |= (VAR_10 & 0xffff);
 }
 *VAR_9++ = VAR_11;

 if (!FUNC_0(VAR_8, VAR_5, &VAR_10))
  VAR_11 = VAR_10 << 16;
 else
  VAR_11 = 0;
 *VAR_9++ = VAR_11;
}
