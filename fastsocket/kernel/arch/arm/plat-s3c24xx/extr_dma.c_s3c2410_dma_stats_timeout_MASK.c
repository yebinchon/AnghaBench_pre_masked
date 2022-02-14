
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_stats {int timeout_longest; int timeout_shortest; int timeout_avg; } ;



__attribute__((used)) static void
FUNC_0(struct s3c2410_dma_stats *VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_1 > VAR_0->timeout_longest)
  VAR_0->timeout_longest = VAR_1;
 if (VAR_1 < VAR_0->timeout_shortest)
  VAR_0->timeout_shortest = VAR_1;

 VAR_0->timeout_avg += VAR_1;
}
