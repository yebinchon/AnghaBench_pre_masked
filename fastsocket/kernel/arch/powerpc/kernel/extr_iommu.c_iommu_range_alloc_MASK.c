
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_pool {unsigned long start; unsigned long end; unsigned long hint; int lock; } ;
struct iommu_table {int nr_pools; unsigned long it_offset; unsigned long it_blocksize; struct iommu_pool* pools; int it_map; struct iommu_pool large_pool; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct device*) ;
 unsigned long FUNC_4 (int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static unsigned long FUNC_12(struct device *VAR_3,
           struct iommu_table *VAR_4,
                                       unsigned long VAR_5,
                                       unsigned long *VAR_6,
                                       unsigned long VAR_7,
                                       unsigned int VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13 = VAR_5 > 15;
 int VAR_14 = 0;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned int VAR_18;
 struct iommu_pool *VAR_19;

 VAR_15 = 0xffffffffffffffffl >> (64 - VAR_8);




 if (FUNC_11(VAR_5 == 0)) {
  if (FUNC_6())
   FUNC_1(1);
  return VAR_0;
 }





 VAR_18 = FUNC_2(VAR_2) & (VAR_4->nr_pools - 1);

 if (VAR_13)
  VAR_19 = &(VAR_4->large_pool);
 else
  VAR_19 = &(VAR_4->pools[VAR_18]);

 FUNC_8(&(VAR_19->lock), VAR_17);

again:
 if ((VAR_14 == 0) && VAR_6 && *VAR_6 &&
     (*VAR_6 >= VAR_19->start) && (*VAR_6 < VAR_19->end))
  VAR_11 = *VAR_6;
 else
  VAR_11 = VAR_19->hint;

 VAR_12 = VAR_19->end;





 if (VAR_11 >= VAR_12)
  VAR_11 = VAR_19->start;

 if (VAR_12 + VAR_4->it_offset > VAR_7) {
  VAR_12 = VAR_7 - VAR_4->it_offset + 1;




  if ((VAR_11 & VAR_7) >= VAR_12 || VAR_14 > 0) {
   FUNC_9(&(VAR_19->lock));
   VAR_19 = &(VAR_4->pools[0]);
   FUNC_7(&(VAR_19->lock));
   VAR_11 = VAR_19->start;
  } else {
   VAR_11 &= VAR_7;
  }
 }

 if (VAR_3)
  VAR_16 = FUNC_0(FUNC_3(VAR_3) + 1,
          1 << VAR_1);
 else
  VAR_16 = FUNC_0(1UL << 32, 1 << VAR_1);


 VAR_9 = FUNC_4(VAR_4->it_map, VAR_12, VAR_11, VAR_5,
        VAR_4->it_offset, VAR_16 >> VAR_1,
        VAR_15);
 if (VAR_9 == -1) {
  if (FUNC_5(VAR_14 == 0)) {

   VAR_19->hint = VAR_19->start;
   VAR_14++;
   goto again;

  } else if (VAR_14 <= VAR_4->nr_pools) {

   FUNC_9(&(VAR_19->lock));
   VAR_18 = (VAR_18 + 1) & (VAR_4->nr_pools - 1);
   VAR_19 = &VAR_4->pools[VAR_18];
   FUNC_7(&(VAR_19->lock));
   VAR_19->hint = VAR_19->start;
   VAR_14++;
   goto again;

  } else {

   FUNC_10(&(VAR_19->lock), VAR_17);
   return VAR_0;
  }
 }

 VAR_10 = VAR_9 + VAR_5;


 if (VAR_13) {

  VAR_19->hint = VAR_10;
 } else {

  VAR_19->hint = (VAR_10 + VAR_4->it_blocksize - 1) &
                  ~(VAR_4->it_blocksize - 1);
 }


 if (VAR_6)
  *VAR_6 = VAR_10;

 FUNC_10(&(VAR_19->lock), VAR_17);

 return VAR_9;
}
