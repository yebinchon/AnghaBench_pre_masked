
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int con_xres; int con_yres; scalar_t__ saved_col; scalar_t__ saved_row; scalar_t__ cursor_col; scalar_t__ cursor_row; int background; scalar_t__ destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 console_data_s *VAR_1;
 unsigned int VAR_2;
 unsigned int *VAR_3;

 if( !(VAR_1 = VAR_0) ) return;

 VAR_2 = (VAR_1->con_xres*VAR_1->con_yres)/2;
 VAR_3 = (unsigned int*)VAR_1->destbuffer;

 while(VAR_2--)
  *VAR_3++ = VAR_1->background;

 VAR_1->cursor_row = 0;
 VAR_1->cursor_col = 0;
 VAR_1->saved_row = 0;
 VAR_1->saved_col = 0;
}
