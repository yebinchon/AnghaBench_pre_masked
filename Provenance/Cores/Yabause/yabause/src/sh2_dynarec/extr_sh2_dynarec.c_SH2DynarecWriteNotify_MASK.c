
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;
 int FUNC_0 (int,int) ;

void FUNC_1(u32 VAR_1, u32 VAR_2) {
  int VAR_3,VAR_4=0;

  if((VAR_1&0xDFF00000)!=0x200000&&(VAR_1&0xDE000000)!=0x6000000) return;

  for(VAR_3=VAR_1>>12;VAR_3<=(VAR_1+VAR_2-1)>>12;VAR_3++)
    VAR_4|=((VAR_0[VAR_3>>3]>>(VAR_3&7))&1);
  if(!VAR_4) return;

  FUNC_0(VAR_1>>12,(VAR_1+VAR_2-1)>>12);
}
