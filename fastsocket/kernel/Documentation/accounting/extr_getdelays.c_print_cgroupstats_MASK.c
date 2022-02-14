
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroupstats {scalar_t__ nr_uninterruptible; scalar_t__ nr_stopped; scalar_t__ nr_running; scalar_t__ nr_io_wait; scalar_t__ nr_sleeping; } ;


 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct cgroupstats *VAR_0)
{
 FUNC_0("sleeping %llu, blocked %llu, running %llu, stopped %llu, "
  "uninterruptible %llu\n", (unsigned long long)VAR_0->nr_sleeping,
  (unsigned long long)VAR_0->nr_io_wait,
  (unsigned long long)VAR_0->nr_running,
  (unsigned long long)VAR_0->nr_stopped,
  (unsigned long long)VAR_0->nr_uninterruptible);
}
