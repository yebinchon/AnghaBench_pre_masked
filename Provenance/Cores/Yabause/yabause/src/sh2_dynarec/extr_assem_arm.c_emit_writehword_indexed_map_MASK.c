
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,size_t) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,size_t) ;
 int * VAR_1 ;

void FUNC_6(int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  if(VAR_5<0) FUNC_3(VAR_2, VAR_3, VAR_4);
  else {
    if(VAR_3==0) {
      FUNC_2(VAR_5,2,VAR_0);
      FUNC_0("strh %s,%s+%s\n",VAR_1[VAR_2],VAR_1[VAR_4],VAR_1[VAR_0]);
      FUNC_4(0xe18000b0|FUNC_5(VAR_2,VAR_4,VAR_0));
    }else{
      FUNC_1(VAR_3==0);
    }
  }
}
