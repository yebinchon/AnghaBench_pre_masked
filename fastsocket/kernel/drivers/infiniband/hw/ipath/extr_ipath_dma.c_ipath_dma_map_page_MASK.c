
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u64 FUNC_3(struct ib_device *VAR_2,
         struct page *VAR_3,
         unsigned long VAR_4,
         size_t VAR_5,
         enum dma_data_direction VAR_6)
{
 u64 VAR_7;

 FUNC_0(!FUNC_2(VAR_6));

 if (VAR_4 + VAR_5 > VAR_1) {
  VAR_7 = VAR_0;
  goto done;
 }

 VAR_7 = (u64) FUNC_1(VAR_3);
 if (VAR_7)
  VAR_7 += VAR_4;


done:
 return VAR_7;
}
