
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulg ;
typedef int uch ;
typedef int png_structp ;
typedef int png_infop ;
struct TYPE_3__ {int * info_ptr; int * png_ptr; int jmpbuf; } ;
typedef TYPE_1__ mainprog_info ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(mainprog_info *VAR_0, uch *VAR_1, ulg VAR_2)
{
    png_structp VAR_3 = (png_structp)VAR_0->png_ptr;
    png_infop VAR_4 = (png_infop)VAR_0->info_ptr;





    if (FUNC_2(VAR_0->jmpbuf)) {
        FUNC_0(&VAR_3, &VAR_4, ((void*)0));
        VAR_0->png_ptr = ((void*)0);
        VAR_0->info_ptr = ((void*)0);
        return 2;
    }




    FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2);

    return 0;
}
