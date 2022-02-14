
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_reservation_flags; int dev_reservation_lock; TYPE_1__* transport; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ transport_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct se_device*,char*) ;
 int FUNC_4 (struct se_device*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct se_device *VAR_2,
  char *VAR_3)
{
 int VAR_4;

 if (VAR_2->transport->transport_type == VAR_1)
  return FUNC_2(VAR_3, "Passthrough\n");

 FUNC_0(&VAR_2->dev_reservation_lock);
 if (VAR_2->dev_reservation_flags & VAR_0)
  VAR_4 = FUNC_3(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_4(VAR_2, VAR_3);
 FUNC_1(&VAR_2->dev_reservation_lock);
 return VAR_4;
}
