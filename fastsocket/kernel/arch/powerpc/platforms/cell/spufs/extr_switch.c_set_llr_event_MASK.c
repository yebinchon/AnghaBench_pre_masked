
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct spu_state {scalar_t__* spu_chnlcnt_RW; scalar_t__* spu_chnldata_RW; } ;
struct spu {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct spu_state *VAR_1, struct spu *VAR_2)
{
 u64 VAR_3, VAR_4;
 u64 VAR_5;
 VAR_3 = VAR_1->spu_chnlcnt_RW[0];
 VAR_4 = VAR_1->spu_chnldata_RW[0];
 VAR_5 = VAR_1->spu_chnldata_RW[1];
 VAR_1->spu_chnldata_RW[0] |= VAR_0;
 if ((VAR_3 == 0) && !(VAR_4 & VAR_0) &&
     (VAR_5 & VAR_0)) {
  VAR_1->spu_chnlcnt_RW[0] = 1;
 }
}
