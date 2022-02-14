
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thingie {int member_1; int bits; int member_0; } ;
struct net_device {int dummy; } ;
struct dscc4_dev_priv {int parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct thingie*,int ) ;
 int FUNC_1 (int ,int ,struct dscc4_dev_priv*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct dscc4_dev_priv *VAR_7,
        struct net_device *VAR_8)
{
 struct thingie VAR_9[] = {
  { VAR_3, 0x00000010 },
  { VAR_4, 0x00000000 },
  { VAR_5, 0x00000011 },
  { VAR_6, 0x00000001 }
 };
 int VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_9, VAR_7->parity);
 if (VAR_10 >= 0)
  FUNC_1(VAR_1, VAR_9[VAR_10].bits, VAR_7, VAR_8, VAR_0);
 else
  VAR_11 = -VAR_2;
 return VAR_11;
}
