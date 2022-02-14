
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct bdx_priv {int dummy; } ;
typedef int data ;




 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bdx_priv*,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct bdx_priv*,int,int) ;
 int FUNC_5 (struct bdx_priv*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int ,int*,int) ;
 int VAR_5 ;
 struct bdx_priv* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 struct bdx_priv *VAR_9 = FUNC_9(VAR_6);
 u32 VAR_10[3];
 int VAR_11;

 VAR_1;

 FUNC_0("jiffies=%ld cmd=%d\n", VAR_5, VAR_8);
 if (VAR_8 != VAR_4) {
  VAR_11 = FUNC_7(VAR_10, VAR_7->ifr_data, sizeof(VAR_10));
  if (VAR_11) {
   FUNC_1("cant copy from user\n");
   FUNC_3(VAR_11);
  }
  FUNC_0("%d 0x%x 0x%x\n", VAR_10[0], VAR_10[1], VAR_10[2]);
 }

 if (!FUNC_6(VAR_0))
  return -VAR_3;

 switch (VAR_10[0]) {

 case 129:
  VAR_11 = FUNC_5(VAR_9, VAR_10[1]);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10[2] = FUNC_2(VAR_9, VAR_10[1]);
  FUNC_0("read_reg(0x%x)=0x%x (dec %d)\n", VAR_10[1], VAR_10[2],
      VAR_10[2]);
  VAR_11 = FUNC_8(VAR_7->ifr_data, VAR_10, sizeof(VAR_10));
  if (VAR_11)
   FUNC_3(VAR_11);
  break;

 case 128:
  VAR_11 = FUNC_5(VAR_9, VAR_10[1]);
  if (VAR_11 < 0)
   return VAR_11;
  FUNC_4(VAR_9, VAR_10[1], VAR_10[2]);
  FUNC_0("write_reg(0x%x, 0x%x)\n", VAR_10[1], VAR_10[2]);
  break;

 default:
  FUNC_3(-VAR_2);
 }
 return 0;
}
