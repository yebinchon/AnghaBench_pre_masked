
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct page {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct ib_device*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static u64 FUNC_3(struct ib_device *VAR_2, struct page *VAR_3,
        unsigned long VAR_4, size_t VAR_5,
        enum dma_data_direction VAR_6)
{
 u64 VAR_7;

 if (VAR_4 + VAR_5 > VAR_1)
  return VAR_0;

 VAR_7 = FUNC_1(FUNC_2(VAR_3));
 if (!FUNC_0(VAR_2, VAR_7))
  VAR_7 += VAR_4;

 return VAR_7;
}
