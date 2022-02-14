
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef int png_structp ;
typedef int png_bytep ;
struct TYPE_3__ {int pass; int (* mainprog_display_row ) (size_t) ;int * row_pointers; } ;
typedef TYPE_1__ mainprog_info ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(png_structp VAR_0, png_bytep VAR_1,
                                  png_uint_32 VAR_2, int VAR_3)
{
    mainprog_info *VAR_4;





    if (!VAR_1)
        return;





    VAR_4 = FUNC_0(VAR_0);




    VAR_4->pass = VAR_3;






    FUNC_1(VAR_0, VAR_4->row_pointers[VAR_2],
      VAR_1);





    (*VAR_4->mainprog_display_row)(VAR_2);




    return;
}
