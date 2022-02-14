
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sge_rspq {int intr_params; unsigned int iqe_len; unsigned int size; scalar_t__ pktcnt_idx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct sge_rspq *VAR_2, u8 VAR_3, u8 VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 VAR_2->intr_params = FUNC_0(VAR_3) |
    (VAR_4 < VAR_1 ? VAR_0 : 0);
 VAR_2->pktcnt_idx = VAR_4 < VAR_1 ? VAR_4 : 0;
 VAR_2->iqe_len = VAR_6;
 VAR_2->size = VAR_5;
}
