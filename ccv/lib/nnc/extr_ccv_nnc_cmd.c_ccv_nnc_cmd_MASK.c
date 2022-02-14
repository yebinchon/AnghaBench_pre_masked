
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ccv_nnc_cmd_vtab_t ;
struct TYPE_3__ {scalar_t__ cmd; int algorithm; int * isa; int backend; int info; } ;
typedef TYPE_1__ ccv_nnc_cmd_t ;
typedef int ccv_nnc_cmd_param_t ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

ccv_nnc_cmd_t FUNC_1(const uint32_t VAR_2, ccv_nnc_cmd_vtab_t* const VAR_3, const ccv_nnc_cmd_param_t VAR_4, const int VAR_5)
{
 ccv_nnc_cmd_t VAR_6;
 VAR_6.info = VAR_4;
 VAR_6.backend = VAR_1;
 FUNC_0((VAR_2 == VAR_0 && VAR_3) || (VAR_2 != VAR_0 && !VAR_3));
 VAR_6.cmd = VAR_2;
 VAR_6.algorithm = -1;
 VAR_6.isa = VAR_3;
 return VAR_6;
}
