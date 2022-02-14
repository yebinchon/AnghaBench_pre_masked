
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int int32 ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{
 uint32 VAR_4;
 int32 VAR_5;

 VAR_4=VAR_3*2;
 VAR_4<<=VAR_2;

 VAR_4<<=1;


 VAR_4=(VAR_4+15)>>4;

 if((VAR_5=FUNC_1(VAR_4,&VAR_1))<0)
  return(0);

 VAR_0=VAR_5<<=4;

 if(VAR_2)
 {
  if((VAR_0&0x20000) != ((VAR_0+VAR_3*2*2-1)&0x20000))
   VAR_0+=VAR_3*2*2;
 }
 else
 {
  if((VAR_0&0x10000) != ((VAR_0+VAR_3*2-1)&0x10000))
   VAR_0+=VAR_3*2;
 }

 FUNC_0(VAR_0, VAR_2?0:128, (VAR_3*2)<<VAR_2);

 return(1);
}
