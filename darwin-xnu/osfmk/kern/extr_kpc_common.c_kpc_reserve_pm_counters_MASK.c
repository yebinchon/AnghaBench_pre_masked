
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned long long uint32_t ;
typedef int * kpc_pm_handler_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 unsigned long long FUNC_1 () ;
 unsigned long long FUNC_2 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long long FUNC_3 (int) ;
 int FUNC_4 (char*,int,int ) ;

boolean_t
FUNC_5(uint64_t VAR_7, kpc_pm_handler_t VAR_8,
                        boolean_t VAR_9)
{
 uint64_t VAR_10 = (1ULL << FUNC_1()) - 1;
 uint64_t VAR_11 = 0ULL;


 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_4 == ((void*)0));


 VAR_11 = (VAR_7 & VAR_10);
 FUNC_0(FUNC_3(VAR_11) <= FUNC_1());


 VAR_5 = VAR_9;
 VAR_6 = VAR_11;
 VAR_4 = VAR_8;

 FUNC_4("kpc: pm registered pmc_mask=%llx custom_config=%d\n",
        VAR_11, VAR_9);


 {
  uint32_t VAR_12 = FUNC_2(VAR_1);
  uint32_t VAR_13 = FUNC_3(VAR_6);
#pragma unused(cfg_count, pwr_count)
 FUNC_0((VAR_12 + VAR_13) == FUNC_1());
 }

 return VAR_3 ? VAR_0 : VAR_2;
}
