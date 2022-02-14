
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*) ;
 int* VAR_2 ;

void FUNC_1()
{
  int VAR_3,VAR_4;
  for (VAR_3=0;VAR_3<(1<<(VAR_1-17));VAR_3++)
  {
    u32 VAR_5=VAR_2[VAR_3];
    if(VAR_5) {
      u32 VAR_6,VAR_7;
      for(VAR_4=0;VAR_4<32;VAR_4++)
      {
        if(VAR_5&(1<<VAR_4)) {
          VAR_6=VAR_0+VAR_3*131072+VAR_4*4096;
          VAR_7=VAR_6+4095;
          VAR_4++;
          while(VAR_4<32) {
            if(VAR_5&(1<<VAR_4)) {
              VAR_7+=4096;
              VAR_4++;
            }else{
              FUNC_0((void *)VAR_6,(void *)VAR_7);
              break;
            }
          }
        }
      }
      VAR_2[VAR_3]=0;
    }
  }
}
