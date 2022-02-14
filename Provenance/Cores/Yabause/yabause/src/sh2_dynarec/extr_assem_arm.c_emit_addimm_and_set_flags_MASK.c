
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int,int,int ) ;
 int * VAR_0 ;

void FUNC_6(int VAR_1,int VAR_2)
{
  FUNC_1(VAR_1>-65536&&VAR_1<65536);
  u32 VAR_3;
  if(FUNC_2(VAR_1,&VAR_3)) {
    FUNC_0("adds %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],VAR_1);
    FUNC_3(0xe2900000|FUNC_5(VAR_2,VAR_2,0)|VAR_3);
  }else if(FUNC_2(-VAR_1,&VAR_3)) {
    FUNC_0("subs %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],VAR_1);
    FUNC_3(0xe2500000|FUNC_5(VAR_2,VAR_2,0)|VAR_3);
  }else if(VAR_1<0) {
    FUNC_0("sub %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],(-VAR_1)&0xFF00);
    FUNC_0("subs %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],(-VAR_1)&0xFF);
    FUNC_3(0xe2400000|FUNC_4(VAR_2,VAR_2,(-VAR_1)>>8,8));
    FUNC_3(0xe2500000|FUNC_4(VAR_2,VAR_2,(-VAR_1)&0xff,0));
  }else{
    FUNC_0("add %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],VAR_1&0xFF00);
    FUNC_0("adds %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],VAR_1&0xFF);
    FUNC_3(0xe2800000|FUNC_4(VAR_2,VAR_2,VAR_1>>8,8));
    FUNC_3(0xe2900000|FUNC_4(VAR_2,VAR_2,VAR_1&0xff,0));
  }
}
