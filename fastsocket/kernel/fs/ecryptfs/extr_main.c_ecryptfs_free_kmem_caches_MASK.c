
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_cache_info {scalar_t__* cache; } ;


 int FUNC_0 (struct ecryptfs_cache_info*) ;
 struct ecryptfs_cache_info* VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct ecryptfs_cache_info *VAR_2;

  VAR_2 = &VAR_0[VAR_1];
  if (*(VAR_2->cache))
   FUNC_1(*(VAR_2->cache));
 }
}
