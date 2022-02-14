
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hthi; int htlo; } ;
struct fs_enet_private {TYPE_1__ fec; } ;


 int VAR_0 ;
 struct fs_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, const u8 *VAR_2)
{
 struct fs_enet_private *VAR_3 = FUNC_0(VAR_1);
 int VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 u8 VAR_10, VAR_11;

 VAR_8 = 0xffffffff;
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  VAR_10 = VAR_2[VAR_6];
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   VAR_11 = VAR_8 >> 31;
   VAR_8 <<= 1;
   if (VAR_11 ^ (VAR_10 & 0x1))
    VAR_8 ^= VAR_0;
   VAR_10 >>= 1;
  }
 }

 VAR_4 = (VAR_8 & 0x3f) >> 1;
 VAR_5 = ((VAR_4 & 0x01) << 4) |
       ((VAR_4 & 0x02) << 2) |
       ((VAR_4 & 0x04)) |
       ((VAR_4 & 0x08) >> 2) |
       ((VAR_4 & 0x10) >> 4);
 VAR_9 = 1 << VAR_5;
 if (VAR_8 & 1)
  VAR_3->fec.hthi |= VAR_9;
 else
  VAR_3->fec.htlo |= VAR_9;
}
