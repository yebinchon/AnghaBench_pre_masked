
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct clocksource {int cycle_last; int fsys_mmio; int shift; int mult; int mask; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {int lock; TYPE_2__ monotonic_time; TYPE_1__ wall_time; int clk_cycle_last; int clk_fsys_mmio; int clk_shift; int clk_mult; int clk_mask; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct timespec *VAR_3, struct clocksource *VAR_4)
{
        unsigned long VAR_5;

        FUNC_0(&VAR_1.lock, VAR_5);


        VAR_1.clk_mask = VAR_4->mask;
        VAR_1.clk_mult = VAR_4->mult;
        VAR_1.clk_shift = VAR_4->shift;
        VAR_1.clk_fsys_mmio = VAR_4->fsys_mmio;
        VAR_1.clk_cycle_last = VAR_4->cycle_last;


        VAR_1.wall_time.tv_sec = VAR_3->tv_sec;
        VAR_1.wall_time.tv_nsec = VAR_3->tv_nsec;
        VAR_1.monotonic_time.tv_sec = VAR_2.tv_sec
       + VAR_3->tv_sec;
        VAR_1.monotonic_time.tv_nsec = VAR_2.tv_nsec
       + VAR_3->tv_nsec;


 while (VAR_1.monotonic_time.tv_nsec >= VAR_0) {
  VAR_1.monotonic_time.tv_nsec -= VAR_0;
  VAR_1.monotonic_time.tv_sec++;
 }

        FUNC_1(&VAR_1.lock, VAR_5);
}
