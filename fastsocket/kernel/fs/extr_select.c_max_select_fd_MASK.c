
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fdtable {TYPE_1__* open_fds; } ;
typedef int fd_set_bits ;
struct TYPE_4__ {int files; } ;
struct TYPE_3__ {unsigned long* fds_bits; } ;


 unsigned long FUNC_0 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct fdtable* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3, fd_set_bits *VAR_4)
{
 unsigned long *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 struct fdtable *VAR_8;


 VAR_6 = ~(~0UL << (VAR_3 & (VAR_1-1)));
 VAR_3 /= VAR_1;
 VAR_8 = FUNC_1(VAR_2->files);
 VAR_5 = VAR_8->open_fds->fds_bits+VAR_3;
 VAR_7 = 0;
 if (VAR_6) {
  VAR_6 &= FUNC_0(VAR_4, VAR_3);
  if (VAR_6) {
   if (!(VAR_6 & ~*VAR_5))
    goto get_max;
   return -VAR_0;
  }
 }
 while (VAR_3) {
  VAR_5--;
  VAR_3--;
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (!VAR_6)
   continue;
  if (VAR_6 & ~*VAR_5)
   return -VAR_0;
  if (VAR_7)
   continue;
get_max:
  do {
   VAR_7++;
   VAR_6 >>= 1;
  } while (VAR_6);
  VAR_7 += VAR_3 * VAR_1;
 }

 return VAR_7;
}
