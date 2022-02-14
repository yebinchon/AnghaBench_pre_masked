
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int* VAR_3 ;
 int FUNC_1 (struct net_device*,int,int ) ;

__attribute__((used)) static RT_STATUS
FUNC_2(struct net_device* VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32* VAR_7;
 {
  FUNC_0(VAR_0, "Read Rtl819XMACPHY_Array\n");
  VAR_6 = VAR_1;
  VAR_7 = VAR_3;
 }
 for(VAR_5 = 0 ;VAR_5 < VAR_6;VAR_5=VAR_5+2){
  FUNC_1(VAR_4, VAR_7[VAR_5], (u8)VAR_7[VAR_5+1]);
 }

 return VAR_2;
}
