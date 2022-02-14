
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct srp_rport {scalar_t__ roles; struct device dev; } ;
struct Scsi_Host {int active_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct Scsi_Host*,unsigned long) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;

void FUNC_6(struct srp_rport *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_3->parent);

 if (VAR_4->active_mode & VAR_0 &&
     VAR_2->roles == VAR_1)
  FUNC_3(VAR_4, (unsigned long)VAR_2);

 FUNC_5(VAR_3);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
}
