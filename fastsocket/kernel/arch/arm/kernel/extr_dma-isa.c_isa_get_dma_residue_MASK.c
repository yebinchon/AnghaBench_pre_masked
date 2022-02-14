
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int** VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, dma_t *VAR_3)
{
 unsigned int VAR_4 = VAR_1[VAR_2][VAR_0];
 int VAR_5;

 VAR_5 = 1 + FUNC_0(VAR_4);
 VAR_5 |= FUNC_0(VAR_4) << 8;

 return VAR_2 < 4 ? VAR_5 : (VAR_5 << 1);
}
