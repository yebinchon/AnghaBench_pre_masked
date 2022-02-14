
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int lock; TYPE_1__* driver; } ;
struct chp_id {int dummy; } ;
struct chp_link {struct chp_id chpid; } ;
struct TYPE_2__ {int (* chp_event ) (struct subchannel*,struct chp_link*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chp_link*,int ,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct subchannel*,struct chp_link*,int ) ;

__attribute__((used)) static void FUNC_4(struct subchannel *VAR_2,
      struct chp_id VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct chp_link VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(struct chp_link));
 VAR_6.chpid = VAR_3;
 FUNC_1(VAR_2->lock, VAR_5);
 if (VAR_2->driver && VAR_2->driver->chp_event)
  VAR_2->driver->chp_event(VAR_2, &VAR_6,
           VAR_4 ? VAR_1 : VAR_0);
 FUNC_2(VAR_2->lock, VAR_5);
}
