
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ll_entry {int vaddr; struct ll_entry* next; scalar_t__ addr; } ;
typedef int pointer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int ,size_t*,size_t*) ;
 scalar_t__ FUNC_1 (int) ;
 int** VAR_6 ;
 int FUNC_2 (char*,int,...) ;
 struct ll_entry** VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,int,void*) ;
 scalar_t__ VAR_9 ;
 size_t* VAR_10 ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(u32 VAR_11)
{
  struct ll_entry *VAR_12;
  FUNC_2("INV: clean_blocks page=%d\n",VAR_11);
  VAR_12=VAR_7[VAR_11];
  while(VAR_12!=((void*)0)) {
    if((VAR_4[VAR_12->vaddr>>15]>>((VAR_12->vaddr>>12)&7))&1) {;

      if((((u32)VAR_12->addr-(u32)VAR_9)<<(32-VAR_3))>0x60000000+(VAR_2<<(32-VAR_3))) {
        u32 VAR_13,VAR_14,VAR_15=0,VAR_16;
        if(FUNC_4((int)VAR_12->addr)) {

          u32 VAR_17;
          u32 VAR_18=0;
          FUNC_0((pointer)VAR_12->addr,&VAR_13,&VAR_14);
          if(VAR_13-(u32)VAR_0<0x100000) {
            VAR_15=VAR_13-(u32)VAR_0+0x6000000;
            VAR_16=VAR_14-(u32)VAR_0+0x6000000;
            for(VAR_17=(VAR_13-(u32)VAR_0+0x6000000)>>12;VAR_17<=(VAR_14-1-(u32)VAR_0+0x6000000)>>12;VAR_17++) {

              if(!((VAR_4[VAR_17>>3]>>(VAR_17&7))&1)) VAR_18=1;
            }
          }
          if(VAR_13-(u32)VAR_1<0x100000) {
            VAR_15=VAR_13-(u32)VAR_1+0x200000;
            VAR_16=VAR_14-(u32)VAR_1+0x200000;
            for(VAR_17=(VAR_13-(u32)VAR_1+0x200000)>>12;VAR_17<=(VAR_14-1-(u32)VAR_1+0x200000)>>12;VAR_17++) {

              if(!((VAR_4[VAR_17>>3]>>(VAR_17&7))&1)) VAR_18=1;
            }
          }

          if(VAR_15) for(VAR_17=0;VAR_17<8;VAR_17++) {
            if(VAR_10[VAR_17]>=VAR_15&&VAR_10[VAR_17]<VAR_16) {

              VAR_18=1;
            }
          }
          if(!VAR_18) {
            void * VAR_19=(void *)FUNC_1((int)VAR_12->addr);
            if((((u32)VAR_19-(u32)VAR_9)<<(32-VAR_3))>0x60000000+(VAR_2<<(32-VAR_3))) {
              int *VAR_20;
              FUNC_2("INV: Restored %x (%x/%x)\n",VAR_12->vaddr, (int)VAR_12->addr, (int)VAR_19);


              FUNC_3(VAR_8+VAR_11,VAR_12->vaddr,VAR_19);
              VAR_20=VAR_6[((VAR_12->vaddr>>16)^VAR_12->vaddr)&0xFFFF];
              if(VAR_20[0]==VAR_12->vaddr) {
                VAR_20[1]=(int)VAR_19;
              }
              if(VAR_20[2]==VAR_12->vaddr) {
                VAR_20[3]=(int)VAR_19;
              }
            }
            if(VAR_15) {

              for(VAR_17=0;VAR_17<VAR_16-VAR_15;VAR_17+=4) {
                VAR_5[((VAR_15<4194304?VAR_15:((VAR_15|0x400000)&0x7fffff))+VAR_17)>>5]|=1<<(((VAR_15+VAR_17)>>2)&7);
              }
            }
          }
        }
      }
    }
    VAR_12=VAR_12->next;
  }
}
