
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_port_t ;
struct TYPE_2__ {int version; void (* pthread_clear_qos_tsd ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 void FUNC_0 (int ) ;

__attribute__((visibility("hidden")))
void
FUNC_1(mach_port_t VAR_1)
{
 if (VAR_0->version >= 3 &&
   VAR_0->pthread_clear_qos_tsd) {
  return VAR_0->pthread_clear_qos_tsd(VAR_1);
 }
}
