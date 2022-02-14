
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfil_hash_entry {int dummy; } ;
struct cfil_db {struct cfil_hash_entry* cfdb_only_entry; int cfdb_count; } ;


 int FUNC_0 (struct cfil_hash_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct cfil_hash_entry*) ;

void
FUNC_2(struct cfil_db *VAR_2, struct cfil_hash_entry *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return;

    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_1, VAR_3);
    VAR_2->cfdb_count--;
    if (VAR_2->cfdb_only_entry == VAR_3)
        VAR_2->cfdb_only_entry = ((void*)0);
}
