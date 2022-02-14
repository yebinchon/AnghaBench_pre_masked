
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int num_cpu_pages; int* pages_addr; int ptr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u64 VAR_6;

 if (!VAR_2->gart.ptr) {
  return;
 }
 for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_2->gart.num_cpu_pages; VAR_3++) {
  VAR_6 = VAR_2->gart.pages_addr[VAR_3];
  for (VAR_4 = 0; VAR_4 < (VAR_0 / VAR_1); VAR_4++, VAR_5++) {
   FUNC_1(VAR_2, VAR_5, VAR_6);
   VAR_6 += VAR_1;
  }
 }
 FUNC_0();
 FUNC_2(VAR_2);
}
