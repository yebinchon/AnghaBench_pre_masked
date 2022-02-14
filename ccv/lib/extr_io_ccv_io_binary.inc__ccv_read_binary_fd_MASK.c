
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* u8; } ;
struct TYPE_6__ {int step; int rows; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int,int,int ,int ) ;
 int FUNC_1 (int*,int,int,int *) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(FILE* VAR_1, ccv_dense_matrix_t** VAR_2, int VAR_3)
{
 FUNC_2(VAR_1, 8, VAR_0);
 FUNC_1(&VAR_3, 1, 4, VAR_1);
 int VAR_4, VAR_5;
 FUNC_1(&VAR_4, 1, 4, VAR_1);
 FUNC_1(&VAR_5, 1, 4, VAR_1);
 *VAR_2 = FUNC_0(VAR_4, VAR_5, VAR_3, 0, 0);
 FUNC_1((*VAR_2)->data.u8, 1, (*VAR_2)->step * (*VAR_2)->rows, VAR_1);
}
