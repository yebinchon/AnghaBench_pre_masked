
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int (* kernel_entry_t ) (unsigned long,int ,int *) ;
struct TYPE_6__ {int write; } ;
struct TYPE_5__ {unsigned long (* finalize ) () ;} ;
struct TYPE_4__ {int (* exit ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,...) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,char*,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__ const,int,int) ;
 unsigned long FUNC_10 () ;
 int FUNC_11 (unsigned long,int ,int *) ;

void FUNC_12(unsigned long VAR_8)
{
 const u32 VAR_9 = 0x1000000 - (u32)VAR_1;
 void *VAR_10;
 unsigned long VAR_11;
 u64 VAR_12;
 unsigned long VAR_13;

 VAR_4.write = VAR_7;
 VAR_6.exit = FUNC_6;

 FUNC_4("\n-- PS3 bootwrapper --\n");

 FUNC_9(VAR_1, VAR_9, 32, 64);
 FUNC_1(VAR_0);

 VAR_10 = FUNC_2("/chosen");

 FUNC_7(&VAR_12);
 FUNC_0(0, VAR_12);

 if (VAR_2 > VAR_3) {
  FUNC_8(VAR_10, "linux,initrd-start", (u32)(VAR_3));
  FUNC_8(VAR_10, "linux,initrd-end", (u32)(VAR_2));
 }

 FUNC_3(VAR_10);

 VAR_11 = VAR_5.finalize();

 FUNC_5();

 FUNC_4(" flat tree at 0x%lx\n\r", VAR_11);

 VAR_13 = *(unsigned long *)0;

 if (VAR_13 != VAR_8)
  FUNC_4("null check failed: %lx != %lx\n\r", VAR_13, VAR_8);

 ((kernel_entry_t)0)(VAR_11, 0, ((void*)0));

 FUNC_6();
}
