
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {TYPE_1__* port_hw_config; } ;
struct TYPE_5__ {int func_cfg; } ;
struct TYPE_4__ {int generic_features; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct bnx2x*,int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static bool FUNC_7(struct bnx2x *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 if (FUNC_4(VAR_4))
  return 0;

 if (FUNC_3(VAR_4) && !FUNC_2(VAR_4)) {

  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = FUNC_5(VAR_4, VAR_3[VAR_5].func_cfg);
  VAR_6 = !!(VAR_6 & VAR_0);
 } else {

  VAR_5 = FUNC_1(VAR_4);
  VAR_6 = FUNC_6(VAR_4,
          VAR_2.port_hw_config[VAR_5].generic_features);
  VAR_6 = !!(VAR_6 & VAR_1);
 }
 return VAR_6;
}
