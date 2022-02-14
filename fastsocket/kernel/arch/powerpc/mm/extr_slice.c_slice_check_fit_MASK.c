
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {int low_slices; int high_slices; } ;



__attribute__((used)) static int FUNC_0(struct slice_mask VAR_0, struct slice_mask VAR_1)
{
 return (VAR_0.low_slices & VAR_1.low_slices) == VAR_0.low_slices &&
  (VAR_0.high_slices & VAR_1.high_slices) == VAR_0.high_slices;
}
