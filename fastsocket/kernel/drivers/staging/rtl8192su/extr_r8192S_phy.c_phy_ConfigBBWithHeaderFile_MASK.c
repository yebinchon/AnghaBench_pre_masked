
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static RT_STATUS
FUNC_3(struct net_device* VAR_8,u8 VAR_9)
{
 int VAR_10;

 u32* VAR_11;
 u32* VAR_12;
 u16 VAR_13, VAR_14;
 VAR_14 = VAR_0;
 VAR_12 = VAR_5;
 VAR_13 = VAR_3;
 VAR_11 = VAR_6;


 if(VAR_9 == VAR_2)
 {
  for(VAR_10=0;VAR_10<VAR_13;VAR_10=VAR_10+2)
  {
   if (VAR_11[VAR_10] == 0xfe)
    FUNC_0(50);
   else if (VAR_11[VAR_10] == 0xfd)
    FUNC_0(5);
   else if (VAR_11[VAR_10] == 0xfc)
    FUNC_0(1);
   else if (VAR_11[VAR_10] == 0xfb)
    FUNC_2(50);
   else if (VAR_11[VAR_10] == 0xfa)
    FUNC_2(5);
   else if (VAR_11[VAR_10] == 0xf9)
    FUNC_2(1);
   FUNC_1(VAR_8, VAR_11[VAR_10], VAR_7, VAR_11[VAR_10+1]);


  }
 }
 else if(VAR_9 == VAR_1){
  for(VAR_10=0;VAR_10<VAR_14;VAR_10=VAR_10+2)
  {
   FUNC_1(VAR_8, VAR_12[VAR_10], VAR_7, VAR_12[VAR_10+1]);
  }
 }

 return VAR_4;
}
