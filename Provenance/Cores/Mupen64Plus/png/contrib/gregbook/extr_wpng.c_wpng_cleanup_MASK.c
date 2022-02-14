
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * row_pointers; int * image_data; int * infile; int * outfile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    if (VAR_0.outfile) {
        FUNC_0(VAR_0.outfile);
        VAR_0.outfile = ((void*)0);
    }

    if (VAR_0.infile) {
        FUNC_0(VAR_0.infile);
        VAR_0.infile = ((void*)0);
    }

    if (VAR_0.image_data) {
        FUNC_1(VAR_0.image_data);
        VAR_0.image_data = ((void*)0);
    }

    if (VAR_0.row_pointers) {
        FUNC_1(VAR_0.row_pointers);
        VAR_0.row_pointers = ((void*)0);
    }
}
