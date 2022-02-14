
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng_unit {int * control; } ;
struct n2rng {int num_units; int hv_state; struct n2rng_unit* units; int wd_timeo; int accum_cycles; int health_check_sec; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct n2rng *VAR_9)
{
 int VAR_10;

 VAR_9->flags |= VAR_6;

 VAR_9->health_check_sec = VAR_7;
 VAR_9->accum_cycles = VAR_5;
 VAR_9->wd_timeo = VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_9->num_units; VAR_10++) {
  struct n2rng_unit *VAR_11 = &VAR_9->units[VAR_10];

  VAR_11->control[0] = VAR_0;
  VAR_11->control[1] = VAR_1;
  VAR_11->control[2] = VAR_2;
  VAR_11->control[3] = VAR_3;
 }

 VAR_9->hv_state = VAR_4;
}
