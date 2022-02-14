
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,unsigned char) ;
 int FUNC_1 (unsigned char*,int,unsigned char) ;
 int FUNC_2 (unsigned char*,int,unsigned char) ;
 int FUNC_3 (unsigned char*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(unsigned int *VAR_4)
{
 int VAR_5=0,VAR_6=0;

 unsigned char VAR_7;
 int VAR_8,VAR_9,VAR_10,VAR_11;
 unsigned char *VAR_12;
 int VAR_13, VAR_14;

 VAR_14=VAR_4[0];
 VAR_6=VAR_14>>24;
 VAR_14=(VAR_14&0x1ff)-0x78;
 VAR_5=(VAR_6>>2)&3; VAR_6&=3;
 VAR_5++; VAR_6++;

 VAR_9=VAR_4[1];
 VAR_13=((VAR_9>>16)&0x1ff)-0x78;

 VAR_8=VAR_9&0x7ff;
 VAR_10=VAR_6;
 VAR_11=1;
 if (VAR_9&0x0800) { VAR_10=-VAR_10; VAR_8+=VAR_6*(VAR_5-1); }
 if (VAR_9&0x1000) { VAR_11=-VAR_11; VAR_8+=VAR_6-1; }



 VAR_7=(unsigned char)((VAR_9>>9)&0x30);


 while(VAR_14 <= VAR_3*8) { VAR_14+=8; VAR_8+=VAR_11; VAR_6--; }

 VAR_12 = VAR_2;
 VAR_12+=(VAR_14-VAR_3*8)*VAR_1;

 for (; VAR_6 > 0; VAR_6--, VAR_14+=8, VAR_8+=VAR_11)
 {
  int VAR_15 = VAR_5, VAR_16=VAR_13, VAR_17=VAR_8;

  if(VAR_14 >= VAR_0*8+8) return;

  for (; VAR_15; VAR_15--,VAR_16+=8,VAR_17+=VAR_10)
  {
   if(VAR_16<=0) continue;
   if(VAR_16>=328) break;

   VAR_17&=0x7fff;
   switch((VAR_9>>11)&3) {
    case 0: FUNC_3(VAR_12+VAR_16,VAR_17<<4,VAR_7); break;
    case 1: FUNC_1(VAR_12+VAR_16,VAR_17<<4,VAR_7); break;
    case 2: FUNC_2(VAR_12+VAR_16,VAR_17<<4,VAR_7); break;
    case 3: FUNC_0(VAR_12+VAR_16,VAR_17<<4,VAR_7); break;
   }
  }

  VAR_12+=8*VAR_1;
 }
}
