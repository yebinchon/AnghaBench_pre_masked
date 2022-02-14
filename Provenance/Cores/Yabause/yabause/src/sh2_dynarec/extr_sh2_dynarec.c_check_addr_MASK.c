
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ll_entry {int vaddr; void* addr; struct ll_entry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct ll_entry** VAR_3 ;
 scalar_t__ VAR_4 ;

void *FUNC_1(u32 VAR_5)
{
  struct ll_entry *VAR_6;
  u32 VAR_7;
  u32 *VAR_8=VAR_2[((VAR_5>>16)^VAR_5)&0xFFFF];
  if(VAR_8[0]==VAR_5) {
    if(((VAR_8[1]-VAR_0-(u32)VAR_4)<<(32-VAR_1))>0x60000000+(VAR_0<<(32-VAR_1)))
      if(FUNC_0(VAR_8[1])) return (void *)VAR_8[1];
  }
  if(VAR_8[2]==VAR_5) {
    if(((VAR_8[3]-VAR_0-(u32)VAR_4)<<(32-VAR_1))>0x60000000+(VAR_0<<(32-VAR_1)))
      if(FUNC_0(VAR_8[3])) return (void *)VAR_8[3];
  }
  VAR_7=(VAR_5&0xDFFFFFFF)>>12;
  if(VAR_7>1024) VAR_7=1024+(VAR_7&1023);
  VAR_6=VAR_3[VAR_7];
  while(VAR_6!=((void*)0)) {
    if(VAR_6->vaddr==VAR_5) {
      if((((u32)VAR_6->addr-(u32)VAR_4)<<(32-VAR_1))>0x60000000+(VAR_0<<(32-VAR_1))) {

        if(VAR_8[0]==VAR_5) {
          VAR_8[1]=(int)VAR_6->addr;
          return VAR_6->addr;
        }
        if(VAR_8[2]==VAR_5) {
          VAR_8[3]=(int)VAR_6->addr;
          return VAR_6->addr;
        }



        if(VAR_8[0]==-1) {
          VAR_8[1]=(int)VAR_6->addr;
          VAR_8[0]=VAR_5;
        }else if(VAR_8[2]==-1) {
          VAR_8[3]=(int)VAR_6->addr;
          VAR_8[2]=VAR_5;
        }
        return VAR_6->addr;
      }
    }
    VAR_6=VAR_6->next;
  }
  return 0;
}
