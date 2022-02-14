
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_lock {void* type; void* size; void* ino; void* start; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static inline void FUNC_2(struct netfs_lock *VAR_0)
{
 VAR_0->start = FUNC_1(VAR_0->start);
 VAR_0->ino = FUNC_1(VAR_0->ino);
 VAR_0->size = FUNC_0(VAR_0->size);
 VAR_0->type = FUNC_0(VAR_0->type);
}
