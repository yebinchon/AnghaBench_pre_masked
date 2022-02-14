
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; int addr_len; int name; } ;
typedef int rtl8150_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,scalar_t__,int,int*) ;
 int FUNC_2 (int*,int ,int) ;
 int * FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,scalar_t__,int,int*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = VAR_5;
 rtl8150_t *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 if (FUNC_4(VAR_4))
  return -VAR_1;

 FUNC_2(VAR_4->dev_addr, VAR_6->sa_data, VAR_4->addr_len);
 FUNC_0("%s: Setting MAC address to ", VAR_4->name);
 for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
  FUNC_0("%02X:", VAR_4->dev_addr[VAR_8]);
 FUNC_0("%02X\n", VAR_4->dev_addr[VAR_8]);

 FUNC_5(VAR_7, VAR_2, VAR_4->addr_len, VAR_4->dev_addr);
 return 0;
}
