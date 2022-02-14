
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int loadaddr; unsigned int execaddr; scalar_t__ stamped; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static void
FUNC_1(struct inode *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (FUNC_0(VAR_0)->stamped) {

  VAR_3 = (VAR_1 & 255) * 100;
  VAR_2 = (VAR_1 / 256) * 100 + (VAR_3 >> 8) + 0x336e996a;

  FUNC_0(VAR_0)->loadaddr = (VAR_2 >> 24) |
    (FUNC_0(VAR_0)->loadaddr & ~0xff);
  FUNC_0(VAR_0)->execaddr = (VAR_3 & 255) | (VAR_2 << 8);
 }
}
