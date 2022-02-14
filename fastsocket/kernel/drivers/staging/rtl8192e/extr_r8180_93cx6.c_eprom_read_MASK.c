
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ epromtype; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,short*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*,int ,int) ;

u32 FUNC_9(struct net_device *VAR_6, u32 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_6(VAR_6);
 short VAR_9[]={1,1,0};
 short VAR_10[8];
 int VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_13=0;

 FUNC_8(VAR_6, VAR_1,
         (VAR_4<<VAR_3));
 FUNC_5(VAR_6);
 FUNC_7(VAR_5);

 if (VAR_8->epromtype==VAR_0){
  VAR_10[7]=VAR_7 & 1;
  VAR_10[6]=VAR_7 & (1<<1);
  VAR_10[5]=VAR_7 & (1<<2);
  VAR_10[4]=VAR_7 & (1<<3);
  VAR_10[3]=VAR_7 & (1<<4);
  VAR_10[2]=VAR_7 & (1<<5);
  VAR_10[1]=VAR_7 & (1<<6);
  VAR_10[0]=VAR_7 & (1<<7);
  VAR_12=8;
 }else{
  VAR_10[5]=VAR_7 & 1;
  VAR_10[4]=VAR_7 & (1<<1);
  VAR_10[3]=VAR_7 & (1<<2);
  VAR_10[2]=VAR_7 & (1<<3);
  VAR_10[1]=VAR_7 & (1<<4);
  VAR_10[0]=VAR_7 & (1<<5);
  VAR_12=6;
 }
 FUNC_1(VAR_6, 1);
 FUNC_0(VAR_6);
 FUNC_3(VAR_6, VAR_9, 3);
 FUNC_3(VAR_6, VAR_10, VAR_12);



 FUNC_4(VAR_6, 0);

 for(VAR_11=0;VAR_11<16;VAR_11++){


  FUNC_0(VAR_6);
  VAR_13 |= (FUNC_2(VAR_6)<<(15-VAR_11));
 }

 FUNC_1(VAR_6, 0);
 FUNC_0(VAR_6);


 FUNC_8(VAR_6, VAR_1,
         (VAR_2<<VAR_3));
 return VAR_13;
}
