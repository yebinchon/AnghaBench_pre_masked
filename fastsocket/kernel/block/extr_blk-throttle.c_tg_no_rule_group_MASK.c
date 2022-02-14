
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int* bps; int* iops; } ;



__attribute__((used)) static bool FUNC_0(struct throtl_grp *VAR_0, bool VAR_1) {
 if (VAR_0->bps[VAR_1] == -1 && VAR_0->iops[VAR_1] == -1)
  return 1;
 return 0;
}
