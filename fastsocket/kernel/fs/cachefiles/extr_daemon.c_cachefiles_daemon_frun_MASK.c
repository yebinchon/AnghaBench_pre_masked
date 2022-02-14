
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_cache {unsigned long fcull_percent; unsigned long frun_percent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct cachefiles_cache*,char*) ;
 unsigned long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(struct cachefiles_cache *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(",%s", VAR_2);

 if (!*VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2, &VAR_2, 10);
 if (VAR_2[0] != '%' || VAR_2[1] != '\0')
  return -VAR_0;

 if (VAR_3 <= VAR_1->fcull_percent || VAR_3 >= 100)
  return FUNC_1(VAR_1, VAR_2);

 VAR_1->frun_percent = VAR_3;
 return 0;
}
