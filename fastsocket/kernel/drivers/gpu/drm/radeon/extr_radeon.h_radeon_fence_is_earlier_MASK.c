
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {scalar_t__ ring; scalar_t__ seq; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct radeon_fence *VAR_0,
        struct radeon_fence *VAR_1)
{
 if (!VAR_0) {
  return 0;
 }

 if (!VAR_1) {
  return 1;
 }

 FUNC_0(VAR_0->ring != VAR_1->ring);

 return VAR_0->seq < VAR_1->seq;
}
