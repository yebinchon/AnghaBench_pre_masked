
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_1(0x28, VAR_1);

 VAR_3=0;
 while((FUNC_0(VAR_0)&0x01)==0)
  if(VAR_3++==256)
   break;

 while((FUNC_0(VAR_0)&0x01)!=0)
  if(VAR_3++==256)
   break;

 FUNC_1(VAR_2, VAR_1);

 VAR_3=0;
 while((FUNC_0(VAR_0)&0x01)==0)
  if(VAR_3++==256)
   break;

 while((FUNC_0(VAR_0)&0x01)!=0)
  if(VAR_3++==256)
   break;

 for(VAR_4=0;VAR_4<12;VAR_4++)
 {
  char VAR_5=FUNC_0(VAR_0);
  if((VAR_5&2)!=0)
   return -1;
  if((VAR_5&1)==0)
   break;
 }
 FUNC_1(0x29, VAR_1);
 return FUNC_0(VAR_0);
}
