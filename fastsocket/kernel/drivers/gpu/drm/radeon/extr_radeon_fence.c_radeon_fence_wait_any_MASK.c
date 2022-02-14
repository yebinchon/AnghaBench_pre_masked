
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct radeon_fence {scalar_t__ seq; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,scalar_t__*,int) ;

int FUNC_1(struct radeon_device *VAR_2,
     struct radeon_fence **VAR_3,
     bool VAR_4)
{
 uint64_t VAR_5[VAR_1];
 unsigned VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5[VAR_6] = 0;

  if (!VAR_3[VAR_6]) {
   continue;
  }

  if (VAR_3[VAR_6]->seq == VAR_0) {

   return 0;
  }

  VAR_5[VAR_6] = VAR_3[VAR_6]->seq;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_4);
 if (VAR_7) {
  return VAR_7;
 }
 return 0;
}
