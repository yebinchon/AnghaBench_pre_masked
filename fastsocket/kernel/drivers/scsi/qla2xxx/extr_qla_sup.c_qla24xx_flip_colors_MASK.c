
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {scalar_t__ beacon_color_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_0(struct qla_hw_data *VAR_3, uint16_t *VAR_4)
{

 if (VAR_3->beacon_color_state == VAR_2) {

  VAR_3->beacon_color_state = 0;
  *VAR_4 = 0;
 } else {

  VAR_3->beacon_color_state = VAR_2;
  *VAR_4 = VAR_1 | VAR_0;
 }
}
