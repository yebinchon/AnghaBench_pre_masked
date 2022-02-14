
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct TYPE_22__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_20__ {int al_pa; int area; int domain; } ;
struct TYPE_21__ {TYPE_2__ b; } ;
struct TYPE_23__ {int flags; TYPE_3__ d_id; int loop_id; } ;
typedef TYPE_5__ fc_port_t ;
struct TYPE_19__ {int (* fabric_logout ) (TYPE_4__*,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(scsi_qla_host_t *VAR_5, fc_port_t *VAR_6,
    uint16_t *VAR_7)
{
 int VAR_8;
 int VAR_9;
 uint8_t VAR_10;
 struct qla_hw_data *VAR_11 = VAR_5->hw;

 VAR_8 = VAR_3;
 VAR_9 = 0;

 if (VAR_4 && FUNC_0(VAR_11)) {
  if (VAR_6->flags & VAR_1)
   return VAR_8;
  VAR_6->flags |= VAR_1;
  VAR_8 = FUNC_4(VAR_5, VAR_6, ((void*)0));
  if (!VAR_8)
   return VAR_8;
 }

 VAR_6->flags &= ~VAR_1;
 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_8 == VAR_3) {

  VAR_10 = 0;
  if (VAR_6->flags & VAR_2)
   VAR_10 |= VAR_0;
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_10);
  if (VAR_8 != VAR_3) {
   VAR_11->isp_ops->fabric_logout(VAR_5, VAR_6->loop_id,
       VAR_6->d_id.b.domain, VAR_6->d_id.b.area,
       VAR_6->d_id.b.al_pa);
   FUNC_3(VAR_5, VAR_6, 1, 0);
  } else {
   FUNC_5(VAR_5, VAR_6);
  }
 } else {

  FUNC_3(VAR_5, VAR_6, 1, 0);
 }

 return (VAR_8);
}
