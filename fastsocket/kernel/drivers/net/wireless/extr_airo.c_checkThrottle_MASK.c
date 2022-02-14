
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ authType; scalar_t__* rates; } ;
struct airo_info {TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct airo_info *VAR_2)
{
 int VAR_3;

 if (VAR_2->config.authType != VAR_0 && VAR_1) {
  for(VAR_3=0; VAR_3<8; VAR_3++) {
   if (VAR_2->config.rates[VAR_3] > VAR_1) {
    VAR_2->config.rates[VAR_3] = 0;
   }
  }
 }
}
