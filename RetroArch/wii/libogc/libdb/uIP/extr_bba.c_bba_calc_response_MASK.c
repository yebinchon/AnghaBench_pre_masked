
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct uip_netif {scalar_t__ state; } ;
struct bba_priv {int revid; int devid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct uip_netif *VAR_0,u32 VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 struct bba_priv *VAR_5 = (struct bba_priv*)VAR_0->state;

 FUNC_0("bba_calc_response()\n");

 VAR_2 = VAR_5->revid;
 VAR_3 = FUNC_1(VAR_5->devid,8,8);
 VAR_4 = VAR_5->devid&0xff;

 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 VAR_6 = (VAR_1 & 0xff000000) >> 24;
 VAR_7 = (VAR_1 & 0x00ff0000) >> 16;
 VAR_8 = (VAR_1 & 0x0000ff00) >> 8;
 VAR_9 = (VAR_1 & 0x000000ff);

 u8 VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_10 = ((VAR_6 + VAR_7 * 0xc1 + 0x18 + VAR_2) ^ (VAR_9 * VAR_8 + 0x90)
     ) & 0xff;
 VAR_11 = ((VAR_7 + VAR_8 + 0x90) ^ (VAR_10 + VAR_6 - 0xc1)
     ) & 0xff;
 VAR_12 = ((VAR_8 + 0xc8) ^ (VAR_10 + ((VAR_3 + VAR_2 * 0x23) ^ 0x19))
     ) & 0xff;
 VAR_13 = ((VAR_6 + 0xc1) ^ (VAR_9 + ((VAR_4 + 0xc8) ^ 0x90))
     ) & 0xff;

 return ((VAR_10 << 24) | (VAR_11 << 16) | (VAR_12 << 8) | VAR_13);
}
