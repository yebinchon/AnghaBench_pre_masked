
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int off_t ;
struct TYPE_9__ {int * u8; } ;
struct TYPE_10__ {int datatype; int dim; } ;
struct TYPE_11__ {int off; TYPE_2__ data; int inc; TYPE_3__ info; } ;
typedef TYPE_4__ ccv_nnc_tensor_view_t ;
struct TYPE_8__ {int * u8; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
typedef TYPE_5__ ccv_nnc_tensor_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static inline void FUNC_2(ccv_nnc_tensor_view_t* const VAR_1, const ccv_nnc_tensor_t* const VAR_2, const int VAR_3[VAR_0], const int VAR_4[VAR_0], const int VAR_5[VAR_0])
{
 FUNC_1(VAR_1->inc, VAR_5, sizeof(int) * VAR_0);
 FUNC_1(VAR_1->info.dim, VAR_3, sizeof(int) * VAR_0);
 uint8_t* const VAR_6 = VAR_2->data.u8;
 const off_t VAR_7 = VAR_1->off = FUNC_0(VAR_1->info.datatype, VAR_1->inc, VAR_4);
 VAR_1->data.u8 = VAR_6 + VAR_7;
}
