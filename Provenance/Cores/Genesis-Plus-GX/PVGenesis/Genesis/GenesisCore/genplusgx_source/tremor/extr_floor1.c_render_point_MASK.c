
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0,int VAR_1,int VAR_2,int VAR_3,int VAR_4){
  VAR_2&=0x7fff;
  VAR_3&=0x7fff;

  {
    int VAR_5=VAR_3-VAR_2;
    int VAR_6=VAR_1-VAR_0;
    int VAR_7=FUNC_0(VAR_5);
    int VAR_8=VAR_7*(VAR_4-VAR_0);

    int VAR_9=VAR_8/VAR_6;
    if(VAR_5<0)return(VAR_2-VAR_9);
    return(VAR_2+VAR_9);
  }
}
