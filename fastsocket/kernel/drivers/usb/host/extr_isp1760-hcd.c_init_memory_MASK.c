
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct isp1760_hcd {TYPE_1__* memory_pool; } ;
struct TYPE_2__ {scalar_t__ size; int free; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_1(struct isp1760_hcd *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 VAR_9 = 0x1000;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7->memory_pool[VAR_8].start = VAR_9;
  VAR_7->memory_pool[VAR_8].size = VAR_2;
  VAR_7->memory_pool[VAR_8].free = 1;
  VAR_9 += VAR_7->memory_pool[VAR_8].size;
 }


 for (VAR_8 = VAR_1; VAR_8 < VAR_1 + VAR_3; VAR_8++) {
  VAR_7->memory_pool[VAR_8].start = VAR_9;
  VAR_7->memory_pool[VAR_8].size = VAR_4;
  VAR_7->memory_pool[VAR_8].free = 1;
  VAR_9 += VAR_7->memory_pool[VAR_8].size;
 }


 for (VAR_8 = VAR_1 + VAR_3; VAR_8 < VAR_0; VAR_8++) {
  VAR_7->memory_pool[VAR_8].start = VAR_9;
  VAR_7->memory_pool[VAR_8].size = VAR_5;
  VAR_7->memory_pool[VAR_8].free = 1;
  VAR_9 += VAR_7->memory_pool[VAR_8].size;
 }

 FUNC_0(VAR_9 - VAR_7->memory_pool[VAR_8 - 1].size > VAR_6);
}
