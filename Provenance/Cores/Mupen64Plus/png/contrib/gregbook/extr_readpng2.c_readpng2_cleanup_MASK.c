
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_structp ;
typedef scalar_t__ png_infop ;
struct TYPE_3__ {int * info_ptr; int * png_ptr; } ;
typedef TYPE_1__ mainprog_info ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int *) ;

void FUNC_1(mainprog_info *VAR_0)
{
    png_structp VAR_1 = (png_structp)VAR_0->png_ptr;
    png_infop VAR_2 = (png_infop)VAR_0->info_ptr;

    if (VAR_1 && VAR_2)
        FUNC_0(&VAR_1, &VAR_2, ((void*)0));

    VAR_0->png_ptr = ((void*)0);
    VAR_0->info_ptr = ((void*)0);
}
