
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int sheet_image; int first_char; int last_char; int inval_char; int width_table; int cell_height; int cell_width; } ;
typedef TYPE_1__ sys_fontheader ;


 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (void*) ;
 void* VAR_5 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (void*,int ,int) ;

int FUNC_7(void)
{


  FUNC_4(6);



  VAR_5 = FUNC_5(32,131360);
  if (!VAR_5)
    return 0;
  FUNC_6(VAR_5,0,131360);
  FUNC_0(VAR_5+119072,12288,0x1FCF00);


  FUNC_1(VAR_5+119072,VAR_5);


  VAR_1 = (sys_fontheader*)VAR_5;
  VAR_2 = (u8*)((((u32)VAR_5+VAR_1->sheet_image)+31)&~31);


  FUNC_2((u8*)VAR_5+VAR_1->sheet_image,VAR_2);


  int VAR_6,VAR_7;
  for (VAR_6=0; VAR_6<256; ++VAR_6)
  {
    if ((VAR_6 < VAR_1->first_char) || (VAR_6 > VAR_1->last_char))
      VAR_7 = VAR_1->inval_char;
    else
      VAR_7 = VAR_6 - VAR_1->first_char;

    VAR_4[VAR_6] = ((u8*)VAR_1)[VAR_1->width_table + VAR_7];
  }


  VAR_0 = VAR_1->cell_height;


  VAR_3 = FUNC_5(32, VAR_1->cell_width * VAR_1->cell_height / 2);
  if (!VAR_3)
  {
    FUNC_3(VAR_5);
    return 0;
  }

  return 1;
}
