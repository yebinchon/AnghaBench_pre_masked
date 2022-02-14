
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_info {scalar_t__ elfoffset; scalar_t__ memsize; } ;
typedef int elfheader ;
struct TYPE_2__ {int exit; int fixups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,void*,unsigned long) ;
 int VAR_9 ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,struct elf_info*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (char*,int ,int,int) ;

void FUNC_11(unsigned long VAR_13, unsigned long VAR_14, unsigned long VAR_15,
                   unsigned long VAR_16, unsigned long VAR_17)
{
 struct elf_info VAR_18;
 char *VAR_19, *VAR_20;
 int VAR_21 = VAR_3 - VAR_4;
 void *VAR_22 = VAR_7;
 unsigned long VAR_23 = VAR_6 - VAR_7;
 char VAR_24[256];

 if (VAR_21 <= 0)
  FUNC_0();
 FUNC_3(&VAR_9, VAR_22, VAR_23);
 FUNC_2(&VAR_9, VAR_24, sizeof(VAR_24));

 if (!FUNC_8(VAR_24, &VAR_18))
  FUNC_0();

 VAR_19 = (char *)(VAR_18.memsize + VAR_18.elfoffset);
 VAR_19 = FUNC_5(VAR_19, (char *)VAR_5);

 if ((unsigned)FUNC_10(VAR_19, VAR_0, 2*VAR_1, 16)
   > (128*VAR_2))
  FUNC_0();


 VAR_20 = FUNC_4(VAR_21);
 if (!VAR_20)
  FUNC_0();
 FUNC_6(VAR_20, VAR_4, VAR_21);
 FUNC_1(VAR_20);

 VAR_8 = FUNC_7();

 VAR_10.fixups = VAR_11;
 VAR_10.exit = VAR_12;

 if (FUNC_9() < 0)
  FUNC_0();
}
