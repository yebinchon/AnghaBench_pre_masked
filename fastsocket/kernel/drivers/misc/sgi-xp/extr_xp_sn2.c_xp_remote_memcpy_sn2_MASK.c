
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
typedef scalar_t__ bte_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long const,unsigned long,size_t,int,int *) ;
 int FUNC_1 (int ,char*,scalar_t__,unsigned long,unsigned long const,size_t) ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum xp_retval
FUNC_3(unsigned long VAR_6, const unsigned long VAR_7,
       size_t VAR_8)
{
 bte_result_t VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_8, (VAR_0 | VAR_2), ((void*)0));
 if (VAR_9 == VAR_1)
  return VAR_5;

 if (FUNC_2()) {
  FUNC_1(VAR_3, "bte_copy() on shub2 failed, error=0x%x dst_pa="
   "0x%016lx src_pa=0x%016lx len=%ld\\n", VAR_9, VAR_6,
   VAR_7, VAR_8);
 } else {
  FUNC_1(VAR_3, "bte_copy() failed, error=%d dst_pa=0x%016lx "
   "src_pa=0x%016lx len=%ld\\n", VAR_9, VAR_6, VAR_7, VAR_8);
 }

 return VAR_4;
}
