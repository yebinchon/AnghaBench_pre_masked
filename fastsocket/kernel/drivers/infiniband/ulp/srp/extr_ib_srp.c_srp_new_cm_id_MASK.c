
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_target_port {struct ib_cm_id* cm_id; TYPE_2__* srp_host; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_4__ {TYPE_1__* srp_dev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 struct ib_cm_id* FUNC_2 (int ,int ,struct srp_target_port*) ;
 int FUNC_3 (struct ib_cm_id*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct srp_target_port *VAR_1)
{
 struct ib_cm_id *VAR_2;

 VAR_2 = FUNC_2(VAR_1->srp_host->srp_dev->dev,
        VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 if (VAR_1->cm_id)
  FUNC_3(VAR_1->cm_id);
 VAR_1->cm_id = VAR_2;

 return 0;
}
