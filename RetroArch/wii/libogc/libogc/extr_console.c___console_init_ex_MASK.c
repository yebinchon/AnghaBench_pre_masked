
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int target_x; int target_y; int con_xres; int con_yres; int tgt_stride; int con_stride; int con_cols; int con_rows; int background; int foreground; int font; scalar_t__ saved_col; scalar_t__ saved_row; scalar_t__ cursor_col; scalar_t__ cursor_row; void* destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int ** VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int *,int ,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_5(void *VAR_15,int VAR_16,int VAR_17,int VAR_18,int VAR_19,int VAR_20,int VAR_21)
{
 unsigned int VAR_22;
 console_data_s *VAR_23 = &VAR_12;

 FUNC_1(VAR_22);

 VAR_23->destbuffer = VAR_15;
 VAR_23->target_x = VAR_16;
 VAR_23->target_y = VAR_17;
 VAR_23->con_xres = VAR_19;
 VAR_23->con_yres = VAR_20;
 VAR_23->tgt_stride = VAR_18;
 VAR_23->con_stride = VAR_21;
 VAR_23->con_cols = VAR_19 / VAR_2;
 VAR_23->con_rows = VAR_20 / VAR_3;
 VAR_23->cursor_row = 0;
 VAR_23->cursor_col = 0;
 VAR_23->saved_row = 0;
 VAR_23->saved_col = 0;

 VAR_23->font = VAR_8;

 VAR_23->foreground = VAR_1;
 VAR_23->background = VAR_0;

 VAR_9 = VAR_23;

 FUNC_3();

 VAR_10[VAR_5] = &VAR_11;
 VAR_10[VAR_4] = &VAR_11;

 FUNC_0(VAR_7);

 FUNC_2(VAR_22);

 FUNC_4(VAR_14, ((void*)0) , VAR_6, 0);
 FUNC_4(VAR_13, ((void*)0) , VAR_6, 0);
}
