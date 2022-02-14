
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {scalar_t__ consumed; } ;


 scalar_t__ FUNC_0 (struct sg_mapping_iter*) ;

__attribute__((used)) static bool FUNC_1(struct sg_mapping_iter *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  VAR_0->consumed = 0;
  return 1;
 } else
  return 0;
}
