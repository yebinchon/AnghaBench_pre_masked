
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int flags; struct dev_addr_list* mc_list; } ;
struct mv643xx_eth_private {int port_num; } ;
struct dev_addr_list {int* da_addr; struct dev_addr_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int*,char*,int) ;
 int FUNC_6 (int*,int ,int) ;
 struct mv643xx_eth_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct mv643xx_eth_private*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3)
{
 struct mv643xx_eth_private *VAR_4 = FUNC_7(VAR_3);
 u32 *VAR_5;
 u32 *VAR_6;
 struct dev_addr_list *VAR_7;
 int VAR_8;

 if (VAR_3->flags & (VAR_2 | VAR_1)) {
  int VAR_9;
  u32 VAR_10;

oom:
  VAR_9 = VAR_4->port_num;
  VAR_10 = 0x01010101;
  for (VAR_8 = 0; VAR_8 < 0x100; VAR_8 += 4) {
   FUNC_8(VAR_4, FUNC_1(VAR_9) + VAR_8, VAR_10);
   FUNC_8(VAR_4, FUNC_0(VAR_9) + VAR_8, VAR_10);
  }
  return;
 }

 VAR_5 = FUNC_4(0x200, VAR_0);
 if (VAR_5 == ((void*)0))
  goto oom;
 VAR_6 = VAR_5 + (0x100 >> 2);

 FUNC_6(VAR_5, 0, 0x100);
 FUNC_6(VAR_6, 0, 0x100);

 for (VAR_7 = VAR_3->mc_list; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  u8 *VAR_11 = VAR_7->da_addr;
  u32 *VAR_12;
  int VAR_13;

  if (FUNC_5(VAR_11, "\x01\x00\x5e\x00\x00", 5) == 0) {
   VAR_12 = VAR_5;
   VAR_13 = VAR_11[5];
  } else {
   VAR_12 = VAR_6;
   VAR_13 = FUNC_2(VAR_11);
  }

  VAR_12[VAR_13 >> 2] |= 1 << (8 * (VAR_13 & 3));
 }

 for (VAR_8 = 0; VAR_8 < 0x100; VAR_8 += 4) {
  FUNC_8(VAR_4, FUNC_1(VAR_4->port_num) + VAR_8, VAR_5[VAR_8 >> 2]);
  FUNC_8(VAR_4, FUNC_0(VAR_4->port_num) + VAR_8, VAR_6[VAR_8 >> 2]);
 }

 FUNC_3(VAR_5);
}
