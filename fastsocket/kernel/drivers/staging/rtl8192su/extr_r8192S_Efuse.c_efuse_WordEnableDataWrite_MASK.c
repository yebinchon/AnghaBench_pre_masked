
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct net_device*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int,int ) ;

__attribute__((used)) static u8
FUNC_3( struct net_device* VAR_5, u16 VAR_6, u8 VAR_7, u8 *VAR_8)
{
 u16 VAR_9 = 0;
 u16 VAR_10 = VAR_6;
 u8 VAR_11 = 0x0F;

 u8 VAR_12[8];

 FUNC_2(VAR_12,0xff,VAR_4);






 if(!(VAR_7&VAR_0))
 {
  VAR_9 = VAR_10;
  FUNC_1(VAR_5,VAR_10++, VAR_8[0]);
  FUNC_1(VAR_5,VAR_10++, VAR_8[1]);

  FUNC_0(VAR_5,VAR_9, &VAR_12[0]);
  FUNC_0(VAR_5,VAR_9+1, &VAR_12[1]);
  if((VAR_8[0]!=VAR_12[0])||(VAR_8[1]!=VAR_12[1])){
   VAR_11 &= (~VAR_0);
  }
 }
 if(!(VAR_7&VAR_1))
 {
  VAR_9 = VAR_10;
  FUNC_1(VAR_5,VAR_10++, VAR_8[2]);
  FUNC_1(VAR_5,VAR_10++, VAR_8[3]);

  FUNC_0(VAR_5,VAR_9 , &VAR_12[2]);
  FUNC_0(VAR_5,VAR_9+1, &VAR_12[3]);
  if((VAR_8[2]!=VAR_12[2])||(VAR_8[3]!=VAR_12[3])){
   VAR_11 &=( ~VAR_1);
  }
 }
 if(!(VAR_7&VAR_2))
 {
  VAR_9 = VAR_10;
  FUNC_1(VAR_5,VAR_10++, VAR_8[4]);
  FUNC_1(VAR_5,VAR_10++, VAR_8[5]);

  FUNC_0(VAR_5,VAR_9, &VAR_12[4]);
  FUNC_0(VAR_5,VAR_9+1, &VAR_12[5]);
  if((VAR_8[4]!=VAR_12[4])||(VAR_8[5]!=VAR_12[5])){
   VAR_11 &=( ~VAR_2);
  }
 }
 if(!(VAR_7&VAR_3))
 {
  VAR_9 = VAR_10;
  FUNC_1(VAR_5,VAR_10++, VAR_8[6]);
  FUNC_1(VAR_5,VAR_10++, VAR_8[7]);

  FUNC_0(VAR_5,VAR_9, &VAR_12[6]);
  FUNC_0(VAR_5,VAR_9+1, &VAR_12[7]);
  if((VAR_8[6]!=VAR_12[6])||(VAR_8[7]!=VAR_12[7])){
   VAR_11 &=( ~VAR_3);
  }
 }
 return VAR_11;
}
