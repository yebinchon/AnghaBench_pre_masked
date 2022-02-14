
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int width_table; int sheet_column; int sheet_row; } ;
typedef TYPE_1__ sys_fontheader ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*,void*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;

u32 FUNC_2(void *VAR_3,void *VAR_4)
{
 if(FUNC_0(VAR_3)==0) return 0;

 FUNC_1(VAR_3,VAR_4);

 VAR_1 = (sys_fontheader*)VAR_4;
 VAR_2 = (u8*)VAR_4+VAR_1->width_table;
 VAR_0 = VAR_1->sheet_column*VAR_1->sheet_row;


 return 1;
}
