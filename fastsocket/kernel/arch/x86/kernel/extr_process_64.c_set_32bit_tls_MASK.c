
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct user_desc {int limit; int seg_32bit; int limit_in_pages; int useable; int base_addr; } ;
struct TYPE_2__ {struct desc_struct* tls_array; } ;
struct task_struct {TYPE_1__ thread; } ;
struct desc_struct {int dummy; } ;


 int FUNC_0 (struct desc_struct*,struct user_desc*) ;

__attribute__((used)) static inline void FUNC_1(struct task_struct *VAR_0, int VAR_1, u32 VAR_2)
{
 struct user_desc VAR_3 = {
  .base_addr = VAR_2,
  .limit = 0xfffff,
  .seg_32bit = 1,
  .limit_in_pages = 1,
  .useable = 1,
 };
 struct desc_struct *VAR_4 = VAR_0->thread.tls_array;
 VAR_4 += VAR_1;
 FUNC_0(VAR_4, &VAR_3);
}
