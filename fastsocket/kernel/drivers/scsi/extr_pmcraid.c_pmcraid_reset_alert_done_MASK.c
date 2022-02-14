
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pmcraid_instance {TYPE_1__* host; int ioa_status; } ;
struct TYPE_4__ {unsigned long data; scalar_t__ expires; void (* function ) (unsigned long) ;} ;
struct pmcraid_cmd {scalar_t__ time_left; TYPE_2__ timer; struct pmcraid_instance* drv_inst; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_3)
{
 struct pmcraid_instance *VAR_4 = VAR_3->drv_inst;
 u32 VAR_5 = FUNC_1(VAR_4->ioa_status);
 unsigned long VAR_6;





 if (((VAR_5 & VAR_0) == 0) ||
     VAR_3->time_left <= 0) {
  FUNC_2("critical op is reset proceeding with reset\n");
  FUNC_4(VAR_4->host->host_lock, VAR_6);
  FUNC_3(VAR_3);
  FUNC_5(VAR_4->host->host_lock, VAR_6);
 } else {
  FUNC_2("critical op is not yet reset waiting again\n");

  VAR_3->time_left -= VAR_1;
  VAR_3->timer.data = (unsigned long)VAR_3;
  VAR_3->timer.expires = VAR_2 + VAR_1;
  VAR_3->timer.function =
   (void (*)(unsigned long))FUNC_6;
  FUNC_0(&VAR_3->timer);
 }
}
