
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocop_int_operation {struct cryptocop_dma_desc* cdesc_in; struct cryptocop_dma_desc* cdesc_out; void* alloc_ptr; } ;
struct cryptocop_dma_desc {struct cryptocop_dma_desc* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cryptocop_dma_desc*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,struct cryptocop_int_operation*,void*) ;

__attribute__((used)) static void FUNC_4(struct cryptocop_int_operation *VAR_0)
{
 void *VAR_1 = VAR_0->alloc_ptr;
 struct cryptocop_dma_desc *VAR_2 = VAR_0->cdesc_out;
 struct cryptocop_dma_desc *VAR_3;

 FUNC_0(FUNC_3("delete_internal_operation: iop=0x%p, alloc_ptr=0x%p\n", VAR_0, VAR_1));

 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
 VAR_2 = VAR_0->cdesc_in;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_2(VAR_1);
}
