
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thash_data {int itir; int page_flags; } ;


 int VAR_0 ;
 struct thash_data* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

u64 FUNC_2(u64 VAR_2, u64 *VAR_3)
{
 u64 VAR_4;
 struct thash_data *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_1, VAR_5->page_flags,
   VAR_5->itir, VAR_2, VAR_0);

 asm volatile ("rsm psr.ic|psr.i;;"
   "srlz.d;;"
   "ld8.s r9=[%1];;"
   "tnat.nz p6,p7=r9;;"
   "(p6) mov %0=1;"
   "(p6) mov r9=r0;"
   "(p7) extr.u r9=r9,0,53;;"
   "(p7) mov %0=r0;"
   "(p7) st8 [%2]=r9;;"
   "ssm psr.ic;;"
   "srlz.d;;"
   "ssm psr.i;;"
   "srlz.d;;"
   : "=r"(VAR_4) : "r"(VAR_2), "r"(VAR_3):"memory");

 return VAR_4;
}
