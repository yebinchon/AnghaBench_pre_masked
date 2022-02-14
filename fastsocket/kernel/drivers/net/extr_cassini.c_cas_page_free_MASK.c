
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cas {int page_order; int page_size; int pdev; } ;
struct TYPE_4__ {int buffer; int dma_addr; } ;
typedef TYPE_1__ cas_page_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cas *VAR_1, cas_page_t *VAR_2)
{
 FUNC_2(VAR_1->pdev, VAR_2->dma_addr, VAR_1->page_size,
         VAR_0);
 FUNC_0(VAR_2->buffer, VAR_1->page_order);
 FUNC_1(VAR_2);
 return 0;
}
