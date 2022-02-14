
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_ccw_req {scalar_t__ status; void (* function ) (struct dasd_ccw_req*,char*) ;TYPE_2__* startdev; int lpm; int flags; } ;
struct TYPE_3__ {int opm; } ;
struct TYPE_4__ {TYPE_1__ path_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct dasd_ccw_req * VAR_4, char *VAR_5)
{
 if (VAR_5[25] & VAR_3) {
  FUNC_0(VAR_4);

  if (VAR_4->status == VAR_0 &&
      !FUNC_1(VAR_2, &VAR_4->flags)) {


   VAR_4->lpm = VAR_4->startdev->path_data.opm;
   VAR_4->status = VAR_1;
  }
 }

 VAR_4->function = FUNC_2;

}
