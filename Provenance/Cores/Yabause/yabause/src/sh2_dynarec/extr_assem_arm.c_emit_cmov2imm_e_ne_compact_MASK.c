
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ FUNC_5 (int,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int,int,int ) ;
 int* VAR_1 ;

void FUNC_8(int VAR_2,int VAR_3,unsigned int VAR_4)
{
  u32 VAR_5;
  if(FUNC_5(VAR_3-VAR_2,&VAR_5)) {
    FUNC_2(VAR_2,VAR_4);
    FUNC_1("addne %s,%s,#%d\n",VAR_1[VAR_4],VAR_1[VAR_4],VAR_3-VAR_2);
    FUNC_6(0x12800000|FUNC_7(VAR_4,VAR_4,0)|VAR_5);
  }else if(FUNC_5(VAR_2-VAR_3,&VAR_5)) {
    FUNC_2(VAR_2,VAR_4);
    FUNC_1("subne %s,%s,#%d\n",VAR_1[VAR_4],VAR_1[VAR_4],VAR_2-VAR_3);
    FUNC_6(0x12400000|FUNC_7(VAR_4,VAR_4,0)|VAR_5);
  }
  else {

    FUNC_2(VAR_2,VAR_4);
    FUNC_0((int)VAR_0,VAR_3);
    FUNC_1("ldrne %s,pc+? [=%x]\n",VAR_1[VAR_4],VAR_3);
    FUNC_6(0x15900000|FUNC_7(VAR_4,15,0));
  }
}
