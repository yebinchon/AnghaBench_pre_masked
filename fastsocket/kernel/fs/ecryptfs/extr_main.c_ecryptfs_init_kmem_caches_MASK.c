
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_cache_info {int name; int * cache; int ctor; int size; } ;


 int FUNC_0 (struct ecryptfs_cache_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ecryptfs_cache_info* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  struct ecryptfs_cache_info *VAR_5;

  VAR_5 = &VAR_3[VAR_4];
  *(VAR_5->cache) = FUNC_3(VAR_5->name, VAR_5->size,
    0, VAR_2, VAR_5->ctor);
  if (!*(VAR_5->cache)) {
   FUNC_1();
   FUNC_2(VAR_1, "%s: "
     "kmem_cache_create failed\n",
     VAR_5->name);
   return -VAR_0;
  }
 }
 return 0;
}
