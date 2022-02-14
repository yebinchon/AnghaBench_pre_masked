
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int tb_update_count; int stamp_sec_fraction; struct timespec stamp_xtime; int wtom_clock_nsec; int wtom_clock_sec; void* tb_to_xs; void* stamp_xsec; void* tb_orig_stamp; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(u64 VAR_1, u64 VAR_2,
          u64 VAR_3, struct timespec *VAR_4,
          struct timespec *VAR_5,
          u32 VAR_6)
{
 VAR_0->tb_orig_stamp = VAR_1;
 VAR_0->stamp_xsec = VAR_2;
 VAR_0->tb_to_xs = VAR_3;
 VAR_0->wtom_clock_sec = VAR_4->tv_sec;
 VAR_0->wtom_clock_nsec = VAR_4->tv_nsec;
 VAR_0->stamp_xtime = *VAR_5;
 VAR_0->stamp_sec_fraction = VAR_6;
 FUNC_0();
 ++(VAR_0->tb_update_count);
}
