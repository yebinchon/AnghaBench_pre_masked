
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cnic_local {size_t max_cid_space; TYPE_1__* ctx_tbl; } ;
struct TYPE_2__ {size_t cid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cnic_local *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 u32 VAR_4;

 if (!VAR_1->ctx_tbl)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->max_cid_space; VAR_4++) {
  if (VAR_1->ctx_tbl[VAR_4].cid == VAR_2) {
   *VAR_3 = VAR_4;
   return 0;
  }
 }
 return -VAR_0;
}
