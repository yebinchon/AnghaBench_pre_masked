
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_io_context {unsigned long last_end_request; int ttime_samples; int ttime_total; int ttime_mean; } ;
struct cfq_data {unsigned long cfq_slice_idle; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_1(struct cfq_data *VAR_1, struct cfq_io_context *VAR_2)
{
 unsigned long VAR_3 = VAR_0 - VAR_2->last_end_request;
 unsigned long VAR_4 = FUNC_0(VAR_3, 2UL * VAR_1->cfq_slice_idle);

 VAR_2->ttime_samples = (7*VAR_2->ttime_samples + 256) / 8;
 VAR_2->ttime_total = (7*VAR_2->ttime_total + 256*VAR_4) / 8;
 VAR_2->ttime_mean = (VAR_2->ttime_total + 128) / VAR_2->ttime_samples;
}
