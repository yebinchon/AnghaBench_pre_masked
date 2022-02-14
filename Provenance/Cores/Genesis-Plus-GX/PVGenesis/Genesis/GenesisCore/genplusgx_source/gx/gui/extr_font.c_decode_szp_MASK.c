
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dec_size; int links_offset; int chunks_offset; } ;
typedef TYPE_1__ yay0header ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(void *VAR_0,void *VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4;
 u8 *VAR_5,*VAR_6;
 u32 VAR_7,VAR_8,VAR_9;
 u32 VAR_10,VAR_11,VAR_12,VAR_13;
 yay0header *VAR_14;

 VAR_5 = (u8*)VAR_1;
 VAR_14 = (yay0header*)VAR_0;
 VAR_10 = VAR_14->dec_size;
 VAR_7 = VAR_14->links_offset;
 VAR_8 = VAR_14->chunks_offset;

 VAR_9 = sizeof(yay0header);
 VAR_12 = 0;
 VAR_11 = 0;
 VAR_13 = 0;

 do {
  if(!VAR_13) {
   VAR_12 = *(u32*)(VAR_0+VAR_9);
   VAR_9 += 4;
   VAR_13 = 32;
  }

  if(VAR_12&0x80000000) {
   VAR_5[VAR_11++] = *(u8*)(VAR_0+VAR_8);
   VAR_8++;
  } else {
   VAR_4 = *(u16*)(VAR_0+VAR_7);
   VAR_7 += 2;

   VAR_6 = VAR_5+(VAR_11-(VAR_4&0x0fff)-1);
   VAR_3 = VAR_4>>12;
   if(VAR_3==0) {
    VAR_3 = (*(u8*)(VAR_0+VAR_8))+18;
    VAR_8++;
   } else VAR_3 += 2;

   for(VAR_2=0;VAR_2<VAR_3;VAR_2++) {
    VAR_5[VAR_11++] = VAR_6[VAR_2];
   }
  }
  VAR_12 <<= 1;
  VAR_13--;
 } while(VAR_11<VAR_10);
}
