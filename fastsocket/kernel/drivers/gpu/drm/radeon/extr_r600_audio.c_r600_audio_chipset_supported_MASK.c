
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_4)
{
 return (VAR_4->family >= VAR_0 && !FUNC_0(VAR_4))
  || VAR_4->family == VAR_1
  || VAR_4->family == VAR_2
  || VAR_4->family == VAR_3;
}
