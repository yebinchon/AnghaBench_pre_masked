
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int con_xres; int con_yres; int con_cols; int con_rows; int con_stride; int tgt_stride; int target_x; int target_y; int background; int foreground; int font; void* destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_4(void *VAR_14,int VAR_15,int VAR_16,int VAR_17,int VAR_18,int VAR_19)
{
 unsigned int VAR_20;
 console_data_s *VAR_21 = &VAR_11;

 FUNC_0(VAR_20);

 VAR_21->destbuffer = VAR_14;
 VAR_21->con_xres = VAR_17;
 VAR_21->con_yres = VAR_18;
 VAR_21->con_cols = VAR_17 / VAR_2;
 VAR_21->con_rows = VAR_18 / VAR_3;
 VAR_21->con_stride = VAR_21->tgt_stride = VAR_19;
 VAR_21->target_x = VAR_15;
 VAR_21->target_y = VAR_16;

 VAR_21->font = VAR_7;

 VAR_21->foreground = VAR_1;
 VAR_21->background = VAR_0;

 VAR_8 = VAR_21;

 FUNC_2();

 VAR_9[VAR_5] = &VAR_10;
 VAR_9[VAR_4] = &VAR_10;
 FUNC_1(VAR_20);

 FUNC_3(VAR_13, ((void*)0) , VAR_6, 0);
 FUNC_3(VAR_12, ((void*)0) , VAR_6, 0);
}
