
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ioat_raw_descriptor {scalar_t__* field; } ;
struct ioat_pq_descriptor {int * coef; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ioat_raw_descriptor *VAR_2[2],
         dma_addr_t VAR_3, u32 VAR_4, u8 VAR_5, int VAR_6)
{
 struct ioat_pq_descriptor *VAR_7 = (struct ioat_pq_descriptor *) VAR_2[0];
 struct ioat_raw_descriptor *VAR_8 = VAR_2[VAR_0 >> VAR_6 & 1];

 VAR_8->field[VAR_1[VAR_6]] = VAR_3 + VAR_4;
 VAR_7->coef[VAR_6] = VAR_5;
}
