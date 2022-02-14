
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct iwl_tfd_tb {int hi_n_len; int lo; } ;
struct iwl_tfd {struct iwl_tfd_tb* tbs; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_2(struct iwl_tfd *VAR_0, u8 VAR_1)
{
 struct iwl_tfd_tb *VAR_2 = &VAR_0->tbs[VAR_1];

 dma_addr_t VAR_3 = FUNC_0(&VAR_2->lo);
 if (sizeof(dma_addr_t) > sizeof(u32))
  VAR_3 |=
  ((dma_addr_t)(FUNC_1(VAR_2->hi_n_len) & 0xF) << 16) << 16;

 return VAR_3;
}
