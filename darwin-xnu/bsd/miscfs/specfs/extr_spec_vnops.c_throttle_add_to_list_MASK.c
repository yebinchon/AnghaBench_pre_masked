
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct _throttle_io_info_t {int * throttle_uthlist; int * throttle_last_IO_timestamp; int * throttle_start_IO_period_timestamp; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int uu_on_throttlelist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct _throttle_io_info_t*,scalar_t__,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct _throttle_io_info_t *VAR_7, uthread_t VAR_8, int VAR_9, boolean_t VAR_10)
{
 boolean_t VAR_11 = VAR_0;
 int VAR_12 = VAR_3;

 if (FUNC_0(&VAR_7->throttle_uthlist[VAR_9])) {
  VAR_7->throttle_start_IO_period_timestamp[VAR_9] = VAR_7->throttle_last_IO_timestamp[VAR_9];
  VAR_11 = VAR_5;
 }

 if (VAR_10 == VAR_5)
  FUNC_2(&VAR_7->throttle_uthlist[VAR_9], VAR_8, VAR_6);
 else
  FUNC_1(&VAR_7->throttle_uthlist[VAR_9], VAR_8, VAR_6);

 VAR_8->uu_on_throttlelist = VAR_9;

 if (VAR_11 == VAR_5) {

  VAR_12 = FUNC_4(VAR_7, VAR_0, VAR_3);

  if (VAR_12 == VAR_1) {
   if (VAR_8->uu_on_throttlelist >= VAR_4) {
    FUNC_3(&VAR_7->throttle_uthlist[VAR_8->uu_on_throttlelist], VAR_8, VAR_6);

    VAR_8->uu_on_throttlelist = VAR_2;
   }
  }
 }
 return (VAR_12);
}
