
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pmcraid_instance {TYPE_1__* host; int pdev; } ;
struct TYPE_4__ {scalar_t__ expires; unsigned long data; void (* function ) (unsigned long) ;} ;
struct pmcraid_cmd {scalar_t__ time_left; TYPE_2__ timer; struct pmcraid_instance* drv_inst; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_4)
{
 struct pmcraid_instance *VAR_5 = VAR_4->drv_inst;
 unsigned long VAR_6;
 int VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_1(VAR_5->pdev, VAR_1, &VAR_8);


 if ((VAR_7 != VAR_0 || (!(VAR_8 & VAR_2))) &&
     VAR_4->time_left > 0) {
  FUNC_2("BIST not complete, waiting another 2 secs\n");
  VAR_4->timer.expires = VAR_3 + VAR_4->time_left;
  VAR_4->time_left = 0;
  VAR_4->timer.data = (unsigned long)VAR_4;
  VAR_4->timer.function =
   (void (*)(unsigned long))FUNC_6;
  FUNC_0(&VAR_4->timer);
 } else {
  VAR_4->time_left = 0;
  FUNC_2("BIST is complete, proceeding with reset\n");
  FUNC_4(VAR_5->host->host_lock, VAR_6);
  FUNC_3(VAR_4);
  FUNC_5(VAR_5->host->host_lock, VAR_6);
 }
}
