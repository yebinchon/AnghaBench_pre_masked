
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int,unsigned int,int,int) ;
 int FUNC_6 (unsigned int,unsigned int,int ) ;
 int * VAR_0 ;

void FUNC_7(unsigned int VAR_1,int VAR_2,unsigned int VAR_3)
{
  FUNC_1(VAR_1<16);
  FUNC_1(VAR_3<16);
  if(VAR_2!=0) {
    FUNC_1(VAR_2>-65536&&VAR_2<65536);
    u32 VAR_4;
    if(FUNC_3(VAR_2,&VAR_4)) {
      FUNC_0("add %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2);
      FUNC_4(0xe2800000|FUNC_6(VAR_3,VAR_1,0)|VAR_4);
    }else if(FUNC_3(-VAR_2,&VAR_4)) {
      FUNC_0("sub %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2);
      FUNC_4(0xe2400000|FUNC_6(VAR_3,VAR_1,0)|VAR_4);
    }else if(VAR_2<0) {
      FUNC_0("sub %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],(-VAR_2)&0xFF00);
      FUNC_0("sub %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_3],(-VAR_2)&0xFF);
      FUNC_4(0xe2400000|FUNC_5(VAR_3,VAR_1,(-VAR_2)>>8,8));
      FUNC_4(0xe2400000|FUNC_5(VAR_3,VAR_3,(-VAR_2)&0xff,0));
    }else{
      FUNC_0("add %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_2&0xFF00);
      FUNC_0("add %s,%s,#%d\n",VAR_0[VAR_3],VAR_0[VAR_3],VAR_2&0xFF);
      FUNC_4(0xe2800000|FUNC_5(VAR_3,VAR_1,VAR_2>>8,8));
      FUNC_4(0xe2800000|FUNC_5(VAR_3,VAR_3,VAR_2&0xff,0));
    }
  }
  else if(VAR_1!=VAR_3) FUNC_2(VAR_1,VAR_3);
}
