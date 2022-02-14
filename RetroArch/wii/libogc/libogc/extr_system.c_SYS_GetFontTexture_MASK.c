
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_2__ {size_t first_char; size_t last_char; size_t inval_char; int sheet_size; int sheet_column; int cell_width; int cell_height; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 size_t* VAR_3 ;

void FUNC_0(s32 VAR_4,void **VAR_5,s32 *VAR_6,s32 *VAR_7,s32 *VAR_8)
{
 u32 VAR_9,VAR_10;

 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_5 = ((void*)0);
 if(!VAR_3 || ! VAR_2) return;

 if(VAR_4<VAR_1->first_char || VAR_4>VAR_1->last_char) VAR_4 = VAR_1->inval_char;
 else VAR_4 -= VAR_1->first_char;

 VAR_9 = VAR_4/VAR_0;
 VAR_10 = VAR_4%VAR_0;
 *VAR_5 = VAR_2+(VAR_1->sheet_size*VAR_9);
 *VAR_6 = (VAR_10%VAR_1->sheet_column)*VAR_1->cell_width;
 *VAR_7 = (VAR_10/VAR_1->sheet_column)*VAR_1->cell_height;
 *VAR_8 = VAR_3[VAR_4];
}
