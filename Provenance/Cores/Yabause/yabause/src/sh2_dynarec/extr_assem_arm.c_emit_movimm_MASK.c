
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int,unsigned int) ;
 scalar_t__ FUNC_4 (int,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int,unsigned int,int,int) ;
 int FUNC_7 (unsigned int,int ,int ) ;
 int * VAR_0 ;

void FUNC_8(u32 VAR_1,unsigned int VAR_2)
{
  u32 VAR_3;
  if(FUNC_4(VAR_1,&VAR_3)) {
    FUNC_0("mov %s,#%d\n",VAR_0[VAR_2],VAR_1);
    FUNC_5(0xe3a00000|FUNC_7(VAR_2,0,0)|VAR_3);
  }else if(FUNC_4(~VAR_1,&VAR_3)) {
    FUNC_0("mvn %s,#%d\n",VAR_0[VAR_2],VAR_1);
    FUNC_5(0xe3e00000|FUNC_7(VAR_2,0,0)|VAR_3);
  }else if(VAR_1<65536) {

    FUNC_0("mov %s,#%d\n",VAR_0[VAR_2],VAR_1&0xFF00);
    FUNC_5(0xe3a00000|FUNC_6(VAR_2,0,VAR_1>>8,8));
    FUNC_0("add %s,%s,#%d\n",VAR_0[VAR_2],VAR_0[VAR_2],VAR_1&0xFF);
    FUNC_5(0xe2800000|FUNC_6(VAR_2,VAR_2,VAR_1&0xff,0));



  }else{

    FUNC_1(VAR_1,VAR_2);




  }
}
