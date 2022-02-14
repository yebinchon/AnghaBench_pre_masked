
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction_log_entry {int dummy; } ;
struct binder_transaction_log {size_t next; int full; struct binder_transaction_log_entry* entry; } ;


 size_t FUNC_0 (struct binder_transaction_log_entry*) ;
 int FUNC_1 (struct binder_transaction_log_entry*,int ,int) ;

__attribute__((used)) static struct binder_transaction_log_entry *FUNC_2(
 struct binder_transaction_log *VAR_0)
{
 struct binder_transaction_log_entry *VAR_1;
 VAR_1 = &VAR_0->entry[VAR_0->next];
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_0->next++;
 if (VAR_0->next == FUNC_0(VAR_0->entry)) {
  VAR_0->next = 0;
  VAR_0->full = 1;
 }
 return VAR_1;
}
