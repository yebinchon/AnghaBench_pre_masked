
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ) ;
 int * VAR_1 ;

void FUNC_7(int VAR_2,int VAR_3)
{
  u32 VAR_4;
  if(FUNC_4(VAR_3,&VAR_4)) {
    FUNC_0("cmp %s,#%d\n",VAR_1[VAR_2],VAR_3);
    FUNC_5(0xe3500000|FUNC_6(0,VAR_2,0)|VAR_4);
  }else if(FUNC_4(-VAR_3,&VAR_4)) {
    FUNC_0("cmn %s,#%d\n",VAR_1[VAR_2],VAR_3);
    FUNC_5(0xe3700000|FUNC_6(0,VAR_2,0)|VAR_4);
  }else if(VAR_3>0) {
    FUNC_1(VAR_3<65536);

    FUNC_2(VAR_3,VAR_0);



    FUNC_0("cmp %s,r14\n",VAR_1[VAR_2]);
    FUNC_5(0xe1500000|FUNC_6(0,VAR_2,VAR_0));
  }else{
    FUNC_1(VAR_3>-65536);

    FUNC_2(-VAR_3,VAR_0);



    FUNC_0("cmn %s,r14\n",VAR_1[VAR_2]);
    FUNC_5(0xe1700000|FUNC_6(0,VAR_2,VAR_0));
  }
}
