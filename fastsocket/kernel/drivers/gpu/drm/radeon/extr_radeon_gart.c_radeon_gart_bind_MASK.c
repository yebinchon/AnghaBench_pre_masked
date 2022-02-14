
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_2__ {unsigned int* pages_addr; scalar_t__ ptr; struct page** pages; int ready; } ;
struct radeon_device {TYPE_1__ gart; } ;
struct page {int dummy; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct radeon_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct radeon_device*) ;

int FUNC_4(struct radeon_device *VAR_3, unsigned VAR_4,
       int VAR_5, struct page **VAR_6, dma_addr_t *VAR_7)
{
 unsigned VAR_8;
 unsigned VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_3->gart.ready) {
  FUNC_0(1, "trying to bind memory to uninitialized GART !\n");
  return -VAR_0;
 }
 VAR_8 = VAR_4 / VAR_2;
 VAR_9 = VAR_8 / (VAR_1 / VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_9++) {
  VAR_3->gart.pages_addr[VAR_9] = VAR_7[VAR_11];
  VAR_3->gart.pages[VAR_9] = VAR_6[VAR_11];
  if (VAR_3->gart.ptr) {
   VAR_10 = VAR_3->gart.pages_addr[VAR_9];
   for (VAR_12 = 0; VAR_12 < (VAR_1 / VAR_2); VAR_12++, VAR_8++) {
    FUNC_2(VAR_3, VAR_8, VAR_10);
    VAR_10 += VAR_2;
   }
  }
 }
 FUNC_1();
 FUNC_3(VAR_3);
 return 0;
}
