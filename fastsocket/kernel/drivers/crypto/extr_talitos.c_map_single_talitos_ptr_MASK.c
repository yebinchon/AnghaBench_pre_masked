
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {unsigned char j_extent; int len; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct device*,void*,unsigned short,int) ;
 int FUNC_2 (struct talitos_ptr*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
       struct talitos_ptr *VAR_1,
       unsigned short VAR_2, void *VAR_3,
       unsigned char VAR_4,
       enum dma_data_direction VAR_5)
{
 dma_addr_t VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_2, VAR_5);

 VAR_1->len = FUNC_0(VAR_2);
 FUNC_2(VAR_1, VAR_6);
 VAR_1->j_extent = VAR_4;
}
