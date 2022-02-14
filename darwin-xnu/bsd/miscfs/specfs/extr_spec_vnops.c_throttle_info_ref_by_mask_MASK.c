
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int throttle_info_handle_t ;
struct _throttle_io_info_t {int dummy; } ;


 int VAR_0 ;
 struct _throttle_io_info_t* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct _throttle_io_info_t*) ;

int
FUNC_2(uint64_t VAR_2, throttle_info_handle_t *VAR_3)
{
 int VAR_4;
 struct _throttle_io_info_t *VAR_5;

 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = &VAR_1[VAR_4];
 FUNC_1(VAR_5);
 *(struct _throttle_io_info_t**)VAR_3 = VAR_5;

 return 0;
}
