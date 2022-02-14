
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_descriptor {struct r6040_descriptor* vndescp; void* ndesc; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct r6040_descriptor *VAR_0,
     dma_addr_t VAR_1, int VAR_2)
{
 struct r6040_descriptor *VAR_3 = VAR_0;
 dma_addr_t VAR_4 = VAR_1;

 while (VAR_2-- > 0) {
  VAR_4 += sizeof(*VAR_3);
  VAR_3->ndesc = FUNC_0(VAR_4);
  VAR_3->vndescp = VAR_3 + 1;
  VAR_3++;
 }
 VAR_3--;
 VAR_3->ndesc = FUNC_0(VAR_1);
 VAR_3->vndescp = VAR_0;
}
