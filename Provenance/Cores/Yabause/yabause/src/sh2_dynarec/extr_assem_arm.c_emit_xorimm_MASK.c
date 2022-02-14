
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int,int,int ) ;
 int * VAR_0 ;

void FUNC_7(int VAR_1,int VAR_2,int VAR_3)
{
  u32 VAR_4;
  if(VAR_2==0) {
    if(VAR_1!=VAR_3) FUNC_2(VAR_1,VAR_3);
  }else if(FUNC_3(VAR_2,&VAR_4)) {
    FUNC_0("eor %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2);
    FUNC_4(0xe2200000|FUNC_6(VAR_3,VAR_1,0)|VAR_4);
  }else{
    FUNC_1(VAR_2>0&&VAR_2<65536);
    FUNC_0("eor %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2&0xFF00);
    FUNC_0("eor %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2&0xFF);
    FUNC_4(0xe2200000|FUNC_5(VAR_3,VAR_1,VAR_2>>8,8));
    FUNC_4(0xe2200000|FUNC_5(VAR_3,VAR_3,VAR_2&0xff,0));
  }
}
