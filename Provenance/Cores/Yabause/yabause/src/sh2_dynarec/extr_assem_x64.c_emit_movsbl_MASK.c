
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int* VAR_2 ;

void FUNC_5(u64 VAR_3, int VAR_4)
{
  if(VAR_3-(u64)VAR_1+0x7FFFFFF9>0xFFFFFFFE) {
    FUNC_1(VAR_3,VAR_4);
    FUNC_0("movsbl (%%%s),%%%s\n",VAR_2[VAR_4],VAR_2[VAR_4]);
    FUNC_2(0x0F);
    FUNC_2(0xBE);
    if(VAR_4!=VAR_0) {
      FUNC_3(0,VAR_4,VAR_4);
    } else {
      FUNC_3(1,VAR_4,VAR_4);
      FUNC_2(0);
    }
  }
  else
  {
    FUNC_0("movsbl %x,%%%s\n",VAR_3,VAR_2[VAR_4]);
    FUNC_2(0x0F);
    FUNC_2(0xBE);
    FUNC_3(0,5,VAR_4);
    FUNC_4(VAR_3-(int)VAR_1-4);
  }
}
