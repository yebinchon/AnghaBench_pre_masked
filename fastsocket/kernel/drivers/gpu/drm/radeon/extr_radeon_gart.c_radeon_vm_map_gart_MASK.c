
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {size_t* pages_addr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

uint64_t FUNC_0(struct radeon_device *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;


 VAR_4 = VAR_2->gart.pages_addr[VAR_3 >> VAR_1];


 VAR_4 |= VAR_3 & (~VAR_0);

 return VAR_4;
}
