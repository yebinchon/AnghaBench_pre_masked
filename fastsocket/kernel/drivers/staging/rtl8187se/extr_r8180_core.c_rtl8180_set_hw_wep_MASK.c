
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int* key0; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,scalar_t__,int) ;

void FUNC_6(struct net_device *VAR_9)
{
 struct r8180_priv *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11;
 u8 VAR_12;
 u32 VAR_13;

 VAR_11=FUNC_2(VAR_9, VAR_1);
 FUNC_4(VAR_9, VAR_1, VAR_11 &~ (1<<VAR_2));

 VAR_13 = FUNC_3(VAR_9, VAR_0+4+4+4);
 VAR_13 &= ~ 0xff;
 VAR_13 |= VAR_10->key0[3]& 0xff;
 FUNC_5(VAR_9,VAR_0,(VAR_10->key0[0]));
 FUNC_5(VAR_9,VAR_0+4,(VAR_10->key0[1]));
 FUNC_5(VAR_9,VAR_0+4+4,(VAR_10->key0[2]));
 FUNC_5(VAR_9,VAR_0+4+4+4,(VAR_13));

 VAR_12 = FUNC_2(VAR_9,VAR_3);
 VAR_12 |= (1<<VAR_8);
 VAR_12 |= (1<<VAR_7);
 VAR_12 &= ~ VAR_5;
 VAR_12 |= (VAR_4<<VAR_6);

 FUNC_4(VAR_9, VAR_3, VAR_12);

 FUNC_0("key %x %x %x %x",FUNC_3(VAR_9,VAR_0+4+4+4),
       FUNC_3(VAR_9,VAR_0+4+4),FUNC_3(VAR_9,VAR_0+4),
       FUNC_3(VAR_9,VAR_0));
}
