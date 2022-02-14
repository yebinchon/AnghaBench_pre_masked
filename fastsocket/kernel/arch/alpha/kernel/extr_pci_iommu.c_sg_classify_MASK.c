
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {long length; int dma_address; long dma_length; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 long FUNC_0 (struct scatterlist*) ;
 unsigned int FUNC_1 (struct device*) ;

__attribute__((used)) static void
FUNC_2(struct device *VAR_1, struct scatterlist *VAR_2, struct scatterlist *VAR_3,
     int VAR_4)
{
 unsigned long VAR_5;
 struct scatterlist *VAR_6;
 long VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_6 = VAR_2;
 VAR_7 = 0;
 VAR_8 = VAR_6->length;
 VAR_5 = FUNC_0(VAR_6) + VAR_8;


 VAR_9 = VAR_1 ? FUNC_1(VAR_1) : 0;
 for (++VAR_2; VAR_2 < VAR_3; ++VAR_2) {
  unsigned long VAR_10, VAR_11;
  VAR_10 = FUNC_0(VAR_2);
  VAR_11 = VAR_2->length;

  if (VAR_8 + VAR_11 > VAR_9)
   goto new_segment;

  if (VAR_5 == VAR_10) {
   VAR_2->dma_address = -1;
   VAR_8 += VAR_11;
  } else if (((VAR_5 | VAR_10) & ~VAR_0) == 0 && VAR_4) {
   VAR_2->dma_address = -2;
   VAR_7 = 1;
   VAR_8 += VAR_11;
  } else {
new_segment:
   VAR_6->dma_address = VAR_7;
   VAR_6->dma_length = VAR_8;
   VAR_6 = VAR_2;
   VAR_7 = 0;
   VAR_8 = VAR_11;
  }

  VAR_5 = VAR_10 + VAR_11;
 }

 VAR_6->dma_address = VAR_7;
 VAR_6->dma_length = VAR_8;
}
