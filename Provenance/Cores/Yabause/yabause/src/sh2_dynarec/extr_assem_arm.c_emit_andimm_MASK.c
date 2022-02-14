
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int * VAR_1 ;

void FUNC_8(int VAR_2,int VAR_3,int VAR_4)
{
  u32 VAR_5;
  if(VAR_3==0) {
    FUNC_3(VAR_4);
  }else if(FUNC_4(VAR_3,&VAR_5)) {
    FUNC_0("and %s,%s,#%d\n",VAR_1[VAR_4],VAR_1[VAR_2],VAR_3);
    FUNC_5(0xe2000000|FUNC_7(VAR_4,VAR_2,0)|VAR_5);
  }else if(FUNC_4(~VAR_3,&VAR_5)) {
    FUNC_0("bic %s,%s,#%d\n",VAR_1[VAR_4],VAR_1[VAR_2],VAR_3);
    FUNC_5(0xe3c00000|FUNC_7(VAR_4,VAR_2,0)|VAR_5);
  }else if(VAR_3==65535) {

    FUNC_0("bic %s,%s,#FF000000\n",VAR_1[VAR_4],VAR_1[VAR_2]);
    FUNC_5(0xe3c00000|FUNC_7(VAR_4,VAR_2,0)|0x4FF);
    FUNC_0("bic %s,%s,#00FF0000\n",VAR_1[VAR_4],VAR_1[VAR_4]);
    FUNC_5(0xe3c00000|FUNC_7(VAR_4,VAR_4,0)|0x8FF);




  }else{
    FUNC_1(VAR_3>0&&VAR_3<65535);

    FUNC_0("mov r14,#%d\n",VAR_3&0xFF00);
    FUNC_5(0xe3a00000|FUNC_6(VAR_0,0,VAR_3>>8,8));
    FUNC_0("add r14,r14,#%d\n",VAR_3&0xFF);
    FUNC_5(0xe2800000|FUNC_6(VAR_0,VAR_0,VAR_3&0xff,0));



    FUNC_0("and %s,%s,r14\n",VAR_1[VAR_4],VAR_1[VAR_2]);
    FUNC_5(0xe0000000|FUNC_7(VAR_4,VAR_2,VAR_0));
  }
}
