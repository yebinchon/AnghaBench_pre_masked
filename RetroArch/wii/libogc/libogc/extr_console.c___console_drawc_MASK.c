
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int con_stride; int cursor_row; int cursor_col; unsigned char* font; unsigned int foreground; unsigned int background; scalar_t__ destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(int VAR_5)
{
 console_data_s *VAR_6;
 int VAR_7;
 unsigned int *VAR_8;
 unsigned char *VAR_9;
 unsigned char VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14;

 if(VAR_4==VAR_2) return;
 if(!VAR_3) return;
 VAR_6 = VAR_3;

 VAR_8 = (unsigned int*)(VAR_6->destbuffer + ( VAR_6->con_stride * VAR_6->cursor_row * VAR_1 ) + ((VAR_6->cursor_col * VAR_0 / 2) * 4));
 VAR_9 = &VAR_6->font[VAR_5 * VAR_1];
 VAR_14 = VAR_6->con_stride/4 - 4;
 VAR_12 = VAR_6->foreground;
 VAR_13 = VAR_6->background;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
 {
 }
}
