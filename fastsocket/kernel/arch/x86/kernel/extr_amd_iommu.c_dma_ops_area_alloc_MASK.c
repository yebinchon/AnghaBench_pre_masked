
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct dma_ops_domain {unsigned long next_address; unsigned long aperture_size; TYPE_1__** aperture; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned long offset; int bitmap; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (int ,unsigned long,unsigned long,unsigned int,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(struct device *VAR_5,
     struct dma_ops_domain *VAR_6,
     unsigned int VAR_7,
     unsigned long VAR_8,
     u64 VAR_9,
     unsigned long VAR_10)
{
 unsigned long VAR_11 = VAR_6->next_address % VAR_2;
 int VAR_12 = VAR_6->aperture_size >> VAR_1;
 int VAR_13 = VAR_10 >> VAR_1;
 unsigned long VAR_14;
 unsigned long VAR_15 = -1;
 unsigned long VAR_16;

 VAR_11 >>= VAR_3;

 VAR_14 = FUNC_0(FUNC_1(VAR_5) + 1,
   VAR_4) >> VAR_3;

 for (;VAR_13 < VAR_12; ++VAR_13) {
  unsigned long VAR_17 = VAR_6->aperture[VAR_13]->offset >> VAR_3;

  if (VAR_6->aperture[VAR_13]->offset >= VAR_9)
   break;

  VAR_16 = FUNC_3(VAR_0, VAR_17,
            VAR_9 >> VAR_3);

  VAR_15 = FUNC_2(VAR_6->aperture[VAR_13]->bitmap,
        VAR_16, VAR_11, VAR_7, 0,
         VAR_14, VAR_8);
  if (VAR_15 != -1) {
   VAR_15 = VAR_6->aperture[VAR_13]->offset +
      (VAR_15 << VAR_3);
   VAR_6->next_address = VAR_15 + (VAR_7 << VAR_3);
   break;
  }

  VAR_11 = 0;
 }

 return VAR_15;
}
