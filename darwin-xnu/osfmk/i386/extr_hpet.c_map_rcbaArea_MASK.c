
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,unsigned long,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{



 FUNC_3(VAR_2, VAR_4 | (0xF0 & 0xFC));
 VAR_6 = FUNC_0(VAR_3 | (0xF0 & 0x03));
 VAR_5 = FUNC_1(VAR_6 & -4096, VAR_0 * 4, VAR_1);
 FUNC_2("RCBA: vaddr = %lX, paddr = %08X\n", (unsigned long)VAR_5, VAR_6);
}
