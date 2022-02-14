
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swapout_io_completion {int swp_io_done; int swp_io_error; } ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

void
FUNC_3(void *VAR_3, int VAR_4)
{
        struct swapout_io_completion *VAR_5;

 VAR_5 = (struct swapout_io_completion *)VAR_3;

 FUNC_0(VAR_0);

 VAR_5->swp_io_done = 1;
 VAR_5->swp_io_error = VAR_4;
 VAR_2++;

 FUNC_2((event_t)&VAR_1);

 FUNC_1(VAR_0);
}
