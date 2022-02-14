
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cmd; } ;
typedef TYPE_1__ ccv_nnc_cmd_t ;
struct TYPE_6__ {int (* allow_inplace ) (int const,int const,int const,int const) ;} ;
typedef TYPE_2__ ccv_nnc_cmd_registry_t ;
struct TYPE_7__ {TYPE_2__ registry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int const,int const,int const,int const) ;

int FUNC_2(const ccv_nnc_cmd_t VAR_6, const int VAR_7, const int VAR_8, const int VAR_9, const int VAR_10)
{
 if (VAR_6.cmd == VAR_4 || VAR_6.cmd == VAR_1 || VAR_6.cmd == VAR_0 || VAR_6.cmd == VAR_3 || VAR_6.cmd == VAR_2)
  return 0;
 const int VAR_11 = FUNC_0(VAR_6.cmd);
 const ccv_nnc_cmd_registry_t VAR_12 = VAR_5[VAR_11].registry;
 if (VAR_12.allow_inplace)
  return VAR_12.allow_inplace(VAR_7, VAR_8, VAR_9, VAR_10);
 return 0;
}
