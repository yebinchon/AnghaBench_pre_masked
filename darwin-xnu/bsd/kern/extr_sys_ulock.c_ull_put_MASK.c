
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ulk_pid; scalar_t__ ulk_addr; } ;
struct TYPE_8__ {int ull_refcount; int ull_bucket_index; int ull_hash_link; TYPE_1__ ull_key; } ;
typedef TYPE_2__ ull_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(ull_t *VAR_0)
{
 FUNC_2(VAR_0);
 int VAR_1 = --VAR_0->ull_refcount;
 FUNC_0(VAR_1 == 0 ? (VAR_0->ull_key.ulk_pid == 0 && VAR_0->ull_key.ulk_addr == 0) : 1);
 FUNC_6(VAR_0);

 if (VAR_1 > 0) {
  return;
 }

 FUNC_3(VAR_0->ull_bucket_index);
 FUNC_1(&VAR_0->ull_hash_link);
 FUNC_4(VAR_0->ull_bucket_index);

 FUNC_5(VAR_0);
}
