
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b44*,int ) ;
 int FUNC_1 (struct b44*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b44 *VAR_7, u32 VAR_8)
{
 u32 VAR_9;

 VAR_7->flags &= ~(VAR_1 | VAR_0);
 VAR_7->flags |= VAR_8;

 VAR_9 = FUNC_0(VAR_7, VAR_3);
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_6;
 else
  VAR_9 &= ~VAR_6;
 FUNC_1(VAR_7, VAR_3, VAR_9);

 VAR_9 = FUNC_0(VAR_7, VAR_2);
 if (VAR_8 & VAR_1)
  VAR_9 |= (VAR_4 |
   (0xc0 & VAR_5));
 else
  VAR_9 &= ~VAR_4;
 FUNC_1(VAR_7, VAR_2, VAR_9);
}
