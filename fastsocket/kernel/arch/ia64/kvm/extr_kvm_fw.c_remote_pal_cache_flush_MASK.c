
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cache_flush_args {long status; int operation; int cache_type; int progress; } ;


 long FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct cache_flush_args *VAR_1 = VAR_0;
 long VAR_2;
 u64 VAR_3 = VAR_1->progress;

 VAR_2 = FUNC_0(VAR_1->cache_type, VAR_1->operation,
     &VAR_3, ((void*)0));
 if (VAR_2 != 0)
 VAR_1->status = VAR_2;
}
