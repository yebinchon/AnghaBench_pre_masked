
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ll_entry {int vaddr; void* addr; struct ll_entry* next; } ;
typedef int pointer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int ,int*,int*) ;
 int** VAR_6 ;
 struct ll_entry** VAR_7 ;
 struct ll_entry** VAR_8 ;
 int* VAR_9 ;
 scalar_t__ VAR_10 ;
 int* VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;

void *FUNC_3(u32 VAR_12)
{
  struct ll_entry *VAR_13;
  u32 VAR_14=(VAR_12&0xDFFFFFFF)>>12;
  if(VAR_14>1024) VAR_14=1024+(VAR_14&1023);

  VAR_13=VAR_8[VAR_14];
  while(VAR_13!=((void*)0)) {

    if(VAR_13->vaddr==VAR_12) {


      int *VAR_15=VAR_6[((VAR_12>>16)^VAR_12)&0xFFFF];
      VAR_15[3]=VAR_15[1];
      VAR_15[2]=VAR_15[0];
      VAR_15[1]=(int)VAR_13->addr;
      VAR_15[0]=VAR_12;

      return VAR_13->addr;
    }
    VAR_13=VAR_13->next;
  }
  VAR_13=VAR_7[VAR_14];
  while(VAR_13!=((void*)0)) {
    if(VAR_13->vaddr==VAR_12) {


      if((((u32)VAR_13->addr-(u32)VAR_10)<<(32-VAR_3))>0x60000000+(VAR_2<<(32-VAR_3)))
      if(FUNC_2(VAR_13->addr)) {
        u32 VAR_16,VAR_17;
        int *VAR_18;


        VAR_4[VAR_12>>15]|=1<<((VAR_12>>12)&7);
        VAR_4[(VAR_12^0x20000000)>>15]|=1<<((VAR_12>>12)&7);




        VAR_9[VAR_12>>12]|=0x40000000;
        VAR_9[(VAR_12^0x20000000)>>12]|=0x40000000;

        VAR_11[VAR_14>>3]|=1<<(VAR_14&7);
        FUNC_0((pointer)VAR_13->addr,&VAR_16,&VAR_17);
        if(VAR_16-(u32)VAR_0<0x100000) {
          u32 VAR_19=VAR_16-(u32)VAR_0+0x6000000;
          u32 VAR_20=VAR_17-(u32)VAR_0+0x6000000;
          int VAR_21;

          for(VAR_21=0;VAR_21<VAR_20-VAR_19;VAR_21+=4) {
            VAR_5[((VAR_19<4194304?VAR_19:((VAR_19|0x400000)&0x7fffff))+VAR_21)>>5]|=1<<(((VAR_19+VAR_21)>>2)&7);
          }
        }
        if(VAR_16-(u32)VAR_1<0x100000) {
          u32 VAR_22=VAR_16-(u32)VAR_1+0x200000;
          u32 VAR_23=VAR_17-(u32)VAR_1+0x200000;
          int VAR_24;

          for(VAR_24=0;VAR_24<VAR_23-VAR_22;VAR_24+=4) {
            VAR_5[((VAR_22<4194304?VAR_22:((VAR_22|0x400000)&0x7fffff))+VAR_24)>>5]|=1<<(((VAR_22+VAR_24)>>2)&7);
          }
        }
        VAR_18=VAR_6[((VAR_12>>16)^VAR_12)&0xFFFF];
        if(VAR_18[0]==VAR_12) {
          VAR_18[1]=(int)VAR_13->addr;
        }
        else
        {
          VAR_18[3]=VAR_18[1];
          VAR_18[2]=VAR_18[0];
          VAR_18[1]=(int)VAR_13->addr;
          VAR_18[0]=VAR_12;
        }

        return VAR_13->addr;
      }
    }
    VAR_13=VAR_13->next;
  }
  FUNC_1(VAR_12);
  return FUNC_3(VAR_12);
}
