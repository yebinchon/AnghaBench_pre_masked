
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct srp_map_state {unsigned int total_len; int ndesc; struct srp_direct_buf* desc; } ;
struct srp_direct_buf {void* len; void* key; int va; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct srp_map_state *VAR_0, dma_addr_t VAR_1,
    unsigned int VAR_2, u32 VAR_3)
{
 struct srp_direct_buf *VAR_4 = VAR_0->desc;

 VAR_4->va = FUNC_1(VAR_1);
 VAR_4->key = FUNC_0(VAR_3);
 VAR_4->len = FUNC_0(VAR_2);

 VAR_0->total_len += VAR_2;
 VAR_0->desc++;
 VAR_0->ndesc++;
}
