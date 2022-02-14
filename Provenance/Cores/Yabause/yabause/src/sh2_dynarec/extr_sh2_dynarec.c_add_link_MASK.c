
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int,void*) ;

void FUNC_2(u32 VAR_1,void *VAR_2)
{
  u32 VAR_3=(VAR_1&0xDFFFFFFF)>>12;
  if(VAR_3>1024) VAR_3=1024+(VAR_3&1023);
  FUNC_0("add_link: %x -> %x (%d)\n",(int)VAR_2,VAR_1,VAR_3);
  FUNC_1(VAR_0+VAR_3,VAR_1,VAR_2);


}
