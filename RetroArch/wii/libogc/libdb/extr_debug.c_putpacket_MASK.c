
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 () ;
 void** VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3,VAR_4;
 char *VAR_5;
 const char *VAR_6;
 static char VAR_7[2048];

 do {
  VAR_6 = VAR_1;
  VAR_5 = VAR_7;

  *VAR_5++ = '$';

  VAR_3 = 0;
  while((VAR_4=*VAR_6++)!='\0') {
   *VAR_5++ = VAR_4;
   VAR_3 += VAR_4;
  }

  *VAR_5++ = '#';
  *VAR_5++ = VAR_0[VAR_3>>4];
  *VAR_5++ = VAR_0[VAR_3&0x0f];
  *VAR_5 = '\0';

  FUNC_1(VAR_7);

  VAR_2 = FUNC_0();
 } while((VAR_2&0x7f)!='+');
}
