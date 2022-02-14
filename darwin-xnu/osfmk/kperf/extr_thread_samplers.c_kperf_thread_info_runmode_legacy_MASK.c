
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_6__ {TYPE_1__* active_thread; } ;
struct TYPE_5__ {int state; TYPE_2__* last_processor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static uint32_t
FUNC_0(thread_t VAR_14)
{
 uint32_t VAR_15 = 0;
 int VAR_16 = VAR_14->state;
 processor_t VAR_17 = VAR_14->last_processor;

 if ((VAR_17 != VAR_7) && (VAR_14 == VAR_17->active_thread)) {
  VAR_15 |= VAR_2;
 }
 if (VAR_16 & VAR_9) {
  VAR_15 |= VAR_1;
 }
 if (VAR_16 & VAR_13) {
  VAR_15 |= VAR_6;
 }
 if (VAR_16 & VAR_12) {
  VAR_15 |= VAR_5;
 }
 if (VAR_16 & VAR_10) {
  VAR_15 |= VAR_3;
 }
 if (VAR_16 & VAR_11) {
  VAR_15 |= VAR_4;
 }
 if (VAR_16 & VAR_8) {
  VAR_15 |= VAR_0;
 }



 if (VAR_15 == 0) {
  return (VAR_8 << 16);
 }



 return (((~VAR_15 & 0xffff) << 16) | (VAR_15 & 0xffff));
}
