
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocop_dma_desc {struct cryptocop_dma_desc* next; scalar_t__ from_pool; struct cryptocop_dma_desc* free_buf; } ;


 int FUNC_0 (int ) ;
 struct cryptocop_dma_desc* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cryptocop_dma_desc*) ;
 int FUNC_2 (char*,struct cryptocop_dma_desc*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct cryptocop_dma_desc *VAR_3)
{
 FUNC_0(FUNC_2("free_cdesc: cdesc 0x%p, from_pool=%d\n", VAR_3, VAR_3->from_pool));
 FUNC_1(VAR_3->free_buf);

 if (VAR_3->from_pool) {
  unsigned long int VAR_4;
  FUNC_3(&VAR_1, VAR_4);
  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
  ++VAR_2;
  FUNC_4(&VAR_1, VAR_4);
 } else {
  FUNC_1(VAR_3);
 }
}
