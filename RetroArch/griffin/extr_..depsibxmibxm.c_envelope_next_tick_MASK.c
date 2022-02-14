
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct envelope {int loop_end_tick; int loop_start_tick; int sustain_tick; scalar_t__ sustain; scalar_t__ looped; } ;



__attribute__((used)) static int FUNC_0( struct envelope *VAR_0, int VAR_1, int VAR_2 ) {
 VAR_1++;
 if( VAR_0->looped && VAR_1 >= VAR_0->loop_end_tick ) {
  VAR_1 = VAR_0->loop_start_tick;
 }
 if( VAR_0->sustain && VAR_2 && VAR_1 >= VAR_0->sustain_tick ) {
  VAR_1 = VAR_0->sustain_tick;
 }
 return VAR_1;
}
