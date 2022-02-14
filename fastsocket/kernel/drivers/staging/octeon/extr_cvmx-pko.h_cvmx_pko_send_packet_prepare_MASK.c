
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int cvmx_wqe_t ;
typedef scalar_t__ cvmx_pko_lock_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_7, uint64_t VAR_8,
      cvmx_pko_lock_t VAR_9)
{
 if (VAR_9 == VAR_0) {
  uint32_t VAR_10 =
      VAR_5 << VAR_6 |
      VAR_3 << VAR_4 |
      (VAR_2 & VAR_8);
  FUNC_1((cvmx_wqe_t *) FUNC_0(0x80), VAR_10,
         VAR_1, 0);
 }
}
