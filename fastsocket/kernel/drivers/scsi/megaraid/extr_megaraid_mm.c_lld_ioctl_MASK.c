
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; scalar_t__ timedout; } ;
typedef TYPE_1__ uioc_t ;
struct timer_list {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_7__ {int (* issue_uioc ) (int ,TYPE_1__*,int ) ;int timeout; scalar_t__ quiescent; int drvr_data; } ;
typedef TYPE_2__ mraid_mmadp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (struct timer_list*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(mraid_mmadp_t *VAR_6, uioc_t *VAR_7)
{
 int VAR_8;
 struct timer_list VAR_9;
 struct timer_list *VAR_10 = ((void*)0);

 VAR_7->status = -VAR_0;
 VAR_8 = VAR_6->issue_uioc(VAR_6->drvr_data, VAR_7, VAR_2);

 if (VAR_8) return VAR_8;




 if (VAR_6->timeout > 0) {
  VAR_10 = &VAR_9;
  FUNC_2(VAR_10);

  VAR_10->function = VAR_4;
  VAR_10->data = (unsigned long)VAR_7;
  VAR_10->expires = VAR_3 + VAR_6->timeout * VAR_1;

  FUNC_0(VAR_10);
 }





 FUNC_4(VAR_5, (VAR_7->status != -VAR_0));
 if (VAR_10) {
  FUNC_1(VAR_10);
 }





 if (VAR_7->timedout) {
  VAR_6->quiescent = 0;
 }

 return VAR_7->status;
}
