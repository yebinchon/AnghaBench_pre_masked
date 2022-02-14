
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {scalar_t__ e_id; } ;
struct posix_acl {struct posix_acl_entry* a_entries; } ;



__attribute__((used)) static void
FUNC_0(struct posix_acl *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = 0, VAR_4;
 struct posix_acl_entry VAR_5;



 while (!VAR_3) {
  VAR_3 = 1;
  for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++) {
   if (VAR_0->a_entries[VAR_4].e_id
     > VAR_0->a_entries[VAR_4+1].e_id) {
    VAR_3 = 0;
    VAR_5 = VAR_0->a_entries[VAR_4];
    VAR_0->a_entries[VAR_4] = VAR_0->a_entries[VAR_4+1];
    VAR_0->a_entries[VAR_4+1] = VAR_5;
   }
  }
 }
}
