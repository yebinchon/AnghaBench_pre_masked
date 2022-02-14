
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_device {int dev_reservation_flags; int dev_reservation_lock; TYPE_2__* transport; TYPE_1__* se_hba; } ;
struct se_cmd {int se_sess; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {scalar_t__ transport_type; } ;
struct TYPE_3__ {int hba_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*) ;

sense_reason_t
FUNC_4(struct se_cmd *VAR_3)
{
 struct se_device *VAR_4 = VAR_3->se_dev;
 sense_reason_t VAR_5;

 if (!VAR_3->se_sess)
  return 0;
 if (VAR_4->se_hba->hba_flags & VAR_1)
  return 0;
 if (VAR_4->transport->transport_type == VAR_2)
  return 0;

 FUNC_0(&VAR_4->dev_reservation_lock);
 if (VAR_4->dev_reservation_flags & VAR_0)
  VAR_5 = FUNC_2(VAR_3);
 else
  VAR_5 = FUNC_3(VAR_3);
 FUNC_1(&VAR_4->dev_reservation_lock);

 return VAR_5;
}
