
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef size_t s32 ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 char FUNC_1 (int) ;
 int FUNC_2 (char) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(char *VAR_1)
{
 char VAR_2;
 u8 VAR_3,VAR_4;
 s32 VAR_5,VAR_6;

 do {
  while((VAR_2=(FUNC_0()&0x7f))!='$');

  VAR_6 = 0;
  VAR_3 = 0;
  VAR_4 = -1;

  while(VAR_6<VAR_0) {
   VAR_2 = FUNC_0()&0x7f;
   if(VAR_2=='#') break;

   VAR_3 += VAR_2;
   VAR_1[VAR_6] = VAR_2;
   VAR_6++;
  }
  if(VAR_6>=VAR_0) continue;

  VAR_1[VAR_6] = 0;
  if(VAR_2=='#') {
   VAR_4 = FUNC_1(FUNC_0()&0x7f)<<4;
   VAR_4 |= FUNC_1(FUNC_0()&0x7f);

   if(VAR_3!=VAR_4) FUNC_2('-');
   else {
    FUNC_2('+');
    if(VAR_1[2]==':') {
     FUNC_2(VAR_1[0]);
     FUNC_2(VAR_1[1]);

     VAR_6 = FUNC_3((const char*)VAR_1);
     for(VAR_5=3;VAR_5<=VAR_6;VAR_5++) VAR_1[VAR_5-3] = VAR_1[VAR_5];
    }
   }
  }
 } while(VAR_3!=VAR_4);
}
