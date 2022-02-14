
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ccv_point_t ;
struct TYPE_7__ {int structs; int features; int * fern; } ;
typedef TYPE_2__ ccv_ferns_t ;
struct TYPE_6__ {unsigned char* u8; } ;
struct TYPE_8__ {int type; TYPE_1__ data; } ;
typedef TYPE_3__ ccv_dense_matrix_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void FUNC_3(ccv_ferns_t* VAR_2, ccv_dense_matrix_t* VAR_3, int VAR_4, uint32_t* VAR_5)
{
 ccv_point_t* VAR_6 = VAR_2->fern + VAR_4 * VAR_2->structs * VAR_2->features * 2;
 int VAR_7, VAR_8;
 unsigned char* VAR_9 = VAR_3->data.u8;
 FUNC_1(FUNC_0(VAR_3->type) == VAR_0);
 FUNC_2(VAR_3->type, VAR_1);

}
