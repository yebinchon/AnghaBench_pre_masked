
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ slave; scalar_t__ sub; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 int VAR_7=0;
 int VAR_8;
 int VAR_9;

 for(VAR_9=0;VAR_9<VAR_1;VAR_9++)
 {
  if((VAR_2[VAR_9].slave==VAR_4) &&
     (VAR_2[VAR_9].sub == VAR_5))
  {
   if(VAR_2[VAR_9].data==VAR_6)
    VAR_7=1;
   VAR_2[VAR_9].data=VAR_6;
   VAR_9=VAR_1+1;
  }
 }

 if(VAR_9==VAR_1 && VAR_1<64)
 {
  VAR_2[VAR_1].slave=VAR_4;
  VAR_2[VAR_1].sub=VAR_5;
  VAR_2[VAR_1].data=VAR_6;
  VAR_1++;
 }

 if(VAR_7)
  return 0;

 FUNC_1(0x29, VAR_5);
 FUNC_1(0x2A, VAR_6);
 FUNC_1(0x28, VAR_4);

 FUNC_2(0x28, VAR_3);

 VAR_8=0;
 while((FUNC_0(VAR_0)&1)==0)
  if(VAR_8>255)
   break;
 while((FUNC_0(VAR_0)&1)!=0)
  if(VAR_8>255)
   break;

 VAR_8=FUNC_0(VAR_0);

 if(VAR_8&2)
  return -1;
 return VAR_8;
}
