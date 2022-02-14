
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
struct TYPE_14__ {int* begin; int* end; } ;
struct TYPE_12__ {int* dim; } ;
struct TYPE_16__ {TYPE_3__ border; TYPE_1__ stride; } ;
typedef TYPE_5__ ccv_nnc_hint_t ;
struct TYPE_13__ {int* dim; } ;
struct TYPE_17__ {TYPE_2__ size; } ;
typedef TYPE_6__ ccv_nnc_cmd_param_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int*) ;

ccv_nnc_hint_t FUNC_2(const ccv_nnc_cmd_param_t VAR_5, const ccv_nnc_tensor_param_t VAR_6, const ccv_nnc_tensor_param_t VAR_7)
{
 int VAR_8;
 if (VAR_6.format != VAR_7.format)
  return VAR_4;
 FUNC_0(VAR_6.format == VAR_7.format);
 const int VAR_9 = FUNC_1(VAR_6.dim);
 const int VAR_10 = FUNC_1(VAR_7.dim);

 if (VAR_9 != VAR_10 || (VAR_9 != VAR_0 + 1 && VAR_9 != VAR_0 + 2))
  return VAR_4;
 int VAR_11;
 if ((VAR_6.format == VAR_1) ||
  (VAR_6.format == VAR_3 && VAR_9 == VAR_0 + 1))
  VAR_11 = 0;
 else if ((VAR_6.format == VAR_3 && VAR_9 == VAR_0 + 2) ||
    (VAR_6.format == VAR_2 && VAR_9 == VAR_0 + 1))
  VAR_11 = 1;
 else if (VAR_6.format == VAR_2 && VAR_9 == VAR_0 + 2)
  VAR_11 = 2;
 else
  FUNC_0(0 && "unknown format");
 ccv_nnc_hint_t VAR_12 = {};

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
 {

  FUNC_0(VAR_6.dim[VAR_8 + VAR_11] && VAR_7.dim[VAR_8 + VAR_11]);

  int VAR_13 = (VAR_6.dim[VAR_8 + VAR_11] + VAR_7.dim[VAR_8 + VAR_11] / 2) / VAR_7.dim[VAR_8 + VAR_11];
  VAR_12.stride.dim[VAR_8] = VAR_13;
  int VAR_14 = (VAR_7.dim[VAR_8 + VAR_11] - 1) * VAR_13 - VAR_6.dim[VAR_8 + VAR_11] + VAR_5.size.dim[VAR_8];
  VAR_12.border.begin[VAR_8] = (VAR_14 + 1) / 2;
  VAR_12.border.end[VAR_8] = VAR_14 - VAR_12.border.begin[VAR_8];
 }
 return VAR_12;
}
