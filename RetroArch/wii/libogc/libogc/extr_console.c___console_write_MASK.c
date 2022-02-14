
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int dummy; } ;
struct TYPE_3__ {scalar_t__ cursor_row; int cursor_col; int con_cols; scalar_t__ con_rows; int con_stride; int con_yres; int background; scalar_t__ destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,char const*,size_t) ;
 int FUNC_4 (scalar_t__,char const*,size_t) ;

int FUNC_5(struct _reent *VAR_7,void *VAR_8,const char *VAR_9,size_t VAR_10)
{
 size_t VAR_11 = 0;
 char *VAR_12 = (char*)VAR_9;
 console_data_s *VAR_13;
 char VAR_14;

 if(VAR_5>=0) {
  if(VAR_4)
   FUNC_4(VAR_5,VAR_9,VAR_10);
  else
   FUNC_3(VAR_5,VAR_9,VAR_10);
 }

 if(!VAR_6) return -1;
 VAR_13 = VAR_6;
 if(!VAR_12 || VAR_10<=0) return -1;

 VAR_11 = 0;
 while(*VAR_12!='\0' && VAR_11<VAR_10)
 {
  VAR_14 = *VAR_12++;
  VAR_11++;
  if ( (VAR_14 == 0x1b) && (*VAR_12 == '[') )
  {

   int VAR_15;

   VAR_12++;
   VAR_11++;
   VAR_15 = FUNC_1(VAR_12);
   VAR_12 += VAR_15;
   VAR_11 += VAR_15;
  }
  else
  {
   switch(VAR_14)
   {
    case '\n':
     VAR_13->cursor_row++;
     VAR_13->cursor_col = 0;
     break;
    case '\r':
     VAR_13->cursor_col = 0;
     break;
    case '\b':
     VAR_13->cursor_col--;
     if(VAR_13->cursor_col < 0)
     {
      VAR_13->cursor_col = 0;
     }
     break;
    case '\f':
     VAR_13->cursor_row++;
     break;
    case '\t':
     if(VAR_13->cursor_col%VAR_3) VAR_13->cursor_col += (VAR_13->cursor_col%VAR_3);
     else VAR_13->cursor_col += VAR_3;
     break;
    default:
     FUNC_0(VAR_14);
     VAR_13->cursor_col++;

     if( VAR_13->cursor_col >= VAR_13->con_cols)
     {

      VAR_13->cursor_row++;
      VAR_13->cursor_col = 0;
     }
   }
  }

  if( VAR_13->cursor_row >= VAR_13->con_rows)
  {

   FUNC_2(VAR_13->destbuffer,
    VAR_13->destbuffer+VAR_13->con_stride*(VAR_2*VAR_0+VAR_1),
    VAR_13->con_stride*VAR_13->con_yres-VAR_2);

   unsigned int VAR_16 = (VAR_13->con_stride * (VAR_2 * VAR_0 + VAR_1))/4;
   unsigned int *VAR_17 = (unsigned int*)(VAR_13->destbuffer + VAR_13->con_stride * (VAR_13->con_yres - VAR_2));
   while(VAR_16--)
    *VAR_17++ = VAR_13->background;
   VAR_13->cursor_row--;
  }
 }

 return VAR_11;
}
