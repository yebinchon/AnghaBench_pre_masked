
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_8__ {size_t* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ req; } ;
struct qlcnic_adapter {TYPE_3__* eswitch; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {scalar_t__ op_mode; } ;
struct TYPE_5__ {struct device dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,size_t,size_t) ;
 int FUNC_1 (struct device*,char*,size_t,size_t) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_5(struct qlcnic_adapter *VAR_6, u8 VAR_7,
     u8 VAR_8, u8 VAR_9)
{
 struct device *VAR_10 = &VAR_6->pdev->dev;
 struct qlcnic_cmd_args VAR_11;
 int VAR_12 = -VAR_1;
 u32 VAR_13;

 if (VAR_6->ahw->op_mode != VAR_3 ||
     !(VAR_6->eswitch[VAR_7].flags & VAR_5))
  return VAR_12;

 VAR_13 = VAR_7 | (VAR_8 ? VAR_0 : 0);
 VAR_13 |= VAR_9 << 8;

 FUNC_2(&VAR_11, VAR_6, VAR_2);
 VAR_11.req.arg[1] = VAR_13;
 VAR_12 = FUNC_4(VAR_6, &VAR_11);

 if (VAR_12 != VAR_4)
  FUNC_0(VAR_10, "Failed to configure port mirroring for vNIC function %d on eSwitch %d\n",
   VAR_9, VAR_7);
 else
  FUNC_1(VAR_10, "Configured port mirroring for vNIC function %d on eSwitch %d\n",
    VAR_9, VAR_7);
 FUNC_3(&VAR_11);

 return VAR_12;
}
