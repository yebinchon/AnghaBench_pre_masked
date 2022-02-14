
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ first_char; scalar_t__ last_char; scalar_t__ inval_char; scalar_t__ sheet_column; scalar_t__ sheet_row; scalar_t__ cell_width; scalar_t__ cell_height; scalar_t__ sheet_size; int sheet_width; } ;
typedef TYPE_1__ sys_fontheader ;
typedef scalar_t__ s32 ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(s32 VAR_2,void *VAR_3,s32 VAR_4,s32 VAR_5)
{
 u32 VAR_6,VAR_7;
 u32 VAR_8,VAR_9;
 u32 VAR_10,VAR_11;
 u8 *VAR_12;
 u8 *VAR_13,*VAR_14;
  sys_fontheader *VAR_15 = VAR_0;

 if(VAR_2<VAR_15->first_char || VAR_2>VAR_15->last_char) VAR_2 = VAR_15->inval_char;
 else VAR_2 -= VAR_15->first_char;

 VAR_6 = VAR_15->sheet_column*VAR_15->sheet_row;
 VAR_7 = VAR_2%VAR_6;
  VAR_6 = VAR_2/VAR_6;
 VAR_8 = (VAR_7%VAR_15->sheet_column)*VAR_15->cell_width;
 VAR_9 = (VAR_7/VAR_15->sheet_column)*VAR_15->cell_height;
 VAR_12 = VAR_1+(VAR_15->sheet_size*VAR_6);

 VAR_11 = 0;
 while(VAR_11<VAR_15->cell_height) {
  VAR_10 = 0;
  while(VAR_10<VAR_15->cell_width) {
   VAR_13 = VAR_12+(((VAR_15->sheet_width/8)<<5)*((VAR_11+VAR_9)/8));
   VAR_13 = VAR_13+(((VAR_10+VAR_8)/8)<<5);
   VAR_13 = VAR_13+(((VAR_11+VAR_9)%8)<<2);
   VAR_13 = VAR_13+(((VAR_10+VAR_8)%8)/2);

   VAR_14 = VAR_3+((VAR_11/8)*(((VAR_5<<1)/8)<<5));
   VAR_14 = VAR_14+(((VAR_10+VAR_4)/8)<<5);
   VAR_14 = VAR_14+(((VAR_10+VAR_4)%8)/2);
   VAR_14 = VAR_14+((VAR_11%8)<<2);

   *VAR_14 = *VAR_13;

   VAR_10 += 2;
  }
  VAR_11++;
 }
}
