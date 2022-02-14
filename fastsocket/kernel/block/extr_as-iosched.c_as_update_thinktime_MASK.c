
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_io_context {int ttime_samples; int ttime_total; int ttime_mean; } ;
struct as_data {int new_ttime_total; int new_ttime_mean; int exit_prob; } ;



__attribute__((used)) static void FUNC_0(struct as_data *VAR_0, struct as_io_context *VAR_1,
    unsigned long VAR_2)
{

 if (VAR_1->ttime_samples == 0) {
  VAR_0->new_ttime_total = (7*VAR_0->new_ttime_total + 256*VAR_2) / 8;
  VAR_0->new_ttime_mean = VAR_0->new_ttime_total / 256;

  VAR_0->exit_prob = (7*VAR_0->exit_prob)/8;
 }
 VAR_1->ttime_samples = (7*VAR_1->ttime_samples + 256) / 8;
 VAR_1->ttime_total = (7*VAR_1->ttime_total + 256*VAR_2) / 8;
 VAR_1->ttime_mean = (VAR_1->ttime_total + 128) / VAR_1->ttime_samples;
}
