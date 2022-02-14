
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct radeon_sa_bo {scalar_t__ soffset; TYPE_1__* manager; } ;
struct TYPE_2__ {scalar_t__ gpu_addr; } ;



__attribute__((used)) static inline uint64_t FUNC_0(struct radeon_sa_bo *VAR_0)
{
 return VAR_0->manager->gpu_addr + VAR_0->soffset;
}
