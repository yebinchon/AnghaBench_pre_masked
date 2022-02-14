
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int,unsigned char) ;
 int FUNC_1 (unsigned char*,int,unsigned char) ;
 int FUNC_2 (unsigned char*,int,unsigned char) ;
 int FUNC_3 (unsigned char*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 unsigned int VAR_7=0xFFFFFFFF;

 unsigned char VAR_8;
 short VAR_9=-1;
 unsigned char *VAR_10 = VAR_1, *VAR_11 = 0;


 VAR_10+=(*VAR_3++)*VAR_0 - VAR_2*VAR_0*8;

 while((VAR_4=*VAR_3++)) {
  if((short)VAR_4 == VAR_9) continue;


  if(((unsigned)VAR_4>>27) != VAR_7) {
   VAR_7 = (unsigned)VAR_4>>27;
   VAR_11 = VAR_10 + VAR_7*VAR_0*8;
  }


  VAR_5=(VAR_4&0x7ff)<<4;

  VAR_8=(unsigned char)((VAR_4>>9)&0x30);

  switch((VAR_4>>11)&3) {
   case 0: VAR_6=FUNC_3(VAR_11+((VAR_4>>16)&0x1ff),VAR_5,VAR_8); break;
   case 1: VAR_6=FUNC_1(VAR_11+((VAR_4>>16)&0x1ff),VAR_5,VAR_8); break;
   case 2: VAR_6=FUNC_2(VAR_11+((VAR_4>>16)&0x1ff),VAR_5,VAR_8); break;
   case 3: VAR_6=FUNC_0(VAR_11+((VAR_4>>16)&0x1ff),VAR_5,VAR_8); break;
  }

  if(VAR_6) VAR_9=(short)VAR_4;
 }
}
