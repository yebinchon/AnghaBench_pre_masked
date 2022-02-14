
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {scalar_t__ dma_address; } ;
struct esp {int dummy; } ;


 scalar_t__ FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct esp *VAR_0, struct scatterlist *VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4].dma_address = (u32)FUNC_0(&VAR_1[VAR_4]);
 return VAR_2;
}
