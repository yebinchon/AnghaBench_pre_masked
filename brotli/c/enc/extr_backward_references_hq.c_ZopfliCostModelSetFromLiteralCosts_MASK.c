
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {float* literal_costs_; float* cost_dist_; float* cost_cmd_; size_t num_bytes_; size_t distance_histogram_size; float min_cost_cmd_; } ;
typedef TYPE_1__ ZopfliCostModel ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t,size_t,int const*,float*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ZopfliCostModel* VAR_1,
                                               size_t VAR_2,
                                               const uint8_t* VAR_3,
                                               size_t VAR_4) {
  float* VAR_5 = VAR_1->literal_costs_;
  float VAR_6 = 0.0;
  float* VAR_7 = VAR_1->cost_dist_;
  float* VAR_8 = VAR_1->cost_cmd_;
  size_t VAR_9 = VAR_1->num_bytes_;
  size_t VAR_10;
  FUNC_0(VAR_2, VAR_9, VAR_4,
                                    VAR_3, &VAR_5[1]);
  VAR_5[0] = 0.0;
  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
    VAR_6 += VAR_5[VAR_10 + 1];
    VAR_5[VAR_10 + 1] = VAR_5[VAR_10] + VAR_6;
    VAR_6 -= VAR_5[VAR_10 + 1] - VAR_5[VAR_10];
  }
  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
    VAR_8[VAR_10] = (float)FUNC_1(11 + (uint32_t)VAR_10);
  }
  for (VAR_10 = 0; VAR_10 < VAR_1->distance_histogram_size; ++VAR_10) {
    VAR_7[VAR_10] = (float)FUNC_1(20 + (uint32_t)VAR_10);
  }
  VAR_1->min_cost_cmd_ = (float)FUNC_1(11);
}
