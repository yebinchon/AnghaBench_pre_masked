
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ms_rb_ds; scalar_t__ ms_rb_color; scalar_t__ ms_fbo; } ;
typedef TYPE_1__ fft_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int,scalar_t__*) ;
 int FUNC_7 (int,scalar_t__*) ;
 int FUNC_8 (int ,unsigned int,int ,unsigned int,unsigned int) ;

void FUNC_9(fft_t *VAR_7, unsigned VAR_8, unsigned VAR_9, unsigned VAR_10)
{
   if (VAR_7->ms_rb_color)
      FUNC_4(1, &VAR_7->ms_rb_color);
   VAR_7->ms_rb_color = 0;
   if (VAR_7->ms_rb_ds)
      FUNC_4(1, &VAR_7->ms_rb_ds);
   VAR_7->ms_rb_ds = 0;
   if (VAR_7->ms_fbo)
      FUNC_3(1, &VAR_7->ms_fbo);
   VAR_7->ms_fbo = 0;

   if (VAR_10 > 1)
   {
      FUNC_7(1, &VAR_7->ms_rb_color);
      FUNC_7(1, &VAR_7->ms_rb_ds);
      FUNC_6 (1, &VAR_7->ms_fbo);

      FUNC_1(VAR_5, VAR_7->ms_rb_color);
      FUNC_8(VAR_5, VAR_10,
            VAR_6, VAR_8, VAR_9);
      FUNC_1(VAR_5, VAR_7->ms_rb_ds);
      FUNC_8(VAR_5, VAR_10,
            VAR_1, VAR_8, VAR_9);
      FUNC_1(VAR_5, 0);

      FUNC_0(VAR_3, VAR_7->ms_fbo);
      FUNC_5(VAR_3, VAR_0,
            VAR_5, VAR_7->ms_rb_color);
      FUNC_5(VAR_3, VAR_2,
            VAR_5, VAR_7->ms_rb_ds);
      if (FUNC_2(VAR_3) != VAR_4)
         FUNC_9(VAR_7, 0, 0, 0);
   }

   FUNC_0(VAR_3, 0);
}
