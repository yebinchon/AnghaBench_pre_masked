
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bsize; scalar_t__ bshift; scalar_t__ nsec; } ;
struct ub_lun {TYPE_1__ capacity; scalar_t__ changed; scalar_t__ readonly; } ;
struct ub_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct ub_dev*,struct ub_lun*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ub_dev*,struct ub_lun*) ;

__attribute__((used)) static void FUNC_2(struct ub_dev *VAR_0, struct ub_lun *VAR_1)
{

 VAR_1->readonly = 0;

 VAR_1->capacity.nsec = 0;
 VAR_1->capacity.bsize = 512;
 VAR_1->capacity.bshift = 0;

 if (FUNC_1(VAR_0, VAR_1) != 0)
  return;
 VAR_1->changed = 0;

 if (FUNC_0(VAR_0, VAR_1, &VAR_1->capacity) != 0) {





  if (FUNC_0(VAR_0, VAR_1, &VAR_1->capacity) != 0) {
   VAR_1->capacity.nsec = 0;
   VAR_1->capacity.bsize = 512;
   VAR_1->capacity.bshift = 0;
  }
 }
}
