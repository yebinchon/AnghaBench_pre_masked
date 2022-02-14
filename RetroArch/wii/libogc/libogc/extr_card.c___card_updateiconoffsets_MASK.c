
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct card_direntry {int iconaddr; int bannerfmt; size_t iconfmt; size_t iconspeed; } ;
typedef size_t s32 ;
struct TYPE_3__ {int banner_fmt; int offset_banner; int offset_banner_tlut; size_t* iconfmt; size_t* iconspeed; int* offset_icon; int* offset_icon_tlut; scalar_t__ icon_speed; scalar_t__ icon_fmt; } ;
typedef TYPE_1__ card_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_0(struct card_direntry *VAR_6,card_stat *VAR_7)
{
 s32 VAR_8;
 u8 VAR_9,VAR_10;
 u32 VAR_11,VAR_12;

 VAR_11 = VAR_6->iconaddr;
 if(VAR_11==-1) {
  VAR_7->banner_fmt = 0;
  VAR_7->icon_fmt = 0;
  VAR_7->icon_speed = 0;
  VAR_11 = 0;
 }

 if(VAR_6->bannerfmt&VAR_1) {
  if(!(VAR_6->bannerfmt&0x10)) {
   VAR_9 = (VAR_6->bannerfmt&VAR_1);
   if(VAR_9==VAR_0) {
    VAR_7->banner_fmt = VAR_9;
    VAR_7->offset_banner = VAR_11;
    VAR_7->offset_banner_tlut = VAR_11+3072;
    VAR_11 += (3072+512);
   } else if(VAR_9==VAR_2) {
    VAR_7->banner_fmt = VAR_9;
    VAR_7->offset_banner = VAR_11;
    VAR_7->offset_banner_tlut = -1;
    VAR_11 += 6144;
   }
  } else {
   VAR_7->offset_banner = -1;
   VAR_7->offset_banner_tlut = -1;
  }
 }

 VAR_10 = 0;
 for(VAR_8=0;VAR_8<VAR_4;VAR_8++) {
  VAR_7->iconfmt[VAR_8] = ((VAR_6->iconfmt>>(VAR_8<<1))&VAR_3);
  VAR_7->iconspeed[VAR_8] = ((VAR_6->iconspeed>>(VAR_8<<1))&VAR_5);
  if(VAR_7->iconspeed[VAR_8]==0) VAR_7->iconfmt[VAR_8] = 0;
  if(VAR_7->iconfmt[VAR_8]) VAR_10++;
 }

 VAR_12 = VAR_11;
 for(VAR_8=0;VAR_8<VAR_4;VAR_8++) {
  switch(VAR_7->iconfmt[VAR_8]) {
   case 1:
    VAR_7->offset_icon[VAR_8] = VAR_11;
    VAR_7->offset_icon_tlut[VAR_8] = VAR_12 + (VAR_10*1024);
    VAR_11 += 1024;
    break;
   case 2:
    VAR_7->offset_icon[VAR_8] = VAR_11;
    VAR_7->offset_icon_tlut[VAR_8] = -1;
    VAR_11 += 3072;
    break;
   case 3:
    VAR_7->offset_icon[VAR_8] = VAR_11;
    VAR_7->offset_icon_tlut[VAR_8] = VAR_11 + 1024;
    VAR_11 += 1536;
    break;
   default:
    VAR_7->offset_icon[VAR_8] = -1;
    VAR_7->offset_icon_tlut[VAR_8] = -1;
    break;

  }
 }

}
