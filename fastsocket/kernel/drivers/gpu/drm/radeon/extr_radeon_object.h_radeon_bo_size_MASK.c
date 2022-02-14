
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long num_pages; } ;
struct radeon_bo {TYPE_1__ tbo; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct radeon_bo *VAR_1)
{
 return VAR_1->tbo.num_pages << VAR_0;
}
