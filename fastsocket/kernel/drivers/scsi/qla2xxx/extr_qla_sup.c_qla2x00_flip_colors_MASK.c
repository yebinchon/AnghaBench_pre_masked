
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {scalar_t__ beacon_color_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void
FUNC_1(struct qla_hw_data *VAR_6, uint16_t *VAR_7)
{
 if (FUNC_0(VAR_6)) {

  if (VAR_6->beacon_color_state == VAR_4) {

   VAR_6->beacon_color_state = 0;
   *VAR_7 = VAR_0;
  } else {

   VAR_6->beacon_color_state = VAR_4;
   *VAR_7 = VAR_3;
  }
 } else {

  if (VAR_6->beacon_color_state == VAR_5) {

   VAR_6->beacon_color_state = 0;
   *VAR_7 = VAR_1;
  } else {

   VAR_6->beacon_color_state = VAR_5;
   *VAR_7 = VAR_2;
  }
 }
}
