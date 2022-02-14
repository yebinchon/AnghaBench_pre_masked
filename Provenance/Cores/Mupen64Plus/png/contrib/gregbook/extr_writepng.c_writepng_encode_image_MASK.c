
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {int row_pointers; int * info_ptr; int * png_ptr; int jmpbuf; } ;
typedef TYPE_1__ mainprog_info ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(mainprog_info *VAR_0)
{
    png_structp VAR_1 = (png_structp)VAR_0->png_ptr;
    png_infop VAR_2 = (png_infop)VAR_0->info_ptr;





    if (FUNC_3(VAR_0->jmpbuf)) {
        FUNC_0(&VAR_1, &VAR_2);
        VAR_0->png_ptr = ((void*)0);
        VAR_0->info_ptr = ((void*)0);
        return 2;
    }





    FUNC_2(VAR_1, VAR_0->row_pointers);






    FUNC_1(VAR_1, ((void*)0));

    return 0;
}
