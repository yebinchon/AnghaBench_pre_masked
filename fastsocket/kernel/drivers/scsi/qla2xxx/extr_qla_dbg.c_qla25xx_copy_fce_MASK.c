
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int fce; scalar_t__* fce_mb; int fce_dma; int fce_bufs; } ;
struct qla2xxx_fce_chain {int type; int* eregs; void* size; void* addr_h; void* addr_l; void* chain_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static inline void *
FUNC_7(struct qla_hw_data *VAR_1, void *VAR_2, uint32_t **VAR_3)
{
 uint32_t VAR_4;
 uint32_t *VAR_5;
 struct qla2xxx_fce_chain *VAR_6 = VAR_2;

 if (!VAR_1->fce)
  return VAR_2;

 *VAR_3 = &VAR_6->type;
 VAR_6->type = FUNC_2(VAR_0);
 VAR_6->chain_size = FUNC_4(sizeof(struct qla2xxx_fce_chain) +
     FUNC_3(VAR_1->fce_bufs));
 VAR_6->size = FUNC_4(FUNC_3(VAR_1->fce_bufs));
 VAR_6->addr_l = FUNC_4(FUNC_0(VAR_1->fce_dma));
 VAR_6->addr_h = FUNC_4(FUNC_1(VAR_1->fce_dma));

 VAR_5 = VAR_6->eregs;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  *VAR_5++ = FUNC_4(VAR_1->fce_mb[VAR_4]);

 FUNC_5(VAR_5, VAR_1->fce, FUNC_6(VAR_6->size));

 return (void *)VAR_5 + FUNC_6(VAR_6->size);
}
