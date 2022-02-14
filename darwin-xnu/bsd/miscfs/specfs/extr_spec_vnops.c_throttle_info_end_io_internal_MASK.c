
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _throttle_io_info_t {scalar_t__* throttle_inflight_count; int * throttle_window_start_timestamp; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
void FUNC_3(struct _throttle_io_info_t *VAR_1, int VAR_2) {
 if (VAR_2 == VAR_0) {
  return;
 }

 FUNC_2(&VAR_1->throttle_window_start_timestamp[VAR_2]);
 FUNC_0(&VAR_1->throttle_inflight_count[VAR_2]);
 FUNC_1(VAR_1->throttle_inflight_count[VAR_2] >= 0);
}
