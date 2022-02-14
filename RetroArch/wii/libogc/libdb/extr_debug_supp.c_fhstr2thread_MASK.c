
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int FUNC_0 (char const*,int*) ;

const char* FUNC_1(const char *VAR_0,s32 *VAR_1)
{
 s32 VAR_2,VAR_3,VAR_4;

 for(VAR_2=0;VAR_2<8;VAR_2++,VAR_0++)
  if(*VAR_0!='0') return ((void*)0);

 VAR_4 = 0;
 for(VAR_2=0;VAR_2<8;VAR_2++,VAR_0++) {
  if(!FUNC_0(VAR_0,&VAR_3)) return ((void*)0);

  VAR_4 = (VAR_4<<4)|VAR_3;
 }

 *VAR_1 = VAR_4;
 return VAR_0;
}
