
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct cpudata {scalar_t__ prev_idle_time_us; int sample_ptr; void* prev_mperf; void* prev_aperf; void* prev_sample; TYPE_1__* samples; int cpu; } ;
typedef void* ktime_t ;
struct TYPE_2__ {void* mperf; void* aperf; void* idletime_us; int duration_us; void* end_time; void* start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cpudata*,TYPE_1__*) ;
 void* FUNC_2 () ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static inline void FUNC_5(struct cpudata *VAR_3)
{
 ktime_t VAR_4;
 u64 VAR_5;
 u64 VAR_6, VAR_7;

 VAR_4 = FUNC_2();
 VAR_5 = FUNC_0(VAR_3->cpu, ((void*)0));

 FUNC_4(VAR_0, VAR_6);
 FUNC_4(VAR_1, VAR_7);


 if (VAR_3->prev_idle_time_us > 0) {
  VAR_3->sample_ptr = (VAR_3->sample_ptr + 1) % VAR_2;
  VAR_3->samples[VAR_3->sample_ptr].start_time = VAR_3->prev_sample;
  VAR_3->samples[VAR_3->sample_ptr].end_time = VAR_4;
  VAR_3->samples[VAR_3->sample_ptr].duration_us =
   FUNC_3(VAR_4, VAR_3->prev_sample);
  VAR_3->samples[VAR_3->sample_ptr].idletime_us =
   VAR_5 - VAR_3->prev_idle_time_us;

  VAR_3->samples[VAR_3->sample_ptr].aperf = VAR_6;
  VAR_3->samples[VAR_3->sample_ptr].mperf = VAR_7;
  VAR_3->samples[VAR_3->sample_ptr].aperf -= VAR_3->prev_aperf;
  VAR_3->samples[VAR_3->sample_ptr].mperf -= VAR_3->prev_mperf;

  FUNC_1(VAR_3, &VAR_3->samples[VAR_3->sample_ptr]);
 }

 VAR_3->prev_sample = VAR_4;
 VAR_3->prev_idle_time_us = VAR_5;
 VAR_3->prev_aperf = VAR_6;
 VAR_3->prev_mperf = VAR_7;
}
