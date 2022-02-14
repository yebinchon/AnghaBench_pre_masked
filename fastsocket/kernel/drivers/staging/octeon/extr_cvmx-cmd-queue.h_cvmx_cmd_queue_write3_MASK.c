
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_cmd_queue_result_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_5__ {int max_depth; scalar_t__ index; scalar_t__ pool_size_m1; int base_ptr_div128; int fpa_pool; } ;
typedef TYPE_1__ __cvmx_cmd_queue_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline cvmx_cmd_queue_result_t FUNC_9(cvmx_cmd_queue_id_t
           VAR_4,
           int VAR_5,
           uint64_t VAR_6,
           uint64_t VAR_7,
           uint64_t VAR_8)
{
 __cvmx_cmd_queue_state_t *VAR_9 = FUNC_0(VAR_4);


 if (FUNC_7(VAR_5))
  FUNC_1(VAR_4, VAR_9);






 if (VAR_0 && FUNC_8(VAR_9->max_depth)) {
  if (FUNC_8
      (FUNC_3(VAR_4) > (int)VAR_9->max_depth)) {
   if (FUNC_7(VAR_5))
    FUNC_2(VAR_9);
   return VAR_1;
  }
 }





 if (FUNC_7(VAR_9->index + 3 < VAR_9->pool_size_m1)) {
  uint64_t *VAR_10 =
      (uint64_t *) FUNC_5((uint64_t) VAR_9->
        base_ptr_div128 << 7);
  VAR_10 += VAR_9->index;
  VAR_9->index += 3;
  VAR_10[0] = VAR_6;
  VAR_10[1] = VAR_7;
  VAR_10[2] = VAR_8;
 } else {
  uint64_t *VAR_11;





  int VAR_12 = VAR_9->pool_size_m1 - VAR_9->index;




  uint64_t *VAR_13 =
      (uint64_t *) FUNC_4(VAR_9->fpa_pool);
  if (FUNC_8(VAR_13 == ((void*)0))) {
   if (FUNC_7(VAR_5))
    FUNC_2(VAR_9);
   return VAR_2;
  }
  VAR_12--;
  VAR_11 =
      (uint64_t *) FUNC_5((uint64_t) VAR_9->
        base_ptr_div128 << 7);
  VAR_11 += VAR_9->index;
  *VAR_11++ = VAR_6;
  if (VAR_12) {
   *VAR_11++ = VAR_7;
   if (VAR_12 > 1)
    *VAR_11++ = VAR_8;
  }
  *VAR_11 = FUNC_6(VAR_13);





  VAR_9->base_ptr_div128 = *VAR_11 >> 7;
  VAR_9->index = 0;
  VAR_11 = VAR_13;
  if (VAR_12 == 0) {
   *VAR_11++ = VAR_7;
   VAR_9->index++;
  }
  if (VAR_12 < 2) {
   *VAR_11++ = VAR_8;
   VAR_9->index++;
  }
 }


 if (FUNC_7(VAR_5))
  FUNC_2(VAR_9);
 return VAR_3;
}
