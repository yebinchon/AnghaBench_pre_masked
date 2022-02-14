
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thingie {int member_0; int member_1; int bits; } ;
struct net_device {int dummy; } ;
struct dscc4_dev_priv {int encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct thingie*,int ) ;
 int FUNC_1 (int ,int ,struct dscc4_dev_priv*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct dscc4_dev_priv *VAR_8,
      struct net_device *VAR_9)
{
 struct thingie VAR_10[] = {
  { VAR_4, 0x00000000 },
  { VAR_5, 0x00200000 },
  { VAR_1, 0x00400000 },
  { VAR_2, 0x00500000 },
  { VAR_3, 0x00600000 },
  { -1, 0}
 };
 int VAR_11, VAR_12 = 0;

 VAR_11 = FUNC_0(VAR_10, VAR_8->encoding);
 if (VAR_11 >= 0)
  FUNC_1(VAR_7, VAR_10[VAR_11].bits, VAR_8, VAR_9, VAR_0);
 else
  VAR_12 = -VAR_6;
 return VAR_12;
}
