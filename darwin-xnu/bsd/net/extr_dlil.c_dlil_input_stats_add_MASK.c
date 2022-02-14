
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_stat_increment_param {scalar_t__ packets_in; scalar_t__ bytes_in; scalar_t__ errors_in; scalar_t__ packets_out; scalar_t__ bytes_out; scalar_t__ errors_out; scalar_t__ collisions; scalar_t__ dropped; } ;
struct dlil_threading_info {int tstats; struct ifnet_stat_increment_param stats; } ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(const struct ifnet_stat_increment_param *VAR_0,
    struct dlil_threading_info *VAR_1, boolean_t VAR_2)
{
 struct ifnet_stat_increment_param *VAR_3 = &VAR_1->stats;

 if (VAR_0->packets_in != 0)
  VAR_3->packets_in += VAR_0->packets_in;
 if (VAR_0->bytes_in != 0)
  VAR_3->bytes_in += VAR_0->bytes_in;
 if (VAR_0->errors_in != 0)
  VAR_3->errors_in += VAR_0->errors_in;

 if (VAR_0->packets_out != 0)
  VAR_3->packets_out += VAR_0->packets_out;
 if (VAR_0->bytes_out != 0)
  VAR_3->bytes_out += VAR_0->bytes_out;
 if (VAR_0->errors_out != 0)
  VAR_3->errors_out += VAR_0->errors_out;

 if (VAR_0->collisions != 0)
  VAR_3->collisions += VAR_0->collisions;
 if (VAR_0->dropped != 0)
  VAR_3->dropped += VAR_0->dropped;

 if (VAR_2)
  FUNC_0(&VAR_1->tstats, VAR_0->packets_in, VAR_0->bytes_in);
}
