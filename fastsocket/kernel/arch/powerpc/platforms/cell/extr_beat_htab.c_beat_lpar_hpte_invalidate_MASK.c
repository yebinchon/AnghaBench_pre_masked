
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned long,int ,int ,int ,int ,int*,int*) ;
 unsigned long FUNC_4 (unsigned long,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
      int VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 u64 VAR_10, VAR_11;
 unsigned long VAR_12;

 FUNC_1("    inval : slot=%lx, va=%016lx, psize: %d, local: %d\n",
  VAR_3, VAR_4, VAR_5, VAR_7);
 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_1);

 FUNC_5(&VAR_2, VAR_12);
 VAR_10 = FUNC_2(VAR_3);

 if ((VAR_10 & ~0x7FUL) != (VAR_8 & ~0x7FUL)) {
  FUNC_1("not found !\n");
  FUNC_6(&VAR_2, VAR_12);
  return;
 }

 VAR_9 = FUNC_3(0, VAR_3, 0, 0, VAR_0, 0,
  &VAR_10, &VAR_11);
 FUNC_6(&VAR_2, VAR_12);

 FUNC_0(VAR_9 != 0);
}
