
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cursor_row; int con_rows; int cursor_col; int con_cols; int saved_col; int saved_row; void* background; void* foreground; } ;
typedef TYPE_1__ console_data_s ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 () ;
 void** VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(char *VAR_2)
{
 char VAR_3;
 console_data_s *VAR_4;
 int VAR_5;
 int VAR_6[3];
 int VAR_7;

 if(!VAR_1) return -1;
 VAR_4 = VAR_1;


 VAR_7 = 0;
 VAR_6[0] = 0;
 VAR_6[1] = 0;
 VAR_6[2] = 0;


 VAR_5 = 0;
 VAR_3 = *VAR_2;
 while( (VAR_7 < 3) && (VAR_3 >= '0') && (VAR_3 <= '9') )
 {
  while( (VAR_3 >= '0') && (VAR_3 <= '9') )
  {

   VAR_6[VAR_7] *= 10;
   VAR_6[VAR_7] += VAR_3 - '0';
   VAR_2++;
   VAR_5++;
   VAR_3 = *VAR_2;
  }
  VAR_7++;

  if( *VAR_2 == ';' )
  {

    VAR_2++;
   VAR_5++;
  }
  VAR_3 = *VAR_2;
 }


 VAR_3 = *VAR_2++;
 VAR_5++;
 switch(VAR_3)
 {



  case 'A':
  {
   VAR_1->cursor_row -= VAR_6[0];
   if(VAR_1->cursor_row < 0) VAR_1->cursor_row = 0;
   break;
  }
  case 'B':
  {
   VAR_1->cursor_row += VAR_6[0];
   if(VAR_1->cursor_row >= VAR_1->con_rows) VAR_1->cursor_row = VAR_1->con_rows - 1;
   break;
  }
  case 'C':
  {
   VAR_1->cursor_col += VAR_6[0];
   if(VAR_1->cursor_col >= VAR_1->con_cols) VAR_1->cursor_col = VAR_1->con_cols - 1;
   break;
  }
  case 'D':
  {
   VAR_1->cursor_col -= VAR_6[0];
   if(VAR_1->cursor_col < 0) VAR_1->cursor_col = 0;
   break;
  }



  case 'H':
  case 'f':
  {
   VAR_1->cursor_col = VAR_6[1];
   VAR_1->cursor_row = VAR_6[0];
   if(VAR_1->cursor_row >= VAR_1->con_rows) VAR_1->cursor_row = VAR_1->con_rows - 1;
   if(VAR_1->cursor_col >= VAR_1->con_cols) VAR_1->cursor_col = VAR_1->con_cols - 1;
   break;
  }



  case 'J':
  {
   if( VAR_6[0] == 0 )
        FUNC_1();
   if( VAR_6[0] == 1 )
        FUNC_3();
   if( VAR_6[0] == 2 )
        FUNC_0();

   break;
  }



  case 'K':
  {
   if( VAR_6[0] == 0 )
        FUNC_2( VAR_1->cursor_row, VAR_1->cursor_col, VAR_1->con_cols );
   if( VAR_6[0] == 1 )
        FUNC_2( VAR_1->cursor_row, 0, VAR_1->cursor_col );
   if( VAR_6[0] == 2 )
        FUNC_2( VAR_1->cursor_row, 0, VAR_1->con_cols);

   break;
  }



  case 's':
  {
   VAR_4->saved_col = VAR_4->cursor_col;
   VAR_4->saved_row = VAR_4->cursor_row;
   break;
  }



  case 'u':
   VAR_4->cursor_col = VAR_4->saved_col;
   VAR_4->cursor_row = VAR_4->saved_row;
   break;



  case 'm':
  {

   if( (VAR_6[0] >= 30) && (VAR_6[0] <= 39) )
   {
    VAR_6[0] -= 30;


    if(VAR_6[0] == 9){
        VAR_6[0] = 15;
    }
    else if(VAR_6[0] > 7){
     VAR_6[0] = 7;
    }

    if(VAR_6[1] == 1)
    {

     VAR_6[0] += 8;
    }
    VAR_4->foreground = VAR_0[VAR_6[0]];
   }

   else if( (VAR_6[0] >= 40) && (VAR_6[0] <= 47) )
   {
    VAR_6[0] -= 40;

    if(VAR_6[1] == 1)
    {

     VAR_6[0] += 8;
    }
    VAR_4->background = VAR_0[VAR_6[0]];
   }
    break;
  }
 }

 return(VAR_5);
}
