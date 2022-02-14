
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct as_data* elevator_data; } ;
struct as_data {int exit_prob; int exit_no_coop; unsigned long long new_ttime_mean; scalar_t__ new_seek_mean; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_1(struct elevator_queue *VAR_0, char *VAR_1)
{
 struct as_data *VAR_2 = VAR_0->elevator_data;
 int VAR_3 = 0;

 VAR_3 += FUNC_0(VAR_1+VAR_3, "%lu %% exit probability\n",
    100*VAR_2->exit_prob/256);
 VAR_3 += FUNC_0(VAR_1+VAR_3, "%lu %% probability of exiting without a "
    "cooperating process submitting IO\n",
    100*VAR_2->exit_no_coop/256);
 VAR_3 += FUNC_0(VAR_1+VAR_3, "%lu ms new thinktime\n", VAR_2->new_ttime_mean);
 VAR_3 += FUNC_0(VAR_1+VAR_3, "%llu sectors new seek distance\n",
    (unsigned long long)VAR_2->new_seek_mean);

 return VAR_3;
}
