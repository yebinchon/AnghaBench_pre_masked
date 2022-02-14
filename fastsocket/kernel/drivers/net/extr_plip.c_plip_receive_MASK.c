
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum plip_nibble_state { ____Placeholder_plip_nibble_state } plip_nibble_state ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 unsigned char FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int) ;

__attribute__((used)) static inline int
FUNC_3(unsigned short VAR_3, struct net_device *VAR_4,
      enum plip_nibble_state *VAR_5, unsigned char *VAR_6)
{
 unsigned char VAR_7, VAR_8;
 unsigned int VAR_9;

 switch (*VAR_5) {
 case 128:
  VAR_9 = VAR_3;
  while (1) {
   VAR_7 = FUNC_0(VAR_4);
   FUNC_1(VAR_1);
   if ((VAR_7 & 0x80) == 0) {
    VAR_8 = FUNC_0(VAR_4);
    if (VAR_7 == VAR_8)
     break;
   }
   if (--VAR_9 == 0)
    return VAR_2;
  }
  *VAR_6 = (VAR_7 >> 3) & 0x0f;
  FUNC_2 (VAR_4, 0x10);
  *VAR_5 = 130;

 case 130:
  VAR_9 = VAR_3;
  while (1) {
   VAR_7 = FUNC_0(VAR_4);
   FUNC_1(VAR_1);
   if (VAR_7 & 0x80) {
    VAR_8 = FUNC_0(VAR_4);
    if (VAR_7 == VAR_8)
     break;
   }
   if (--VAR_9 == 0)
    return VAR_2;
  }
  *VAR_6 |= (VAR_7 << 1) & 0xf0;
  FUNC_2 (VAR_4, 0x00);
  *VAR_5 = 128;
 case 129:
  break;
 }
 return VAR_0;
}
