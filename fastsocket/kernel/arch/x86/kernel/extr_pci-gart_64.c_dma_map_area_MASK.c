
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long FUNC_1 (struct device*,unsigned long,unsigned long) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (struct device*,size_t,int) ;
 int * VAR_5 ;
 unsigned long FUNC_3 (size_t,size_t,size_t) ;
 int FUNC_4 (struct device*,size_t,size_t) ;
 int FUNC_5 (char*,size_t) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static dma_addr_t FUNC_7(struct device *VAR_7, dma_addr_t VAR_8,
    size_t VAR_9, int VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_2);
 unsigned long VAR_13;
 int VAR_14;

 if (FUNC_6(VAR_8 + VAR_9 > VAR_0))
  return VAR_3;

 VAR_13 = FUNC_1(VAR_7, VAR_12, VAR_11);
 if (VAR_13 == -1) {
  if (!FUNC_4(VAR_7, VAR_8, VAR_9))
   return VAR_8;
  if (VAR_6)
   FUNC_5("dma_map_area overflow %lu bytes\n", VAR_9);
  FUNC_2(VAR_7, VAR_9, VAR_10);
  return VAR_3;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_5[VAR_13 + VAR_14] = FUNC_0(VAR_8);
  VAR_8 += VAR_2;
 }
 return VAR_4 + VAR_13*VAR_2 + (VAR_8 & ~VAR_1);
}
