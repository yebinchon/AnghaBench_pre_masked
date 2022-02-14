
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swapout_io_completion {scalar_t__ swp_io_busy; scalar_t__ swp_io_done; int swp_c_size; int swp_f_offset; int swp_c_seg; scalar_t__ swp_io_error; int swp_swf; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct swapout_io_completion *VAR_5)
{
        kern_return_t VAR_6;

        if (VAR_5->swp_io_error)
         VAR_6 = VAR_0;
 else
         VAR_6 = VAR_1;

 FUNC_1(VAR_2);

 FUNC_2(VAR_5->swp_swf, &VAR_5->swp_f_offset, VAR_5->swp_io_error);
 FUNC_3(VAR_5->swp_c_seg, VAR_5->swp_f_offset, VAR_5->swp_c_size, VAR_6);

 FUNC_0(VAR_2);

 VAR_5->swp_io_done = 0;
 VAR_5->swp_io_busy = 0;

 VAR_3--;
 VAR_4--;
}
