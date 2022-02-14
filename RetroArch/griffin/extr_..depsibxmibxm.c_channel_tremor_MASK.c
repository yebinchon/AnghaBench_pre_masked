
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {scalar_t__ retrig_count; scalar_t__ tremor_on_ticks; int tremolo_add; scalar_t__ tremor_off_ticks; } ;



__attribute__((used)) static void FUNC_0( struct channel *VAR_0 ) {
 if( VAR_0->retrig_count >= VAR_0->tremor_on_ticks ) {
  VAR_0->tremolo_add = -64;
 }
 if( VAR_0->retrig_count >= ( VAR_0->tremor_on_ticks + VAR_0->tremor_off_ticks ) ) {
  VAR_0->tremolo_add = VAR_0->retrig_count = 0;
 }
}
