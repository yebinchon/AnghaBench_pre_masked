
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ull_refcount; int ull_turnstile; int ull_owner; scalar_t__ ull_opcode; scalar_t__ ull_max_nwaiters; scalar_t__ ull_nwaiters; int ull_bucket_index; void* ull_saved_key; void* ull_key; } ;
typedef TYPE_1__ ull_t ;
typedef void* ulk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ull_t *
FUNC_4(ulk_t *VAR_4)
{
 ull_t *VAR_5 = (ull_t *)FUNC_3(VAR_3);
 FUNC_1(VAR_5 != ((void*)0));

 VAR_5->ull_refcount = 1;
 VAR_5->ull_key = *VAR_4;
 VAR_5->ull_saved_key = *VAR_4;
 VAR_5->ull_bucket_index = FUNC_0(VAR_4);
 VAR_5->ull_nwaiters = 0;
 VAR_5->ull_max_nwaiters = 0;
 VAR_5->ull_opcode = 0;

 VAR_5->ull_owner = VAR_0;
 VAR_5->ull_turnstile = VAR_1;

 FUNC_2(VAR_5);

 VAR_2++;
 return VAR_5;
}
