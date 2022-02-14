
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfil_info {int cfi_so; int cfi_sock_id; int * cfi_hash_entry; } ;


 int FUNC_0 (int,int ,int *,int ,char const*) ;
 int FUNC_1 (int,int ,char const*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, struct cfil_info *VAR_1, const char* VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->cfi_hash_entry != ((void*)0))
  FUNC_0(VAR_0, VAR_1->cfi_so, VAR_1->cfi_hash_entry, VAR_1->cfi_sock_id, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1->cfi_so, VAR_2);
}
