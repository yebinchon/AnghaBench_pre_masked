
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
struct TYPE_2__ {int first_char; int last_char; int inval_char; int sheet_column; int cell_width; int cell_height; int sheet_size; int sheet_width; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;

void FUNC_0(s32 VAR_4,void *VAR_5,s32 VAR_6,s32 VAR_7,s32 *VAR_8)
{
 u32 VAR_9,VAR_10;
 u32 VAR_11,VAR_12;
 u32 VAR_13,VAR_14;
 u8 *VAR_15;
 u8 *VAR_16,*VAR_17;

 if(!VAR_3 || ! VAR_2) return;

 if(VAR_4<VAR_1->first_char || VAR_4>VAR_1->last_char) VAR_4 = VAR_1->inval_char;
 else VAR_4 -= VAR_1->first_char;

 VAR_9 = VAR_4/VAR_0;
 VAR_10 = VAR_4%VAR_0;
 VAR_11 = (VAR_10%VAR_1->sheet_column)*VAR_1->cell_width;
 VAR_12 = (VAR_10/VAR_1->sheet_column)*VAR_1->cell_height;
 VAR_15 = VAR_2+(VAR_1->sheet_size*VAR_9);

 VAR_14 = 0;
 while(VAR_14<VAR_1->cell_height) {
  VAR_13 = 0;
  while(VAR_13<VAR_1->cell_width) {
   VAR_16 = VAR_15+(((VAR_1->sheet_width/8)<<5)*((VAR_14+VAR_12)/8));
   VAR_16 = VAR_16+(((VAR_13+VAR_11)/8)<<5);
   VAR_16 = VAR_16+(((VAR_14+VAR_12)%8)<<2);
   VAR_16 = VAR_16+(((VAR_13+VAR_11)%8)/2);

   VAR_17 = VAR_5+((VAR_14/8)*(((VAR_7<<1)/8)<<5));
   VAR_17 = VAR_17+(((VAR_13+VAR_6)/8)<<5);
   VAR_17 = VAR_17+(((VAR_13+VAR_6)%8)/2);
   VAR_17 = VAR_17+((VAR_14%8)<<2);

   *VAR_17 = *VAR_16;

   VAR_13 += 2;
  }
  VAR_14++;
 }
 *VAR_8 = VAR_3[VAR_4];
}
