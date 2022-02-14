
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct _throttle_io_info_t {scalar_t__ throttle_io_count; scalar_t__ throttle_io_count_begin; int * throttle_window_start_timestamp; scalar_t__* throttle_inflight_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int *) ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_3(void * VAR_6, int * VAR_7, int * VAR_8)
{
     struct _throttle_io_info_t *VAR_9 = VAR_6;
 struct timeval VAR_10;
 struct timeval VAR_11;
 uint64_t VAR_12;
 int VAR_13;
 int VAR_14;

 if ((VAR_13 = FUNC_1(((void*)0))) < VAR_3)
  return (VAR_0);

 FUNC_0(&VAR_11);

 for (VAR_14 = VAR_2; VAR_14 < VAR_13; VAR_14++) {
  if (VAR_9->throttle_inflight_count[VAR_14]) {
   break;
  }
  VAR_10 = VAR_11;
  FUNC_2(&VAR_10, &VAR_9->throttle_window_start_timestamp[VAR_14]);
  VAR_12 = (uint64_t)VAR_10.tv_sec * (uint64_t)1000 + (VAR_10.tv_usec / 1000);

  if (VAR_12 < (uint64_t)VAR_5[VAR_13])
   break;
 }
 if (VAR_14 >= VAR_13) {





  return (VAR_0);
 }
 if (VAR_7)
  *VAR_7 = VAR_13;
 if (VAR_8)
  *VAR_8 = VAR_14;

 if (VAR_9->throttle_io_count != VAR_9->throttle_io_count_begin) {




  return (VAR_4);
 }




 return (VAR_1);
}
