
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* work_interval_t ;
typedef scalar_t__ uint64_t ;
typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int create_flags; scalar_t__ work_interval_id; int wi_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

int
FUNC_4(work_interval_t VAR_6)
{
 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_0;
  return -1;
 }

 if (VAR_6->create_flags & VAR_3) {
  mach_port_t VAR_7 = VAR_6->wi_port;
  kern_return_t VAR_8 = FUNC_2(FUNC_3(), VAR_7);

  if (VAR_8 != VAR_1) {







   VAR_5 = VAR_0;
   return -1;
  }

  VAR_6->wi_port = VAR_2;
  VAR_6->work_interval_id = 0;

  FUNC_1(VAR_6);
  return 0;
 } else {
  uint64_t VAR_9 = VAR_6->work_interval_id;

  int VAR_10 = FUNC_0(VAR_4,
                                VAR_9, ((void*)0), 0);

  VAR_6->work_interval_id = 0;

  int VAR_11 = VAR_5;
  FUNC_1(VAR_6);
  VAR_5 = VAR_11;
  return VAR_10;
 }
}
