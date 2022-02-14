
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_memstat_state; int p_memstat_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static uint32_t
FUNC_0(proc_t VAR_12) {
 uint32_t VAR_13 = 0;


 if (VAR_12->p_memstat_state & VAR_5) {
  VAR_13 |= VAR_9;
 }
 if (VAR_12->p_memstat_state & VAR_3) {
  VAR_13 |= VAR_7;
 }
 if (VAR_12->p_memstat_state & VAR_4) {
   VAR_13 |= VAR_11;
 }


 if (VAR_12->p_memstat_dirty & VAR_2) {
  VAR_13 |= VAR_10;
 }
 if ((VAR_12->p_memstat_dirty & VAR_0) == VAR_0) {
  VAR_13 |= VAR_8;
 }
 if (VAR_12->p_memstat_dirty & VAR_1) {
  VAR_13 |= VAR_6;
 }

 return VAR_13;
}
