
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
  FUNC_1(VAR_2>-4096&&VAR_2<4096);
  FUNC_0("str %s,%s+%d\n",VAR_0[VAR_1],VAR_0[VAR_3],VAR_2);
  if(VAR_2>=0) {
    FUNC_2(0xe5800000|FUNC_3(VAR_1,VAR_3,0)|VAR_2);
  }else{
    FUNC_2(0xe5000000|FUNC_3(VAR_1,VAR_3,0)|(-VAR_2));
  }
}
