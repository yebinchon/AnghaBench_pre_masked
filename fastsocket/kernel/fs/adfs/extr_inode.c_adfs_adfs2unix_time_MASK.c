
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {unsigned int tv_sec; unsigned int tv_nsec; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ stamped; int loadaddr; unsigned int execaddr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct timespec VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct timespec *VAR_1, struct inode *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (FUNC_0(VAR_2)->stamped == 0)
  goto cur_time;

 VAR_3 = FUNC_0(VAR_2)->loadaddr << 24;
 VAR_4 = FUNC_0(VAR_2)->execaddr;

 VAR_3 |= VAR_4 >> 8;
 VAR_4 &= 255;


 if (VAR_3 < 0x336e996a)
  goto too_early;


 if (VAR_3 >= 0x656e9969)
  goto too_late;


 VAR_3 -= 0x336e996a;


 VAR_1->tv_sec = (((VAR_3 % 100) << 8) + VAR_4) / 100 + (VAR_3 / 100 << 8);
 VAR_1->tv_nsec = 0;
 return;

 cur_time:
 *VAR_1 = VAR_0;
 return;

 too_early:
 VAR_1->tv_sec = VAR_1->tv_nsec = 0;
 return;

 too_late:
 VAR_1->tv_sec = 0x7ffffffd;
 VAR_1->tv_nsec = 0;
 return;
}
