
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numCB; int dim; scalar_t__ codebook; } ;
typedef TYPE_1__ elbg_data ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_1(elbg_data *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4=0, VAR_5, VAR_6 = VAR_0;
    for (VAR_3=0; VAR_3<VAR_1->numCB; VAR_3++)
        if (VAR_3 != VAR_2) {
            VAR_5 = FUNC_0(VAR_1->codebook + VAR_3*VAR_1->dim, VAR_1->codebook + VAR_2*VAR_1->dim, VAR_1->dim, VAR_6);
            if (VAR_5 < VAR_6) {
                VAR_4 = VAR_3;
                VAR_6 = VAR_5;
            }
        }
    return VAR_4;
}
