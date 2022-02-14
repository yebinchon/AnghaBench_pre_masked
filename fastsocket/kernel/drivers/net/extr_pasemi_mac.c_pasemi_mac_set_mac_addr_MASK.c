
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct pasemi_mac {int dummy; } ;
struct net_device {int* dev_addr; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,int ) ;
 struct pasemi_mac* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pasemi_mac*) ;
 int FUNC_4 (struct pasemi_mac*) ;
 unsigned int FUNC_5 (struct pasemi_mac*,int ) ;
 int FUNC_6 (struct pasemi_mac*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, void *VAR_4)
{
 struct pasemi_mac *VAR_5 = FUNC_2(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;
 unsigned int VAR_7, VAR_8;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 FUNC_1(VAR_3->dev_addr, VAR_6->sa_data, VAR_3->addr_len);

 VAR_7 = VAR_3->dev_addr[2] << 24 |
        VAR_3->dev_addr[3] << 16 |
        VAR_3->dev_addr[4] << 8 |
        VAR_3->dev_addr[5];
 VAR_8 = FUNC_5(VAR_5, VAR_2);
 VAR_8 &= ~0xffff;
 VAR_8 |= VAR_3->dev_addr[0] << 8 | VAR_3->dev_addr[1];

 FUNC_3(VAR_5);
 FUNC_6(VAR_5, VAR_1, VAR_7);
 FUNC_6(VAR_5, VAR_2, VAR_8);
 FUNC_4(VAR_5);

 return 0;
}
