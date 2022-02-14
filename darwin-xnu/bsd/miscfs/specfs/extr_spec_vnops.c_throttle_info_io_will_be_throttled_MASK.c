
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct _throttle_io_info_t {int * throttle_window_start_timestamp; scalar_t__* throttle_inflight_count; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct timeval*) ;
 scalar_t__* VAR_7 ;
 int FUNC_1 (struct timeval*,int *) ;

int FUNC_2(void * VAR_8, int VAR_9)
{
     struct _throttle_io_info_t *VAR_10 = VAR_8;
 struct timeval VAR_11;
 uint64_t VAR_12;
 int VAR_13;
 int VAR_14;

        switch (VAR_9) {

        case 129:
                VAR_14 = VAR_6;
                break;
        case 128:
                VAR_14 = VAR_5;
                break;
        case 130:
                VAR_14 = VAR_4;
                break;
        default:
                VAR_14 = VAR_3;
  break;
 }
 for (VAR_13 = VAR_2; VAR_13 < VAR_14; VAR_13++) {
  if (VAR_10->throttle_inflight_count[VAR_13]) {
   break;
  }

  FUNC_0(&VAR_11);
  FUNC_1(&VAR_11, &VAR_10->throttle_window_start_timestamp[VAR_13]);
  VAR_12 = (uint64_t)VAR_11.tv_sec * (uint64_t)1000 + (VAR_11.tv_usec / 1000);

  if (VAR_12 < (uint64_t)VAR_7[VAR_14])
   break;
 }
 if (VAR_13 >= VAR_14) {




  return (VAR_0);
 }



 return (VAR_1);
}
