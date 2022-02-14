
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 int * VAR_1 ;

void FUNC_6(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  if(VAR_4<0) FUNC_2(VAR_2, VAR_3, VAR_5);
  else {
    if(VAR_2==0) {
      FUNC_3(VAR_4,2,VAR_0);
      FUNC_0("ldrsh %s,%s+%s\n",VAR_1[VAR_5],VAR_1[VAR_3],VAR_1[VAR_0]);
      FUNC_4(0xe19000f0|FUNC_5(VAR_5,VAR_3,VAR_0));
    }else{
      FUNC_1(VAR_2>-256&&VAR_2<256);
      FUNC_0("add %s,%s,%s,lsl #2\n",VAR_1[VAR_5],VAR_1[VAR_3],VAR_1[VAR_4]);
      FUNC_4(0xe0800000|FUNC_5(VAR_5,VAR_3,VAR_4)|(2<<7));
      FUNC_2(VAR_2, VAR_5, VAR_5);
    }
  }
}
