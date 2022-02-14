
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int* dev_addr; } ;
struct bdx_priv {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bdx_priv*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bdx_priv*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4, struct bdx_priv *VAR_5)
{
 u32 VAR_6;

 VAR_0;
 FUNC_0("mac0=%x mac1=%x mac2=%x\n",
     FUNC_1(VAR_5, VAR_1),
     FUNC_1(VAR_5, VAR_2), FUNC_1(VAR_5, VAR_3));

 VAR_6 = (VAR_4->dev_addr[0] << 8) | (VAR_4->dev_addr[1]);
 FUNC_3(VAR_5, VAR_3, VAR_6);
 VAR_6 = (VAR_4->dev_addr[2] << 8) | (VAR_4->dev_addr[3]);
 FUNC_3(VAR_5, VAR_2, VAR_6);
 VAR_6 = (VAR_4->dev_addr[4] << 8) | (VAR_4->dev_addr[5]);
 FUNC_3(VAR_5, VAR_1, VAR_6);

 FUNC_0("mac0=%x mac1=%x mac2=%x\n",
     FUNC_1(VAR_5, VAR_1),
     FUNC_1(VAR_5, VAR_2), FUNC_1(VAR_5, VAR_3));
 FUNC_2();
}
