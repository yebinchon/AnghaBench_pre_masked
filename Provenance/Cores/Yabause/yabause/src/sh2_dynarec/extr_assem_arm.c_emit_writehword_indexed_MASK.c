
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int ) ;
 int * VAR_0 ;

void FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
  FUNC_1(VAR_2>-256&&VAR_2<256);
  FUNC_0("strh %s,%s+%d\n",VAR_0[VAR_1],VAR_0[VAR_3],VAR_2);
  if(VAR_2>=0) {
    FUNC_2(0xe1c000b0|FUNC_3(VAR_1,VAR_3,0)|((VAR_2<<4)&0xf00)|(VAR_2&0xf));
  }else{
    FUNC_2(0xe14000b0|FUNC_3(VAR_1,VAR_3,0)|(((-VAR_2)<<4)&0xf00)|((-VAR_2)&0xf));
  }
}
