
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cursor_row; int con_cols; int cursor_col; } ;
typedef TYPE_1__ console_data_s ;


 int FUNC_0 (int,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1() {
 console_data_s *VAR_1;
 int VAR_2;

  if( !(VAR_1 = VAR_0) ) return;
 VAR_2 = VAR_1->cursor_row;

  FUNC_0( VAR_2, 0, VAR_1->cursor_col );

  while( VAR_2-- )
    FUNC_0( VAR_2, 0, VAR_1->con_cols );
}
