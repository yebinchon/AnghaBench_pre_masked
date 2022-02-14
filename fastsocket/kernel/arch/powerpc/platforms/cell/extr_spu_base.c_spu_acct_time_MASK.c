
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {unsigned long long* times; int util_state; scalar_t__ tstamp; } ;
struct spu {TYPE_1__ stats; } ;
typedef enum spu_utilization_state { ____Placeholder_spu_utilization_state } spu_utilization_state ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 scalar_t__ FUNC_1 (struct timespec*) ;

__attribute__((used)) static unsigned long long FUNC_2(struct spu *VAR_1,
  enum spu_utilization_state VAR_2)
{
 struct timespec VAR_3;
 unsigned long long VAR_4 = VAR_1->stats.times[VAR_2];






 if (VAR_1->stats.util_state == VAR_2) {
  FUNC_0(&VAR_3);
  VAR_4 += FUNC_1(&VAR_3) - VAR_1->stats.tstamp;
 }

 return VAR_4 / VAR_0;
}
