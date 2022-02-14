
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int,int,int ) ;
 int * VAR_0 ;

void FUNC_6(int VAR_1,int VAR_2,int VAR_3)
{
  u32 VAR_4;
  if(FUNC_2(VAR_2,&VAR_4)) {
    FUNC_0("orrne %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2);
    FUNC_3(0x13800000|FUNC_5(VAR_3,VAR_1,0)|VAR_4);
  }else{
    FUNC_1(0);
    FUNC_0("orr %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2&0xFF00);
    FUNC_0("orr %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2&0xFF);
    FUNC_3(0xe3800000|FUNC_4(VAR_3,VAR_1,VAR_2>>8,8));
    FUNC_3(0xe3800000|FUNC_4(VAR_3,VAR_3,VAR_2&0xff,0));
  }
}
