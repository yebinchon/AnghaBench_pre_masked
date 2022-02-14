
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * slice_end; int * slice_start; } ;
struct throtl_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct throtl_data *VAR_1, struct throtl_grp *VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_0, VAR_2->slice_start[VAR_3], VAR_2->slice_end[VAR_3]))
  return 0;

 return 1;
}
