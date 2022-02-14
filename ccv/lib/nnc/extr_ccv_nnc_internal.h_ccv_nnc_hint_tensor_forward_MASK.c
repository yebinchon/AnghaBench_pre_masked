
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ format; int* dim; } ;
typedef TYPE_4__ ccv_nnc_tensor_param_t ;
struct TYPE_13__ {int* begin; int* end; } ;
struct TYPE_12__ {int * dim; } ;
struct TYPE_16__ {TYPE_2__ border; TYPE_1__ stride; } ;
typedef TYPE_5__ ccv_nnc_hint_t ;
struct TYPE_14__ {int* dim; } ;
struct TYPE_17__ {TYPE_3__ size; } ;
typedef TYPE_6__ ccv_nnc_cmd_param_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__ const,int const) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static inline void FUNC_4(const ccv_nnc_cmd_param_t VAR_1, const ccv_nnc_tensor_param_t VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_2.format == VAR_4->format);
 const int VAR_6 = FUNC_3(VAR_2.dim);
 FUNC_0(VAR_6 == VAR_0 + 1 || VAR_6 == VAR_0 + 2);
 int VAR_7 = FUNC_2(VAR_2, VAR_6);
 FUNC_0(VAR_7 >= 0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  int VAR_8 = FUNC_1(1, VAR_3.stride.dim[VAR_5]);
  VAR_4->dim[VAR_5 + VAR_7] = (VAR_2.dim[VAR_5 + VAR_7] + VAR_3.border.begin[VAR_5] + VAR_3.border.end[VAR_5] - VAR_1.size.dim[VAR_5]) / VAR_8 + 1;
 }
}
