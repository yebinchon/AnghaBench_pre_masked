
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ OPLL ;



uint32 FUNC_0(OPLL * VAR_0, uint32 VAR_1) {
 uint32 VAR_2;

 if (VAR_0) {
  VAR_2 = VAR_0->mask;
  VAR_0->mask = VAR_1;
  return VAR_2;
 } else
  return 0;
}
