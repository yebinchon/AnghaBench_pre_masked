
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,int,int) ;
 int FUNC_1 (struct nouveau_object*,int) ;
 int FUNC_2 (struct nouveau_object*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 1;
 u32 VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_0, 0x00);
 VAR_3 = VAR_7 & 0xff;
 VAR_4 = (VAR_7 >> 15) & 7;

 VAR_6 = FUNC_1(VAR_0, 0x0c);
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_2;
 FUNC_2(VAR_0, 0x0c, VAR_6);


 if (!(VAR_6 & 0x02000000))
  VAR_5 = 0;

 if ((VAR_3 == 0x1f || VAR_3 == 0x48) && !(VAR_6 & 0x04000000))
  VAR_5 = 0;

 switch (VAR_4) {

 case 0:
 case 3:
  break;

 case 1:
  if (!(VAR_6 & 0x18000000))
   VAR_5 = 0;
  break;

 case 2:
  if (!(VAR_6 & 0x20000000))
   VAR_5 = 0;
  break;

 case 4:
 case 5:
  if (!(VAR_6 & 0x40000000))
   VAR_5 = 0;
  break;
 }

 FUNC_0(VAR_0, 0x01000000, VAR_5 << 24);
}
