
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ format; int* dim; } ;
typedef TYPE_4__ ccv_nnc_tensor_param_t ;
struct TYPE_13__ {int* dim; } ;
struct TYPE_11__ {int* begin; int* end; } ;
struct TYPE_15__ {TYPE_3__ stride; TYPE_1__ border; } ;
typedef TYPE_5__ ccv_nnc_hint_t ;
struct TYPE_12__ {int* dim; } ;
struct TYPE_16__ {TYPE_2__ size; } ;
typedef TYPE_6__ ccv_nnc_cmd_param_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

int FUNC_2(const ccv_nnc_hint_t VAR_4, const ccv_nnc_cmd_param_t VAR_5, const ccv_nnc_tensor_param_t VAR_6, const ccv_nnc_tensor_param_t VAR_7)
{
 int VAR_8;
 FUNC_0(VAR_6.format == VAR_7.format);
 const int VAR_9 = FUNC_1(VAR_6.dim);
 FUNC_0(VAR_9 == VAR_0 + 1 || VAR_9 == VAR_0 + 2);
 int VAR_10;
 if ((VAR_6.format == VAR_1) ||
  (VAR_6.format == VAR_3 && VAR_9 == VAR_0 + 1))
  VAR_10 = 0;
 else if ((VAR_6.format == VAR_3 && VAR_9 == VAR_0 + 2) ||
    (VAR_6.format == VAR_2 && VAR_9 == VAR_0 + 1))
  VAR_10 = 1;
 else if (VAR_6.format == VAR_2 && VAR_9 == VAR_0 + 2)
  VAR_10 = 2;
 else
  FUNC_0(0 && "unknown format");
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
 {
  if ((VAR_4.border.begin[VAR_8] + VAR_4.border.end[VAR_8] + VAR_6.dim[VAR_8] - VAR_5.size.dim[VAR_8]) % VAR_4.stride.dim[VAR_8] != 0)
   return -1;
  int VAR_11 = (VAR_4.border.begin[VAR_8] + VAR_4.border.end[VAR_8] + VAR_6.dim[VAR_8 + VAR_10] - VAR_5.size.dim[VAR_8]) / VAR_4.stride.dim[VAR_8] + 1;
  if (VAR_11 != VAR_7.dim[VAR_8 + VAR_10])
   return -1;
 }
 return 0;
}
