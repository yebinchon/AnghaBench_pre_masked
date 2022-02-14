
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_root_capabilities {void* flags; void* avail; void* used; void* nr_files; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(struct netfs_root_capabilities *VAR_0)
{
 VAR_0->nr_files = FUNC_0(VAR_0->nr_files);
 VAR_0->used = FUNC_0(VAR_0->used);
 VAR_0->avail = FUNC_0(VAR_0->avail);
 VAR_0->flags = FUNC_0(VAR_0->flags);
}
