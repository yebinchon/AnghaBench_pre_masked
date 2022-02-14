
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long initrd_addr; unsigned long initrd_size; char* cmdline; unsigned long cmdline_len; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned long,int,int) ;

void FUNC_1(unsigned long VAR_2, unsigned long VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_6 - (unsigned long)VAR_0;

 VAR_1.initrd_addr = VAR_2;
 VAR_1.initrd_size = VAR_2 ? VAR_3 - VAR_2 : 0;
 VAR_1.cmdline = (char *)VAR_4;
 VAR_1.cmdline_len = VAR_5 - VAR_4;

 FUNC_0(VAR_0, VAR_7 - 1024*1024, 32, 64);
}
