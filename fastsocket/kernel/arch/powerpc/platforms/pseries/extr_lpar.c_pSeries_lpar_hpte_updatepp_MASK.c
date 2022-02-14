
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long,int,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_3,
           unsigned long VAR_4,
           unsigned long VAR_5,
           int VAR_6, int VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10 = (VAR_4 & 7) | VAR_0;
 unsigned long VAR_11;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7);

 FUNC_3("    update: avpnv=%016lx, hash=%016lx, f=%lx, psize: %d ...",
   VAR_11, VAR_3, VAR_10, VAR_6);

 VAR_9 = FUNC_2(VAR_10, VAR_3, VAR_11);

 if (VAR_9 == VAR_1) {
  FUNC_3("not found !\n");
  return -1;
 }

 FUNC_3("ok\n");

 FUNC_0(VAR_9 != VAR_2);

 return 0;
}
