
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ filesysType; } ;
typedef TYPE_1__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*,int ) ;

uint32_t FUNC_1 (PARTITION* VAR_3, const uint8_t* VAR_4) {
 if (VAR_3->filesysType == VAR_2) {

  return FUNC_0(VAR_4,VAR_0) | (FUNC_0(VAR_4, VAR_1) << 16);
 } else {
  return FUNC_0(VAR_4,VAR_0);
 }
}
