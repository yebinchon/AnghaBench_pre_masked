
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {int (* mainprog_finish_display ) () ;} ;
typedef TYPE_1__ mainprog_info ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(png_structp VAR_0, png_infop VAR_1)
{
    mainprog_info *VAR_2;




    VAR_2 = FUNC_0(VAR_0);
    (*VAR_2->mainprog_finish_display)();




    (void)VAR_1;

    return;
}
