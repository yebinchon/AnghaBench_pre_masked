
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long,int,int) ;
 unsigned long FUNC_2 (int ,unsigned long,unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_3 (char*,unsigned long,unsigned long,int,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3, unsigned long VAR_4,
      int VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10, VAR_11;

 FUNC_3("    inval : slot=%lx, va=%016lx, psize: %d, local: %d\n",
   VAR_3, VAR_4, VAR_5, VAR_7);

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
 VAR_9 = FUNC_2(VAR_0, VAR_3, VAR_8, &VAR_10, &VAR_11);
 if (VAR_9 == VAR_1)
  return;

 FUNC_0(VAR_9 != VAR_2);
}
